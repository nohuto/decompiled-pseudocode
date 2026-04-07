/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180005D30 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006604 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000A3E0 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180038FD8 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180039F08 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9A0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9B0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FA00 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FA10 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FBB0 (-GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  CTransitionVisualController *v7; // r15
  struct _LIST_ENTRY *i; // rsi
  const struct StoryboardInfo *(__fastcall *v9)(CLauncherLaunch *__hidden); // rdi
  const struct StoryboardInfo *StoryboardInfo; // rax
  int Flink; // r12d
  __int64 v12; // rbp
  const struct StoryboardInfo *j; // rdi
  CTransitionVisualController *Flink_low; // rcx
  HWND Blink; // rdx
  struct CVisual *v17; // r15
  int v18; // eax
  int v19; // eax
  int inserted; // eax
  unsigned __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v22; // [rsp+38h] [rbp-50h] BYREF
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = this;
  v21 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v21) )
      return (unsigned int)-2147467259;
    v6 = v21;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           v6);
  for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
  {
    v9 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherLaunch *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v9 == CLauncherLaunch::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a2);
    }
    else if ( v9 == CWindowClose::GetStoryboardInfo )
    {
      StoryboardInfo = CWindowClose::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideOutCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideInCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideInCharm::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherDismiss::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a2);
    }
    else
    {
      StoryboardInfo = v9(a2);
    }
    Flink = (int)i[36].Flink;
    v12 = 0LL;
    for ( j = StoryboardInfo; (unsigned int)v12 < *((_DWORD *)j + 1); v12 = (unsigned int)(v12 + 1) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)j + 1) + 4 * v12) & 0xFFF) == (Flink & 0xFFF) )
      {
        Flink_low = (CTransitionVisualController *)LODWORD(i[36].Flink);
        if ( ((unsigned int)Flink_low & 0x40000000) == 0 )
          LODWORD(i[36].Flink) = (unsigned int)Flink_low & (a4 | 0x2000000) | 0xFFF;
        if ( a3 )
        {
          CTransitionVisualController::_StopAnimations(Flink_low, (HWND *)i);
          if ( (Flink & 0x20100000) == 0x20100000 )
          {
            Blink = (HWND)i[2].Blink;
            v22 = 0LL;
            if ( CTransitionVisualController::GetStoredSnapshotNoRef(v7, Blink, &v22) >= 0 )
            {
              if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
                      (HWND)i[2].Blink,
                      -1,
                      0) )
                CTransitionVisualController::RestoreWindow(v7, (struct CWindowData *)i, (Flink & 0x10000000) != 0);
              v17 = v22;
              v18 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v22 + 3) + 32LL), v22);
              v5 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v18,
                  0x256u);
                return v5;
              }
              v19 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
              v5 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v19,
                  0x257u);
                return v5;
              }
              inserted = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                           v17,
                           0LL,
                           0,
                           1);
              v5 = inserted;
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  inserted,
                  0x258u);
                return v5;
              }
              v7 = this;
            }
          }
        }
      }
    }
  }
  return v5;
}
