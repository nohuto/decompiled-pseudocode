/*
 * XREFs of ?AddRef@CDesktopRenderTarget@@WJI@EAAKXZ @ 0x1800BF830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 152));
}
