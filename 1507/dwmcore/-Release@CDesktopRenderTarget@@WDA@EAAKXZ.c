/*
 * XREFs of ?Release@CDesktopRenderTarget@@WDA@EAAKXZ @ 0x18009B7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 48));
}
