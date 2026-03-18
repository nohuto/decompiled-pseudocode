/*
 * XREFs of ?Release@CDesktopRenderTarget@@WFA@EAAKXZ @ 0x1800BCAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 80));
}
