/*
 * XREFs of ?GetPixelFormat@CHwDisplayRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800BDE60
 * Callers:
 *     ?GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800BD970 (-GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[58];
  return 0LL;
}
