/*
 * XREFs of NtGdiExtCreatePen @ 0x1C02A7320
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     GreExtCreatePen @ 0x1C010D128 (GreExtCreatePen.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreatePen(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        char *a6,
        unsigned int a7,
        char *Src,
        size_t Size,
        int a10,
        __int64 a11)
{
  int v13; // r13d
  void *v14; // rsi
  char *v15; // rbx
  __int64 Pen; // rdi
  size_t v17; // r8
  char *v18; // rcx

  v13 = a2;
  v14 = 0LL;
  v15 = 0LL;
  Pen = 1LL;
  if ( Src )
  {
    if ( a7 <= 0x9C4000 )
      v14 = PALLOCMEM2(4 * a7, 1886221383LL, 0);
    a2 = -(__int64)(v14 != 0LL);
    Pen = a2 & 1;
  }
  if ( a3 == 6 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v15 = (char *)AllocFreeTmpBuffer((unsigned int)Size);
    a2 = -(__int64)(v15 != 0LL);
    Pen &= a2;
  }
  if ( Pen )
  {
    if ( Src )
    {
      v17 = 4LL * a7;
      if ( &Src[v17] < Src || (unsigned __int64)&Src[v17] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v14, Src, v17);
    }
    if ( a3 == 6 )
    {
      v18 = &a6[(unsigned int)Size];
      if ( v18 < a6 || (unsigned __int64)v18 > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v15, a6, (unsigned int)Size);
      a6 = v15;
    }
    Pen = (__int64)GreExtCreatePen(a1, v13, a3, a4, a5, (__int64)a6, a7, (int *)v14, Size, a10, a11);
  }
  if ( v15 )
    FreeTmpBuffer(v15);
  if ( v14 )
    Win32FreePool(v14, a2);
  return Pen;
}
