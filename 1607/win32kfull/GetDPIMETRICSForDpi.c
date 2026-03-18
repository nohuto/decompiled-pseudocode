/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C00B5C08
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00B5C20 (GetDPIMETRICSForDpiUnsafe.c)
 */

__int64 GetDPIMETRICSForDpi()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // zf

  result = GetDPIMETRICSForDpiUnsafe();
  if ( !result )
  {
    v5 = (W32GetCurrentThreadDpiAwarenessContext(v2, v1, v3, v4) & 0xF) == 0;
    result = gdpi96;
    if ( !v5 )
      return gdpiSystem;
  }
  return result;
}
