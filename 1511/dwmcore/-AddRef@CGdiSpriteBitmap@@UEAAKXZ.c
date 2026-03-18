/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@UEAAKXZ @ 0x18000F3B0
 * Callers:
 *     ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800BD310 (-AddRef@CFlipChain@@WBA@EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WEI@EAAKXZ @ 0x1800BD320 (-AddRef@CHwndBitmap@@WEI@EAAKXZ.c)
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800BD540 (-AddRef@CImageSource@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::AddRef(CGdiSpriteBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CGdiSpriteBitmap *)((char *)this + 16));
}
