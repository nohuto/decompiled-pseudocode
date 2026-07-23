/*
 * XREFs of x64toa_s @ 0x1800A0C7C
 * Callers:
 *     _i64toa_s @ 0x1800A0BB0 (_i64toa_s.c)
 *     _ui64toa_s @ 0x1800A0C40 (_ui64toa_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

__int64 __fastcall x64toa_s(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  char *v11; // r8
  char *v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // dl
  char *v17; // r8
  char v18; // cl

  v5 = a4;
  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    invalid_parameter();
    return v9;
  }
  *a2 = 0;
  v9 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
      a1 = -(__int64)a1;
    }
    v12 = v11;
    do
    {
      v13 = a1 / v5;
      v14 = a1 % v5;
      a1 /= v5;
      if ( (unsigned int)v14 <= 9 )
        v15 = v14 + 48;
      else
        v15 = v14 + 87;
      *v11 = v15;
      ++v10;
      ++v11;
    }
    while ( v13 && v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v11 = 0;
    v17 = v11 - 1;
    do
    {
      v18 = *v17;
      *v17-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v17 );
    return 0LL;
  }
  else
  {
LABEL_20:
    invalid_parameter();
    return 22LL;
  }
}
