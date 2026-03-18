/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C01375F8
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C0137568 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D1B2C (-UserReinitializeStockFonts@@YAXK@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8B9C (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 i; // rbx

  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS((struct tagDpiKMMetricsCacheNode *)i);
}
