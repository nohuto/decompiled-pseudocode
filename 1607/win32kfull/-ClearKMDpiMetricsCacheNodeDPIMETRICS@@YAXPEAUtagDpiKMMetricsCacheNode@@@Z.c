/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFA54
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00B9BBC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     DestroyDpiMetricsCache @ 0x1C0135A10 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     DeleteMetricsFont @ 0x1C01DFF6C (DeleteMetricsFont.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPIMETRICS(struct tagDpiKMMetricsCacheNode *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 15));
  DeleteMetricsFont(*((_QWORD *)a1 + 16));
  DeleteMetricsFont(*((_QWORD *)a1 + 17));
  DeleteMetricsFont(*((_QWORD *)a1 + 18));
  DeleteMetricsFont(*((_QWORD *)a1 + 19));
  DeleteMetricsFont(*((_QWORD *)a1 + 20));
  memset((char *)a1 + 120, 0, 0x58uLL);
  *((_WORD *)a1 + 1) = 1;
}
