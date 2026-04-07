/*
 * XREFs of ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180005614
 * Callers:
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005630 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCResource@@3PEA_NPEAUMilPoint3F@@@Z @ 0x18000C744 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013B78 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800910BC (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CAnimatedTransitionVisual::GetBrushNoRef(CAnimatedTransitionVisual *this)
{
  struct CResource *result; // rax

  result = (struct CResource *)*((_QWORD *)this + 74);
  if ( !result )
    return (struct CResource *)*((_QWORD *)this + 72);
  return result;
}
