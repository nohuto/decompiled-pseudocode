/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C005FA64
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BAF44 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // r9
  __int64 v6; // r8
  unsigned __int16 *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // r10
  unsigned __int16 v12; // r9

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    v6 = 260 - v4;
    v7 = &a1[260 - v4];
    v8 = 0;
    v9 = 260 - v6;
    if ( 260 == v6 )
      goto LABEL_13;
    v10 = 2147483646LL;
    v11 = (char *)(a3 - (char *)v7);
    do
    {
      if ( !v10 )
        break;
      v12 = *(unsigned __int16 *)((char *)v7 + (_QWORD)v11);
      if ( !v12 )
        break;
      *v7 = v12;
      --v10;
      ++v7;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_13:
      --v7;
      v8 = -2147024774;
    }
    *v7 = 0;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v8;
}
