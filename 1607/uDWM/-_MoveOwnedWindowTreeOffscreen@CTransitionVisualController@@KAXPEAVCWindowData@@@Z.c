/*
 * XREFs of ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180041EEC
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@_N@Z @ 0x180041F28 (--$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@.c)
 */

void __fastcall CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(struct CTopLevelWindow **a1)
{
  __int64 v2; // r8
  char v3; // [rsp+30h] [rbp+8h] BYREF

  CTransitionVisualController::_MoveWindowOffscreen(a1[48], 1);
  LOBYTE(v2) = 1;
  v3 = 0;
  CTransitionVisualController::ForEachOwnedWindow<_lambda_7f932e07823e6f97f5e718b7a44a95ae_>(a1, &v3, v2);
}
