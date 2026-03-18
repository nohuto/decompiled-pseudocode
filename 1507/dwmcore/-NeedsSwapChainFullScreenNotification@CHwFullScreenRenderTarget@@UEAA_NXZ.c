/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x180005F70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification(CHwFullScreenRenderTarget *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 224LL))(*((_QWORD *)this + 4));
}
