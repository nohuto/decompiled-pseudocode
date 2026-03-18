/*
 * XREFs of ?GetComposeTopContentNoRef@CDesktopRenderTarget@@UEAAPEAVCComposeTop@@XZ @ 0x18009ACC0
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ @ 0x18009ACD0 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposeTop *__fastcall CDesktopRenderTarget::GetComposeTopContentNoRef(CDesktopRenderTarget *this)
{
  return (struct CComposeTop *)*((_QWORD *)this + 21);
}
