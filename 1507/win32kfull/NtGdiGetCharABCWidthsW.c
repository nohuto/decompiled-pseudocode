/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x1C00DE030
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     GreGetCharABCWidthsW @ 0x1C00DE180 (GreGetCharABCWidthsW.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(HDC a1, __int64 a2, unsigned int a3, char *a4, int a5, char *a6)
{
  __int64 v6; // rsi
  unsigned int CharABCWidthsW; // r12d
  const void *v8; // rdi
  void *v9; // rbx
  int v10; // r14d
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r9
  char *v17; // rcx

  v6 = a3;
  CharABCWidthsW = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( !a6 )
    return 0LL;
  if ( a4 )
  {
    v10 = 1;
    if ( a3 - 1 <= 0x1387FFF )
      v9 = PALLOCMEM2(2 * a3, 1886221383LL, 0);
  }
  if ( !v10 || v9 )
  {
    if ( (unsigned int)v6 <= 0x341555 )
    {
      v11 = 12 * v6;
      v8 = (const void *)AllocFreeTmpBuffer((unsigned int)(12 * v6));
    }
    if ( v8 )
    {
      if ( v10 )
      {
        v17 = &a4[2 * v6];
        if ( v17 < a4 || (unsigned __int64)v17 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v9, a4, 2 * v6);
      }
      CharABCWidthsW = GreGetCharABCWidthsW(a1, a5, (__int64)v8);
      if ( CharABCWidthsW )
      {
        v15 = &a6[v11];
        if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 <= a6 )
          *W32UserProbeAddress = 0;
        memmove(a6, v8, v11);
      }
      FreeTmpBuffer(v8, v12, v13, v14);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
