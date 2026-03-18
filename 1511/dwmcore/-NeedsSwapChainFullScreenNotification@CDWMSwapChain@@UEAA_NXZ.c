/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ @ 0x1800731F0
 * Callers:
 *     ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18000A6F0 (-NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::NeedsSwapChainFullScreenNotification(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 394);
}
