/*
 * XREFs of GetWindowBorders @ 0x1C00CBEDC
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0236BA4 (xxxCalcCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0070844 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0070F8C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBorders(unsigned int a1, int a2)
{
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v5; // r8

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowBordersWithCompatFlags2(a1, a2, v5, 0, AppCompatFlags2WithDPIAware, 0);
}
