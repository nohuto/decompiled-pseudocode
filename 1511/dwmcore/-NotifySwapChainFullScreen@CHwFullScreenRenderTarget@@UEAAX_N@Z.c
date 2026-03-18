/*
 * XREFs of ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180073DB0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x180073200 (-NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::NotifySwapChainFullScreen(CHwFullScreenRenderTarget *this, __int64 a2)
{
  void (__fastcall *v2)(CDWMSwapChain *, char); // rsi

  v2 = *(void (__fastcall **)(CDWMSwapChain *, char))(**((_QWORD **)this + 4) + 224LL);
  if ( v2 == CDWMSwapChain::NotifySwapChainFullScreen )
    CDWMSwapChain::NotifySwapChainFullScreen(*((CDWMSwapChain **)this + 4), a2);
  else
    v2(*((CDWMSwapChain **)this + 4), a2);
}
