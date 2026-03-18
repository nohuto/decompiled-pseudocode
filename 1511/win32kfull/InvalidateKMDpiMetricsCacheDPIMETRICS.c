/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D0E04
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00D0D74 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D35E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E91CC (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 i; // rbx

  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS((struct tagDpiKMMetricsCacheNode *)i);
}
