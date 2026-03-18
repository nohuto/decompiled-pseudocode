/*
 * XREFs of ?GetAlphaMode@CHwDisplayRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800C15C0
 * Callers:
 *     ?GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800C0F90 (-GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetAlphaMode(CHwDisplayRenderTarget *this)
{
  return *((unsigned int *)this + 74);
}
