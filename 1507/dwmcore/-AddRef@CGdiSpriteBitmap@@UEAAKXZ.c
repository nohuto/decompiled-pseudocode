/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800536F0
 * Callers:
 *     ?AddRef@CHwndBitmap@@WEI@EAAKXZ @ 0x18009A690 (-AddRef@CHwndBitmap@@WEI@EAAKXZ.c)
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x18009A840 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x18009A9C0 (-AddRef@CFlipChain@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::AddRef(CGdiSpriteBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CGdiSpriteBitmap *)((char *)this + 16));
}
