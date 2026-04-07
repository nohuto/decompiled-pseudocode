/*
 * XREFs of sub_180093234 @ 0x180093234
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977D0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall sub_180093234(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  *((_BYTE *)a2[5] + 955) = 1;
  *((_BYTE *)a2[5] + 968) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*(CGroupingStoryboard **)a1, (struct CAnimationComponent *)a2);
}
