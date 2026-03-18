/*
 * XREFs of ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E9328
 * Callers:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E91CC (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9244 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C00CDCAC (GreMarkDeletableFont.c)
 */

void __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    GreDeleteObject(a1);
  }
}
