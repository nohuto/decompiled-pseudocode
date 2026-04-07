/*
 * XREFs of ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180010F38
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x180010F6C (--$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@.c)
 */

void __fastcall CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(struct CTopLevelWindow **a1)
{
  __int64 v2; // r8
  char v3; // [rsp+30h] [rbp+8h] BYREF

  CTransitionVisualController::_MoveWindowOffscreen(a1[48], 1);
  LOBYTE(v2) = 1;
  CTransitionVisualController::ForEachOwnedWindow<_lambda_ca6c6626191e523f5e2504449ec2d90f_>(a1, &v3, v2);
}
