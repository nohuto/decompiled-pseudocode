/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CDesktopRenderTarget@@WCI@EAAJXZ @ 0x180099D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::PresentOutOfFrameDirectFlip(__int64 a1)
{
  return CSwRenderTargetGetBounds::CreateD2DBitmap(a1 - 40);
}
