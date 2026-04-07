/*
 * XREFs of ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180039B30
 * Callers:
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800394B8 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180039568 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::ShouldUseDComp(CAnimatedTransitionVisual *this)
{
  return *((_BYTE *)this + 960);
}
