/*
 * XREFs of ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8C14
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C01329F0 (DestroyDpiMetricsCache.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E8CF8 (-DeleteMetricsFont@@YAXPEAUHFONT__@@@Z.c)
 */

void __fastcall ClearKMDpiMetricsCacheNodeDPISERVERINFO(HFONT *a1)
{
  DeleteMetricsFont(a1[3]);
  DeleteMetricsFont(a1[4]);
  memset(a1 + 2, 0, 0x68uLL);
  *((_WORD *)a1 + 1) = 1;
}
