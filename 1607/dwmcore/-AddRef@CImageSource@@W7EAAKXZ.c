/*
 * XREFs of ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800C05A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CImageSource::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 8));
}
