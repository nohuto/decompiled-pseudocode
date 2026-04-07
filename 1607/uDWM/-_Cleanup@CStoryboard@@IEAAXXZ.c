/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414
 * Callers:
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800041FC (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x18000EE30 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000F6B0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x18000F790 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 * Callees:
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18000B008 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000C45C (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000C9F8 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000ED7C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000F6B0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000FBF8 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180010EAC (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CDesktopManager *v4; // rax
  __int64 v5; // rdx
  CStoryboard *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  int v10; // ecx
  CBaseObject *v11; // rcx
  __int64 v12; // r9
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard((CWindowPropertyTracker *)(*((_QWORD *)v4 + 22) + 48LL), this);
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v5);
    v6 = (CStoryboard *)*((_QWORD *)this + 10);
    *((_DWORD *)this + 7) = -1;
    if ( v6 )
    {
      CStoryboard::Release(v6);
      *((_QWORD *)this + 10) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v8 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 24LL);
      if ( (v8 & 0x20000000) != 0
        && !(unsigned __int8)CAnimationScheduler::ShouldSnapshot(
                               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22),
                               v8,
                               this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      if ( WindowDataByHwnd && (v3 || (*((_DWORD *)WindowDataByHwnd + 146) & 0xFFF) == 0xFFF) )
      {
        v10 = *((_DWORD *)WindowDataByHwnd + 146);
        if ( (v10 & 0x40000000) == 0 )
          *((_DWORD *)WindowDataByHwnd + 146) = v10 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        *(struct CVisual ***)(*((_QWORD *)this + 11) + 8 * i));
      v11 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * i);
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 22)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v12 + 184));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
}
