/*
 * XREFs of ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x18007A510
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18008FB40 (-IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsHardwareProtected(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 408);
}
