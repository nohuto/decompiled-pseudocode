/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x18000F2C0
 * Callers:
 *     ?Release@CFlipChain@@W7EAAKXZ @ 0x1800BD500 (-Release@CFlipChain@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800BD510 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WEI@EAAKXZ @ 0x1800BD5C0 (-Release@CHwndBitmap@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CMILCOMBase::InternalRelease((CHwndBitmap *)((char *)this + 16));
}
