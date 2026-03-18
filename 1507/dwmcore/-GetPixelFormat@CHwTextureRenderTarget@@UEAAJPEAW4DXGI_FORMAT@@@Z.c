/*
 * XREFs of ?GetPixelFormat@CHwTextureRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009AF00
 * Callers:
 *     ?GetPixelFormat@CHwTextureRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009B350 (-GetPixelFormat@CHwTextureRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[50];
  return 0LL;
}
