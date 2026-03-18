/*
 * XREFs of ?Release@CDesktopRenderTarget@@WJI@EAAKXZ @ 0x1800BF8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CMILCOMBase *)(a1 - 152));
}
