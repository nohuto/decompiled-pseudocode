/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ @ 0x18009ACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CComposeTop *__fastcall CHwTextureRenderTarget::GetTargetSurfaceNoRef(__int64 a1)
{
  return CDesktopRenderTarget::GetComposeTopContentNoRef((CDesktopRenderTarget *)(a1 - 176));
}
