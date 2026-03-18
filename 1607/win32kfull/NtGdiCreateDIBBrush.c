/*
 * XREFs of NtGdiCreateDIBBrush @ 0x1C02B3E00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     GreCreateDIBBrush @ 0x1C02B3ABC (GreCreateDIBBrush.c)
 */

__int64 __fastcall NtGdiCreateDIBBrush(char *Src, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  size_t v7; // rsi
  void *v10; // rbx
  __int64 DIBBrush; // rdi

  v7 = a3;
  v10 = 0LL;
  if ( a3 <= 0x2710000 )
    v10 = (void *)AllocFreeTmpBuffer(a3);
  if ( !v10 )
    return 0LL;
  if ( (_DWORD)v7 && ((unsigned __int64)&Src[v7] > W32UserProbeAddress || &Src[v7] < Src) )
    *W32UserProbeAddress = 0;
  memmove(v10, Src, v7);
  DIBBrush = GreCreateDIBBrush((unsigned int *)v10, a2, v7, a4, a5, a6);
  FreeTmpBuffer(v10);
  return DIBBrush;
}
