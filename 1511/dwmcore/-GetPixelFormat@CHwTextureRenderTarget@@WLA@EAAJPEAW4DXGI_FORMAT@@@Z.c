/*
 * XREFs of ?GetPixelFormat@CHwTextureRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800BE040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormat(__int64 a1, enum DXGI_FORMAT *a2)
{
  return CHwTextureRenderTarget::GetPixelFormat((enum DXGI_FORMAT *)(a1 - 176), a2);
}
