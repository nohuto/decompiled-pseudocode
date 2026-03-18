/*
 * XREFs of ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x1800731E0
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18007FD80 (-IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsHardwareProtected(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 392);
}
