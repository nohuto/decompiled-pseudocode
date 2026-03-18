/*
 * XREFs of ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x180072DD0
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180074640 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18014F8C0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014FDCC (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x180072DC0 (-GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ.c)
 */

__int64 __fastcall CSwapChainBase::GetFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  __int64 (__fastcall *v4)(CSwapChainBase *); // rdi
  unsigned int FrontBufferIndex; // eax
  struct CD3DSurface *v6; // rdi

  v4 = *(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 304LL);
  if ( v4 == CSwapChainBase::GetFrontBufferIndex )
    FrontBufferIndex = CSwapChainBase::GetFrontBufferIndex(this);
  else
    FrontBufferIndex = v4(this);
  v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 32) + 8LL * FrontBufferIndex);
  *a2 = v6;
  (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  return 0LL;
}
