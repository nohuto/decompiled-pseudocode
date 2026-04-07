/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B8FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000C1BC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000C59C (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E7E8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FEE0 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FF80 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x180010100 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x180010180 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x180010190 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  const struct StoryboardInfo *(__fastcall *v9)(CSlideInCharm *__hidden); // rdi
  const struct StoryboardInfo *StoryboardInfo; // rax
  int Blink; // r12d
  __int64 v12; // rbp
  const struct StoryboardInfo *j; // rdi
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rdx
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
    v9 = *(const struct StoryboardInfo *(__fastcall **)(CSlideInCharm *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v9 == CSlideInCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideInCharm::GetStoryboardInfo(a2);
    }
    else if ( v9 == CSlideOutCharm::GetStoryboardInfo )
    {
      StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherLaunch::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a2);
    }
    else if ( v9 == CFadeIn::GetStoryboardInfo )
    {
      StoryboardInfo = CFadeIn::GetStoryboardInfo(a2);
    }
    else if ( v9 == CLauncherDismiss::GetStoryboardInfo )
    {
      StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a2);
    }
    else
    {
      StoryboardInfo = v9(a2);
    }
    Blink = (int)i[35].Blink;
    v12 = 0LL;
    for ( j = StoryboardInfo; (unsigned int)v12 < *((_DWORD *)j + 1); v12 = (unsigned int)(v12 + 1) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)j + 1) + 4 * v12) & 0xFFF) == (Blink & 0xFFF) )
      {
        Blink_low = (CTransitionVisualController *)LODWORD(i[35].Blink);
        if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
          LODWORD(i[35].Blink) = (unsigned int)Blink_low & (a4 | 0x2000000) | 0xFFF;
        if ( a3 )
        {
          CTransitionVisualController::_StopAnimations(Blink_low, (HWND *)i);
          if ( (Blink & 0x20100000) == 0x20100000 )
          {
            v16 = (HWND)i[2].Blink;
            v22 = 0LL;
            if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(v7, v16, &v22) >= 0 )
            {
              if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
                      (HWND)i[2].Blink,
                      -1,
                      0) )
                CTransitionVisualController::RestoreWindow(v7, (struct CWindowData *)i, (Blink & 0x10000000) != 0);
              v17 = v22;
              v18 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v22 + 3) + 32LL), v22);
              v5 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v18,
                  0x252u);
                return v5;
              }
              v19 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
              v5 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v19,
                  0x253u);
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
                  2LL,
                  inserted,
                  0x254u);
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
