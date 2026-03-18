/*
 * XREFs of GetWindowBorders @ 0x1C004F1E0
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     FindNCHit @ 0x1C00FAEF8 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226AF4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0236794 (xxxCalcCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0093A44 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C009418C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBorders(int a1, int a2)
{
  int AppCompatFlags2WithDPIAware; // eax
  int v5; // r8d

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowBordersWithCompatFlags2(a1, a2, v5, 0, AppCompatFlags2WithDPIAware, 0);
}
