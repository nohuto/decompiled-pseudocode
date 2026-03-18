/*
 * XREFs of GetWindowBordersForDpi @ 0x1C0082C64
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     MNPositionSysMenu @ 0x1C0118354 (MNPositionSysMenu.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0093A44 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C009418C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  int AppCompatFlags2WithDPIAware; // eax

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowBordersWithCompatFlags2(a1, a2, a5, 0, AppCompatFlags2WithDPIAware, a5);
}
