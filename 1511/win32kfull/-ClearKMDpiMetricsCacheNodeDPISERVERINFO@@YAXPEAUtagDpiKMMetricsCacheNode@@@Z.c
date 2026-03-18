/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9244
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     DestroyDpiMetricsCache @ 0x1C01142B0 (DestroyDpiMetricsCache.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E9328 (-DeleteMetricsFont@@YAXPEAUHFONT__@@@Z.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPISERVERINFO(HFONT *a1)
{
  DeleteMetricsFont(a1[3]);
  DeleteMetricsFont(a1[4]);
  memset(a1 + 2, 0, 0x68uLL);
  *((_WORD *)a1 + 1) = 1;
}
