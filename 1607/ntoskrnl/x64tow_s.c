/*
 * XREFs of x64tow_s @ 0x1401522DC
 * Callers:
 *     _i64tow_s @ 0x140152244 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1401522B4 (_ui64tow_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

__int64 __fastcall x64tow_s(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  __int16 *v11; // r8
  __int16 *v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int16 v15; // dx
  __int16 *v17; // r8
  __int16 v18; // cx

  v5 = a4;
  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    xHalFreeMessageTarget();
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
      a1 = -(__int64)a1;
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
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
    xHalFreeMessageTarget();
    return 22LL;
  }
}
