/*
 * XREFs of ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800DE018
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801403C0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014092C (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSwapChainBase::GetFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  struct CD3DSurface *v3; // rdi

  v3 = *(struct CD3DSurface **)(*((_QWORD *)this + 32)
                              + 8LL * (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 288LL))(this));
  *a2 = v3;
  (**(void (__fastcall ***)(struct CD3DSurface *))v3)(v3);
  return 0LL;
}
