/*
 * XREFs of _lambda_c5b80c29b716117d9c8fc9ac03427231_::operator() @ 0x180090394
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095DE0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_c5b80c29b716117d9c8fc9ac03427231_::operator()(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  *((_BYTE *)a2[5] + 955) = 1;
  *((_BYTE *)a2[5] + 968) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*(CGroupingStoryboard **)a1, (struct CAnimationComponent *)a2);
}
