/*
 * XREFs of ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180039B10
 * Callers:
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800393D4 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardEnd(CAnimatedTransitionVisual *this)
{
  *((_BYTE *)this + 969) = 0;
  return 0LL;
}
