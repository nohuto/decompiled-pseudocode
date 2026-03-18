/*
 * XREFs of ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x180073200
 * Callers:
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180073DB0 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::NotifySwapChainFullScreen(CDWMSwapChain *this, char a2)
{
  *((_BYTE *)this + 395) = a2;
}
