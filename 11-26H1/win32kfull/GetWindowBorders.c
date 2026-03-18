/*
 * XREFs of GetWindowBorders @ 0x140123A0C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowBorders(int a1, int a2)
{
  unsigned int DpiForSystem; // eax
  __int64 v5; // r8
  __int64 v6; // r9

  DpiForSystem = GetDpiForSystem();
  return GetWindowBordersForDpi(a1, a2, v5, v6, DpiForSystem);
}
