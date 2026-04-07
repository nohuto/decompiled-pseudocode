/*
 * XREFs of ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x18000BF98
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002C444 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CAnimationComponent::RecordWindowRect(CAnimationComponent *this)
{
  struct CWindowData *WindowDataByHwnd; // rax

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                       *((HWND *)this + 2));
  if ( WindowDataByHwnd )
    *(_OWORD *)((char *)this + 88) = *((_OWORD *)WindowDataByHwnd + 3);
}
