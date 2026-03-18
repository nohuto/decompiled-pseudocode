/*
 * XREFs of ?GetPixelFormat@COffScreenRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800BF940
 * Callers:
 *     ?GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800C1090 (-GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[60];
  return 0LL;
}
