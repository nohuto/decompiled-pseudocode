/*
 * XREFs of NtGdiExtCreatePen @ 0x140081F40
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreatePen @ 0x14008259C (GreExtCreatePen.c)
 */

__int64 __fastcall NtGdiExtCreatePen(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        void *a5,
        void *a6,
        unsigned int a7,
        const void *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  int v12; // r14d
  void *v14; // rbx
  void *v15; // rsi
  __int64 Pen; // rdi

  v12 = a3;
  v14 = 0LL;
  v15 = 0LL;
  Pen = 1LL;
  if ( a8 )
  {
    if ( a7 <= 0x9C4000 && 4 * a7 )
      v14 = (void *)Win32AllocPool(4 * a7, 1886221383LL, a3);
    Pen = -(__int64)(v14 != 0LL) & 1;
  }
  if ( v12 == 6 )
  {
    if ( a9 <= 0x2710000 )
      v15 = (void *)AllocFreeTmpBuffer(a9);
    Pen &= -(__int64)(v15 != 0LL);
  }
  if ( Pen )
  {
    if ( a8 )
      GreProbeAndReadFromUntrustedVa(v14, 4LL * a7, a8, 4LL * a7, 4uLL);
    if ( v12 == 6 )
    {
      GreProbeAndReadFromUntrustedVa(v15, a9, a6, a9, 4uLL);
      a6 = v15;
    }
    Pen = GreExtCreatePen(a1, a2, v12, a4, a5, a6, a7, (__int64)v14, a9, a10, a11);
  }
  if ( v15 )
    FreeTmpBuffer(v15);
  if ( v14 )
    Win32FreePool(v14);
  return Pen;
}
