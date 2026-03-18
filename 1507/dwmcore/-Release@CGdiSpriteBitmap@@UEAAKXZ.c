/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800536E0
 * Callers:
 *     ?Release@CFlipChain@@W7EAAKXZ @ 0x18009A800 (-Release@CFlipChain@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x18009A960 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WEI@EAAKXZ @ 0x18009A970 (-Release@CHwndBitmap@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  return CMILCOMBase::InternalRelease((CGdiSpriteBitmap *)((char *)this + 16));
}
