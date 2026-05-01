/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C8A0
 * Callers:
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18002B734 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x18002D588 (-CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z.c)
 * Callees:
 *     memset @ 0x18002F32C (memset.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const unsigned __int16 *v4; // r10
  unsigned __int64 v5; // r11
  int v6; // ebx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi
  signed __int64 v10; // r10
  unsigned __int16 *v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rdx

  v4 = a3;
  v5 = a4;
  v6 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v6 = -2147024809;
  if ( v6 < 0 )
    goto LABEL_8;
  if ( a4 >= 0x7FFFFFFF )
  {
    v6 = -2147024809;
LABEL_8:
    if ( a2 )
      *(_WORD *)a1 = 0;
    return (unsigned int)v6;
  }
  if ( !a3 )
  {
    v4 = (const unsigned __int16 *)&unk_1800359D8;
    v5 = 0LL;
  }
  v6 = 0;
  if ( a2 )
  {
    v8 = v5 - a2;
    v9 = a2;
    v10 = (char *)v4 - a1;
    v11 = (unsigned __int16 *)a1;
    v12 = 0LL;
    do
    {
      if ( !(v8 + v9) )
        break;
      v13 = *(unsigned __int16 *)((char *)v11 + v10);
      if ( !v13 )
        break;
      *v11 = v13;
      ++v12;
      ++v11;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
      --v11;
      v6 = -2147024774;
      --v12;
    }
    v14 = a2 - v12;
    *v11 = 0;
    if ( v6 >= 0 && v14 > 1 && 2 * v14 > 2 )
      memset(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  }
  else if ( v5 && *v4 )
  {
    return (unsigned int)(a1 != 0LL ? -2147024774 : -2147024809);
  }
  return (unsigned int)v6;
}
