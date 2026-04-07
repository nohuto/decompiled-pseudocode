/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18000C710
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002A830 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000968C (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000B6E8 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_pq @ 0x180076624 (Template_pq.c)
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
  CopyRect((LPRECT)(a2 + 572), a4);
  CopyRect((LPRECT)(a2 + 588), lprcSrc);
  CopyRect((LPRECT)(a2 + 604), a6);
  CopyRect((LPRECT)(a2 + 620), a7);
  CopyRect((LPRECT)(a2 + 636), a8);
  *(_DWORD *)(a2 + 568) &= 0x2000000u;
  *(_DWORD *)(a2 + 568) |= a3;
  v12 = *(_DWORD *)(a2 + 568);
  if ( *(_QWORD *)(a2 + 368) )
  {
    if ( (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
    {
      if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24), v12, 0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
            (struct CWindowData *)a2);
          *(_DWORD *)(a2 + 568) |= 0x4000000u;
          if ( CTransitionVisualController::GetStoredSnapshotNoRef(
                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                 *(HWND *)(a2 + 40),
                 &v16) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 33) + 32LL) + 568LL) = *(_DWORD *)(a2 + 568);
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
