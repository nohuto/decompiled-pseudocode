/*
 * XREFs of xtow_s @ 0x140152400
 * Callers:
 *     _itow_s @ 0x140152268 (_itow_s.c)
 *     _ltow_s @ 0x140152290 (_ltow_s.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

__int64 __fastcall xtow_s(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  __int16 *v11; // r8
  __int16 *v12; // r9
  int v13; // eax
  unsigned int v14; // edx
  __int16 v15; // dx
  __int16 *v17; // r8
  __int16 v18; // cx

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
      a1 = -a1;
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
    }
    v12 = v11;
    do
    {
      v14 = a1 % a4;
      v13 = a1 / a4;
      a1 /= a4;
      if ( v14 <= 9 )
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
