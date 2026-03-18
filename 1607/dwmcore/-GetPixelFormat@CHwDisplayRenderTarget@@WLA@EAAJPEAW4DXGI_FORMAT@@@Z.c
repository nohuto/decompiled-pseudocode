/*
 * XREFs of ?GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800C1090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetPixelFormat(__int64 a1, enum DXGI_FORMAT *a2)
{
  return COffScreenRenderTarget::GetPixelFormat((enum DXGI_FORMAT *)(a1 - 176), a2);
}
