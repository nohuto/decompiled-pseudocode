/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E7E8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029434 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_678e02ded86544c2cd395b42c4824875_@@_N@Z @ 0x18008BB3C (--$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  CTopLevelWindow3D *v3; // rcx
  __int64 v4; // r8
  int v5; // ecx
  CTransitionVisualController *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[47] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 47);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v5 = *((_DWORD *)WindowDataByHwnd + 142);
      if ( (v5 & 0x30000000) == 0x30000000 || (v5 & 0x100000) != 0 )
      {
        LOBYTE(v4) = 1;
        CTransitionVisualController::ForEachOwnedWindow<_lambda_678e02ded86544c2cd395b42c4824875_>(
          WindowDataByHwnd,
          &v6,
          v4);
      }
    }
  }
}
