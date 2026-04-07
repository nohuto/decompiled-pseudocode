/*
 * XREFs of _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x180091B54
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094920 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  *((_BYTE *)a2[5] + 955) = 1;
  *((_BYTE *)a2[5] + 968) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*(CGroupingStoryboard **)a1, (struct CAnimationComponent *)a2);
}
