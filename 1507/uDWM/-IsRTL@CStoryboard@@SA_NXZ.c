/*
 * XREFs of ?IsRTL@CStoryboard@@SA_NXZ @ 0x180011124
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000E578 (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008BE50 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x18008D1D0 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180093A50 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095DE0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029434 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

char CStoryboard::IsRTL(void)
{
  int v0; // eax
  char v1; // bl
  HWND WindowW; // rax
  struct CWindowData *WindowDataByHwnd; // rax

  v0 = CStoryboard::s_eRTL;
  v1 = 1;
  if ( !CStoryboard::s_eRTL )
  {
    WindowW = FindWindowW(L"ImmersiveLauncher", 0LL);
    if ( WindowW
      && (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                               WindowW)) != 0LL )
    {
      if ( (*((_DWORD *)WindowDataByHwnd + 26) & 0x400000) != 0 )
      {
        CStoryboard::s_eRTL = 2;
        return v1;
      }
      v0 = 1;
      CStoryboard::s_eRTL = 1;
    }
    else
    {
      v0 = CStoryboard::s_eRTL;
    }
  }
  if ( v0 != 2 )
    return 0;
  return v1;
}
