/*
 * XREFs of ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180043000
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x1800426A0 (-NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::NotifySwapChainFullScreen(CHwFullScreenRenderTarget *this, __int64 a2)
{
  void (__fastcall *v2)(CDWMSwapChain *, char); // rsi

  v2 = *(void (__fastcall **)(CDWMSwapChain *, char))(**((_QWORD **)this + 4) + 216LL);
  if ( v2 == CDWMSwapChain::NotifySwapChainFullScreen )
    CDWMSwapChain::NotifySwapChainFullScreen(*((CDWMSwapChain **)this + 4), a2);
  else
    v2(*((CDWMSwapChain **)this + 4), a2);
}
