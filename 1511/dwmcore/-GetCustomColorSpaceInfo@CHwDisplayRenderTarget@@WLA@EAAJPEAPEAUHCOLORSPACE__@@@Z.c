/*
 * XREFs of ?GetCustomColorSpaceInfo@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAUHCOLORSPACE__@@@Z @ 0x1800BD920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwDisplayRenderTarget::GetCustomColorSpaceInfo()
{
  return CSwRenderTargetGetBounds::CreateD2DBitmap();
}
