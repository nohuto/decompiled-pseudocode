/*
 * XREFs of ?GetAlphaMode@CHwTextureRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009B2C0
 * Callers:
 *     ?GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009B2D0 (-GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetAlphaMode(CHwTextureRenderTarget *this)
{
  return *((unsigned int *)this + 51);
}
