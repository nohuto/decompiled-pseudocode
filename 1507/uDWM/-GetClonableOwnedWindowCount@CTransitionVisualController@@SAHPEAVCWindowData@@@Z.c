/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800923E4 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180092900 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800955D0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180001B78 (--$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@.c)
 */

__int64 __fastcall CTransitionVisualController::GetClonableOwnedWindowCount(
        struct CWindowData *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(a3) = 1;
  v5 = &v4;
  CTransitionVisualController::ForEachOwnedWindow<_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_>(a1, &v5, a3);
  return v4;
}
