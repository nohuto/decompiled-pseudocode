/*
 * XREFs of ?GetAlphaMode@CHwTextureRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800BDF80
 * Callers:
 *     ?GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800BDF90 (-GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetAlphaMode(CHwTextureRenderTarget *this)
{
  return *((unsigned int *)this + 51);
}
