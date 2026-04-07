/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180010D24
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002FE20 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000EBCC (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000FBF8 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x1800421CC (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_pq @ 0x18007F0D8 (Template_pq.c)
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
  __int64 i; // rdi
  _DWORD *v14; // rcx
  __int64 v16; // r8
  struct CTransitionWindowSnapshot *v17; // [rsp+30h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_pq(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 588), a4);
  CopyRect((LPRECT)(a2 + 604), lprcSrc);
  CopyRect((LPRECT)(a2 + 620), a6);
  CopyRect((LPRECT)(a2 + 636), a7);
  CopyRect((LPRECT)(a2 + 652), a8);
  *(_DWORD *)(a2 + 584) &= 0x2000000u;
  *(_DWORD *)(a2 + 584) |= a3;
  v12 = *(_DWORD *)(a2 + 584);
  if ( *(_QWORD *)(a2 + 384) )
  {
    if ( (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
    {
      if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22), v12, 0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CVisual ***)CDesktopManager::s_pDesktopManagerInstance + 23),
            (struct CWindowData *)a2,
            v16);
          *(_DWORD *)(a2 + 584) |= 0x4000000u;
          if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      *(HWND *)(a2 + 40),
                      &v17) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 33) + 32LL) + 584LL) = *(_DWORD *)(a2 + 584);
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
