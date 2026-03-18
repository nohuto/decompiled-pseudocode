/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFACC
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     DestroyDpiMetricsCache @ 0x1C0135A10 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     DeleteMetricsFont @ 0x1C01DFF6C (DeleteMetricsFont.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPISERVERINFO(struct tagDpiKMMetricsCacheNode *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  DeleteMetricsFont(*((_QWORD *)a1 + 4));
  memset((char *)a1 + 16, 0, 0x68uLL);
  *((_WORD *)a1 + 1) = 1;
}
