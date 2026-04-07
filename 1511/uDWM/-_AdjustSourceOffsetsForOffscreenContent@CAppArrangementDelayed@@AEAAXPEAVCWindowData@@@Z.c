/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x180004580
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180003BC4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  CDesktopManager *v3; // rbx
  HWND v5; // rdx
  int v6; // esi
  int v7; // r14d
  int SystemMetrics; // r14d
  int v9; // esi
  HMONITOR v10; // rax
  HMONITOR v11; // rbx
  struct tagPOINT v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = (HWND)*((_QWORD *)a2 + 5);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
              v5,
              &v12) >= 0 )
  {
    OffsetRect(&rc, v12.x - rc.left, v12.y - rc.top);
    v3 = CDesktopManager::s_pDesktopManagerInstance;
  }
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)v3 + 24) + 48LL),
              *((HWND *)a2 + 5),
              (struct tagSIZE *)&v12) >= 0 )
  {
    rc.right = rc.left + v12.x;
    rc.bottom = rc.top + v12.y;
  }
  if ( (*((_DWORD *)a2 + 144) & 0x800000) != 0 )
  {
    v6 = *((_DWORD *)a2 + 157) - rc.left;
    v7 = *((_DWORD *)a2 + 158) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v7 = GetSystemMetrics(33) + SystemMetrics;
    v9 = GetSystemMetrics(92);
    v6 = GetSystemMetrics(32) + v9;
    v10 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    v11 = v10;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v11, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v7 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v6 = mi.rcMonitor.left - rc.left;
    }
  }
  if ( (*((_DWORD *)a2 + 144) & 0x1000000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 580), v6 - *((_DWORD *)a2 + 145), v7 - *((_DWORD *)a2 + 146));
  if ( (*((_DWORD *)a2 + 144) & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 612), v6 - *((_DWORD *)a2 + 153), v7 - *((_DWORD *)a2 + 154));
}
