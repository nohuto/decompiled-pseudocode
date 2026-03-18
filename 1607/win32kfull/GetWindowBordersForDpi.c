/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00B8368
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0067928 (GetAppCompatFlags2WithDPIAware.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned int AppCompatFlags2WithDPIAware; // eax

  v5 = a2;
  v6 = a1;
  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware(a1, a2, a3, a4);
  return GetWindowBordersWithCompatFlags2(v6, v5, a5, 0, AppCompatFlags2WithDPIAware, a5);
}
