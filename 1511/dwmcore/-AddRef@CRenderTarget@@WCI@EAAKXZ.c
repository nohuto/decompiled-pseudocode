/*
 * XREFs of ?AddRef@CRenderTarget@@WCI@EAAKXZ @ 0x1800BC9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 40));
}
