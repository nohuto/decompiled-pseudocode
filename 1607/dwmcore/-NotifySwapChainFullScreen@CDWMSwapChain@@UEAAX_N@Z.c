/*
 * XREFs of ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x18007A520
 * Callers:
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18007AE40 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::NotifySwapChainFullScreen(CDWMSwapChain *this, char a2)
{
  *((_BYTE *)this + 411) = a2;
}
