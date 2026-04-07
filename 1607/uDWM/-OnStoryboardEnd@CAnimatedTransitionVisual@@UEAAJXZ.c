/*
 * XREFs of ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180013470
 * Callers:
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003F3F8 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardEnd(CAnimatedTransitionVisual *this)
{
  *((_BYTE *)this + 969) = 0;
  return 0LL;
}
