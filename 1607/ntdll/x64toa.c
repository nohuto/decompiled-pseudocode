/*
 * XREFs of x64toa @ 0x1800974B0
 * Callers:
 *     _i64toa @ 0x180097390 (_i64toa.c)
 * Callees:
 *     <none>
 */

char __fastcall x64toa(unsigned __int64 a1, char *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r11
  char *v5; // r10
  unsigned __int64 v6; // rax
  char *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  char v10; // dl
  char *v11; // r10
  char result; // al
  char v13; // cl

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -(__int64)a1;
  }
  v7 = v5;
  do
  {
    v9 = v6;
    v6 /= v4;
    v8 = v9 % v4;
    if ( (unsigned int)(v9 % v4) <= 9 )
      v10 = v8 + 48;
    else
      v10 = v8 + 87;
    *v5++ = v10;
  }
  while ( v6 );
  *v5 = 0;
  v11 = v5 - 1;
  do
  {
    result = *v7;
    v13 = *v11;
    *v11-- = *v7;
    *v7++ = v13;
  }
  while ( v7 < v11 );
  return result;
}
