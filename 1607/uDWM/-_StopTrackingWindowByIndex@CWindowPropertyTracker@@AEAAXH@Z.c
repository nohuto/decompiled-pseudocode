/*
 * XREFs of ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000ABF8
 * Callers:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18000AF14 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18000B008 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180070B8C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18000AB88 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowPropertyTracker::_StopTrackingWindowByIndex(CWindowPropertyTracker *this, unsigned int a2)
{
  __int64 v3; // rdi
  struct CWindowData *WindowDataByHwnd; // rax
  __int64 v5; // r8
  unsigned int v6; // eax
  CWindowPropertyTracker::CPropertyChangeRecord *v7; // rsi
  __int64 v8; // rcx

  v3 = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                       **(HWND **)(*(_QWORD *)this + 8LL * a2));
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      WindowDataByHwnd,
      1);
  v5 = *(_QWORD *)this;
  v6 = *((_DWORD *)this + 6);
  v7 = *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8 * v3);
  if ( (unsigned int)v3 >= v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  else
  {
    if ( (unsigned int)v3 < v6 - 1 )
    {
      do
      {
        v8 = (unsigned int)v3;
        LODWORD(v3) = v3 + 1;
        *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)(v5 + 8LL * (unsigned int)v3);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 6) - 1 );
    }
    --*((_DWORD *)this + 6);
  }
  if ( v7 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v7);
}
