/*
 * XREFs of sub_180093284 @ 0x180093284
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094CE0 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall sub_180093284(CGroupingStoryboard **a1, CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], 0.0);
  *((_BYTE *)a2[5] + 955) = 1;
  *((_BYTE *)a2[5] + 968) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*a1, (struct CAnimationComponent *)a2);
}
