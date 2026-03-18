/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8B9C
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C01329F0 (DestroyDpiMetricsCache.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C01375F8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E8CF8 (-DeleteMetricsFont@@YAXPEAUHFONT__@@@Z.c)
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
