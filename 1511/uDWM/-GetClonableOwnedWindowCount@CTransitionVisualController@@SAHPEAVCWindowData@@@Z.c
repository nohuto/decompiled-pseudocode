/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18001138C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094CE0 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180095200 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096FC0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180010FC0 (--$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@.c)
 */

__int64 __fastcall CTransitionVisualController::GetClonableOwnedWindowCount(struct CWindowData *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int *v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = &v2;
  CTransitionVisualController::ForEachOwnedWindow<_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_>((__int64)a1, &v3, 1);
  return v2;
}
