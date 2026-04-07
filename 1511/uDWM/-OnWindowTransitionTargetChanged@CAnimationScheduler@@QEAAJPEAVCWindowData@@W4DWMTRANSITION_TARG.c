/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003915C
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002DB60 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180005B1C (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180013688 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180039F08 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_pq @ 0x18007E524 (Template_pq.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int v12; // edx
  __int64 i; // rsi
  _DWORD *v14; // r14
  struct CTransitionWindowSnapshot *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_pq(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 580), a4);
  CopyRect((LPRECT)(a2 + 596), lprcSrc);
  CopyRect((LPRECT)(a2 + 612), a6);
  CopyRect((LPRECT)(a2 + 628), a7);
  CopyRect((LPRECT)(a2 + 644), a8);
  *(_DWORD *)(a2 + 576) &= 0x2000000u;
  *(_DWORD *)(a2 + 576) |= a3;
  v12 = *(_DWORD *)(a2 + 576);
  if ( *(_QWORD *)(a2 + 384) )
  {
    if ( (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
    {
      if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24), v12, 0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CVisual ***)CDesktopManager::s_pDesktopManagerInstance + 25),
            (struct CWindowData *)a2);
          *(_DWORD *)(a2 + 576) |= 0x4000000u;
          if ( CTransitionVisualController::GetStoredSnapshotNoRef(
                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                 *(HWND *)(a2 + 40),
                 &v16) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 33) + 32LL) + 576LL) = *(_DWORD *)(a2 + 576);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v14 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v14[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, a2, a3);
  }
  return 0LL;
}
