/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00B9BBC
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00B9B2C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01CB8E0 (-UserReinitializeStockFonts@@YAXK@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFA54 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 i; // rbx

  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS((struct tagDpiKMMetricsCacheNode *)i);
}
