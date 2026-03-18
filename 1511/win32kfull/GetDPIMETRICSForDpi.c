/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C0015CB8
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00C6410 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E9798 (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01E934C (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

char *__fastcall GetDPIMETRICSForDpi(int a1)
{
  char *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rax
  __int64 v3; // rcx
  struct tagDpiKMMetricsCacheNode *v4; // rbx
  __int64 v5; // rcx
  bool v6; // zf

  if ( a1 == *(unsigned __int16 *)(gpsi + 7286LL) )
    return (char *)gdpiSystem;
  if ( a1 == 96 )
    return (char *)gdpi96;
  v2 = EnsureKMDpiMetricsCacheNode(a1);
  v4 = v2;
  if ( v2 )
  {
    RefreshDpiKMMetricsCacheNode(v2);
    return (char *)v4 + 120;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0 )
    return (char *)gdpiSystem;
  v6 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) == 0;
  result = (char *)gdpi96;
  if ( !v6 )
    return (char *)gdpiSystem;
  return result;
}
