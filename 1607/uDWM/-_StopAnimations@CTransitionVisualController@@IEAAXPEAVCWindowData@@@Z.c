/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E1B4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@_N@Z @ 0x180008EAC (--$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  CTopLevelWindow3D *v3; // rcx
  int v4; // ecx
  CTransitionVisualController *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[49] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 49);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v4 = *((_DWORD *)WindowDataByHwnd + 146);
      if ( (v4 & 0x30000000) == 0x30000000 || (v4 & 0x100000) != 0 )
      {
        LOBYTE(v5) = 0;
        CTransitionVisualController::ForEachOwnedWindow<_lambda_9b37f3d03e1ad1f523dfdba086665a20_>(
          (__int64)WindowDataByHwnd,
          (__int64)&v5,
          1);
      }
    }
  }
}
