#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max_num 75

void suffle(int array[], int size) {
	for (int i = size - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		int temp = array[i];
		array[j] = temp;
	}
}

int main(void) {
	int number[Max_num];
	int b = 0;

	for (int i = 0; i < Max_num; i++) {
		number[i] = i + 1;
	}

	srand((unsigned int)time(NULL));

	suffle(number, Max_num);

	printf("< -- ビンゴシステム -- >\n");
	printf("Enterを押すと数字が出てきます\n");
	printf("qを押すと終わります:\n");
	printf("\n");


	while (b < Max_num) {
		char input = getchar();

		if (input == 'q') {
			break;
		}

		printf("number: %d\n", number[b]);
		b++;

		printf("履歴: ");
		for (int i = 0; i < b; i++) {
			printf("%d, ", number[i]);
		}
		printf("\n");
	}

	if (b == Max_num){
		printf("全ての数字が出ました");
		}

	return 0;
}