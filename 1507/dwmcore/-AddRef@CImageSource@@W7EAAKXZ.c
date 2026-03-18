/*
 * XREFs of ?AddRef@CImageSource@@W7EAAKXZ @ 0x18009A840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSource::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 8));
}
