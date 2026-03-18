/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E91CC
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D0E04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     DestroyDpiMetricsCache @ 0x1C01142B0 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E9328 (-DeleteMetricsFont@@YAXPEAUHFONT__@@@Z.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPIMETRICS(HFONT *a1)
{
  DeleteMetricsFont(a1[15]);
  DeleteMetricsFont(a1[16]);
  DeleteMetricsFont(a1[17]);
  DeleteMetricsFont(a1[18]);
  DeleteMetricsFont(a1[19]);
  DeleteMetricsFont(a1[20]);
  memset(a1 + 15, 0, 0x58uLL);
  *((_WORD *)a1 + 1) = 1;
}
