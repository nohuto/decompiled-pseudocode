/*
 * XREFs of GetWindowBorders @ 0x1C00B0350
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0067928 (GetAppCompatFlags2WithDPIAware.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v7; // r8

  v4 = a2;
  v5 = a1;
  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware(a1, a2, a3, a4);
  if ( (AppCompatFlags2WithDPIAware & 0x2000000) != 0 )
    v7 = *(unsigned __int16 *)(gpsi + 8678LL);
  else
    v7 = 96LL;
  return GetWindowBordersWithCompatFlags2(v5, v4, v7, 0, AppCompatFlags2WithDPIAware, v7);
}
