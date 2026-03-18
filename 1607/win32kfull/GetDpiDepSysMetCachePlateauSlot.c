/*
 * XREFs of GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90
 * Callers:
 *     GetResizeBorderWidthInternal @ 0x1C006C188 (GetResizeBorderWidthInternal.c)
 *     AdjustWindowRectExInternal @ 0x1C006D828 (AdjustWindowRectExInternal.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C006F3E4 (GetWindowFrameMetricInternal.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C01D92C4 (GetWindowNCMetricsForDpi.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiDepSysMetCachePlateauSlot(int a1)
{
  unsigned int v1; // r9d
  int v2; // edx

  v1 = -1;
  if ( a1 >= 120 && a1 == 24 * (a1 / 24) )
  {
    v2 = (a1 - 120) / 24;
    if ( v2 >= 16 )
      return (unsigned int)-1;
    return (unsigned int)v2;
  }
  return v1;
}
