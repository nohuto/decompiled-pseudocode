/*
 * XREFs of ?AddRef@CHwndRenderTarget@@WDA@EAAKXZ @ 0x180099DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndRenderTarget::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 48));
}
