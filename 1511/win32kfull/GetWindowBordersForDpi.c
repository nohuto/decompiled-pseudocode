/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00761EC
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     MNPositionSysMenu @ 0x1C0143254 (MNPositionSysMenu.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B3B4 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0070844 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0070F8C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBordersForDpi(unsigned int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2WithDPIAware; // eax

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowBordersWithCompatFlags2(a1, a2, a5, 0, AppCompatFlags2WithDPIAware, a5);
}
