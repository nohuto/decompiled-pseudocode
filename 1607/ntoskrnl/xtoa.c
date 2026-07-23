/*
 * XREFs of xtoa @ 0x14014D5F8
 * Callers:
 *     _itoa @ 0x14014D5CC (_itoa.c)
 * Callees:
 *     <none>
 */

char __fastcall xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v5; // r10
  unsigned int v6; // eax
  char *v7; // r8
  unsigned int v8; // edx
  char v9; // dl
  char *v10; // r10
  char result; // al
  char v12; // cl

  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -a1;
  }
  v7 = v5;
  do
  {
    v8 = v6 % a3;
    v6 /= a3;
    if ( v8 <= 9 )
      v9 = v8 + 48;
    else
      v9 = v8 + 87;
    *v5++ = v9;
  }
  while ( v6 );
  *v5 = 0;
  v10 = v5 - 1;
  do
  {
    result = *v7;
    v12 = *v10;
    *v10-- = *v7;
    *v7++ = v12;
  }
  while ( v7 < v10 );
  return result;
}
