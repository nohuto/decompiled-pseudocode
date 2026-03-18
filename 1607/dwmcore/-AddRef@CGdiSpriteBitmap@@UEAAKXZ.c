/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@UEAAKXZ @ 0x18002AB60
 * Callers:
 *     ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800C02C0 (-AddRef@CFlipChain@@WBA@EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WJA@EAAKXZ @ 0x1800C03B0 (-AddRef@CHwndBitmap@@WJA@EAAKXZ.c)
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800C05A0 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C0630 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::AddRef(CGdiSpriteBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CGdiSpriteBitmap *)((char *)this + 16));
}
