/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000FDF8 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800107F4 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BE00 (-GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E1B4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E224 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000EBCC (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000EBF0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9D0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9E0 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FB60 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180010EDC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdx
  struct _LIST_ENTRY *WindowListForDesktop; // rbp
  struct _LIST_ENTRY *Blink; // r15
  const struct StoryboardInfo *(__fastcall *v9)(CAppArrangementDelayed *); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax
  int v11; // r12d
  __int64 v12; // rbx
  const struct StoryboardInfo *v13; // rdi
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rbp
  struct CVisual *v17; // r14
  int v18; // eax
  unsigned int v19; // ebp
  int v20; // eax
  int inserted; // eax
  unsigned __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v23; // [rsp+38h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v24; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v22 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v22) )
      return 2147500037LL;
    v6 = v22;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v6);
  v24 = WindowListForDesktop;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    return 0LL;
  while ( 1 )
  {
    v9 = *(const struct StoryboardInfo *(__fastcall **)(CAppArrangementDelayed *))(*(_QWORD *)a2 + 16LL);
    if ( v9 == CLauncherLaunch::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherDismiss::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideOutCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideInCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideInCharm::GetStoryboardInfo(a2);
    }
    else
    {
      StoryboardInfo = v9 == CAppArrangementDelayed::GetStoryboardInfo
                     ? CAppArrangementDelayed::GetStoryboardInfo(a2)
                     : (const struct StoryboardInfo *)((__int64 (__fastcall *)(struct CStoryboard *, const struct StoryboardInfo *(__fastcall *)(CSlideOutCharm *__hidden), const struct StoryboardInfo *(__fastcall *)(CLauncherLaunch *__hidden), const struct StoryboardInfo *(__fastcall *)(CSlideInCharm *__hidden)))v9)(
                                                        a2,
                                                        CSlideOutCharm::GetStoryboardInfo,
                                                        CLauncherLaunch::GetStoryboardInfo,
                                                        CSlideInCharm::GetStoryboardInfo);
    }
    v11 = (int)Blink[36].Blink;
    v12 = 0LL;
    v13 = StoryboardInfo;
    if ( *((_DWORD *)StoryboardInfo + 1) )
      break;
LABEL_14:
    Blink = Blink->Blink;
    if ( Blink == WindowListForDesktop )
      return v5;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v13 + 1) + 4 * v12) & 0xFFF) != (v11 & 0xFFF) )
      goto LABEL_12;
    Blink_low = (CTransitionVisualController *)LODWORD(Blink[36].Blink);
    if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
      LODWORD(Blink[36].Blink) = (unsigned int)Blink_low & (a4 | 0x2000000) | 0xFFF;
    if ( !a3 )
      goto LABEL_12;
    CTransitionVisualController::_StopAnimations(Blink_low, (HWND *)Blink);
    if ( (v11 & 0x20100000) != 0x20100000 )
      goto LABEL_12;
    v16 = (HWND)Blink[2].Blink;
    v23 = 0LL;
    if ( CTransitionVisualController::GetStoredSnapshotNoRef(this, v16, &v23) < 0 )
      goto LABEL_12;
    if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
            v16,
            -1,
            0) )
      CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (v11 & 0x10000000) != 0);
    v17 = v23;
    v18 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v23 + 3) + 32LL), v23);
    v19 = v18;
    if ( v18 < 0 )
      break;
    v20 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v20, 0x254u);
      return v19;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v17, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        inserted,
        0x255u);
      return v5;
    }
LABEL_12:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *((_DWORD *)v13 + 1) )
    {
      WindowListForDesktop = v24;
      goto LABEL_14;
    }
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v18, 0x253u);
  return v19;
}
