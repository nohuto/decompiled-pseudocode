/*
 * XREFs of ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180013490
 * Callers:
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003F4A0 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003F53C (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::ShouldUseDComp(CAnimatedTransitionVisual *this)
{
  return *((_BYTE *)this + 960);
}
