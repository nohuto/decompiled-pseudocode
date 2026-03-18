/*
 * XREFs of GetWindowBordersForDpi @ 0x14000F560
 * Callers:
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     xxxCalcCaptionButton @ 0x14014AFF8 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  int v8; // r8d

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
