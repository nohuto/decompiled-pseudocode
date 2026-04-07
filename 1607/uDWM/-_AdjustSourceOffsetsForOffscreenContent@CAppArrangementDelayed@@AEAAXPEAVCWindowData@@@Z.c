/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x180003444
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B0C4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x18000B118 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  HWND v4; // rdx
  int v5; // esi
  int v6; // r14d
  int SystemMetrics; // r14d
  int v8; // esi
  HMONITOR v9; // rax
  HMONITOR v10; // rbx
  struct tagPOINT v11; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
              v4,
              &v11) >= 0 )
    OffsetRect(&rc, v11.x - rc.left, v11.y - rc.top);
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
              *((HWND *)a2 + 5),
              (struct tagSIZE *)&v11) >= 0 )
  {
    rc.right = rc.left + v11.x;
    rc.bottom = rc.top + v11.y;
  }
  if ( (*((_DWORD *)a2 + 146) & 0x800000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 159) - rc.left;
    v6 = *((_DWORD *)a2 + 160) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v6 = GetSystemMetrics(33) + SystemMetrics;
    v8 = GetSystemMetrics(92);
    v5 = GetSystemMetrics(32) + v8;
    v9 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    v10 = v9;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v10, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v6 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v5 = mi.rcMonitor.left - rc.left;
    }
  }
  if ( (*((_DWORD *)a2 + 146) & 0x1000000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 588), v5 - *((_DWORD *)a2 + 147), v6 - *((_DWORD *)a2 + 148));
  if ( (*((_DWORD *)a2 + 146) & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 620), v5 - *((_DWORD *)a2 + 155), v6 - *((_DWORD *)a2 + 156));
}
