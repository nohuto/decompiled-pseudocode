/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x1C00E1790
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     GreGetCharABCWidthsW @ 0x1C00E18E0 (GreGetCharABCWidthsW.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(HDC a1, __int64 a2, unsigned int a3, char *a4, int a5, char *a6)
{
  __int64 v6; // rsi
  unsigned int CharABCWidthsW; // r12d
  const void *v8; // rdi
  void *v9; // rbx
  int v10; // r14d
  unsigned int v11; // r15d
  char *v12; // r9
  char *v14; // rcx

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
        v14 = &a4[2 * v6];
        if ( v14 < a4 || (unsigned __int64)v14 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v9, a4, 2 * v6);
      }
      CharABCWidthsW = GreGetCharABCWidthsW(a1, a5, (__int64)v8);
      if ( CharABCWidthsW )
      {
        v12 = &a6[v11];
        if ( (unsigned __int64)v12 > W32UserProbeAddress || v12 <= a6 )
          *W32UserProbeAddress = 0;
        memmove(a6, v8, v11);
      }
      FreeTmpBuffer(v8);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
