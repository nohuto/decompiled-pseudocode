/*
 * XREFs of GetDpiMetricsForDpi @ 0x140302424
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x1401F1534 (-UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401D0AE8 (GetDPIMETRICSForDpiUnsafe.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDpiMetricsForDpi(__int64 a1, __int64 a2)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = GetDPIMETRICSForDpiUnsafe(a1, a2);
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v3) & 0xF) != 0 )
      return (struct tagDpiKMMetricsCacheNode *)(W32GetUserSessionState(v5, v4) + 66168);
    else
      return (struct tagDpiKMMetricsCacheNode *)(W32GetUserSessionState(v5, v4) + 66096);
  }
  return result;
}
