/*
 * XREFs of NtGdiCreateDIBBrush @ 0x1403311A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 */

__int64 __fastcall NtGdiCreateDIBBrush(const void *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  unsigned __int64 v7; // rsi
  void *v10; // rbx
  __int64 DIBBrush; // rdi

  v7 = a3;
  v10 = 0LL;
  if ( a3 <= 0x2710000 )
    v10 = (void *)AllocFreeTmpBuffer(a3);
  if ( !v10 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v10, v7, a1, v7, 1uLL);
  DIBBrush = GreCreateDIBBrush((char *)v10, a2, v7, a4, a5, a6);
  FreeTmpBuffer(v10);
  return DIBBrush;
}
