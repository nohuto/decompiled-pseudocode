/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000516C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093160 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093640 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@_N@Z @ 0x180005308 (--$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@.c)
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
  CTransitionVisualController::ForEachOwnedWindow<_lambda_ccaea7de34ba34ea3a568d9728ee50f3_>(a1, &v5, a3);
  return v4;
}
