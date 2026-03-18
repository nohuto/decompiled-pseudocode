/*
 * XREFs of ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x180042690
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180044110 (-IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsHardwareProtected(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 360);
}
