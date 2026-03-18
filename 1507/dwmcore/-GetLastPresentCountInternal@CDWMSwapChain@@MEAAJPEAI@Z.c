/*
 * XREFs of ?GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z @ 0x180042780
 * Callers:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180043200 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::GetLastPresentCountInternal(CDWMSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 120LL))(
           *((_QWORD *)this + 36),
           a2);
}
