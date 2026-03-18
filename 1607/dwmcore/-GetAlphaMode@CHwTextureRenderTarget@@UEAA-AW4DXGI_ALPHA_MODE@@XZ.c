/*
 * XREFs of ?GetAlphaMode@CHwTextureRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800C1790
 * Callers:
 *     ?GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800C17B0 (-GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetAlphaMode(CHwTextureRenderTarget *this)
{
  return *((unsigned int *)this + 55);
}
