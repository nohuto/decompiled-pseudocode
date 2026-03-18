/*
 * XREFs of ?AddRef@CRenderTarget@@WCI@EAAKXZ @ 0x18009B730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 40));
}
