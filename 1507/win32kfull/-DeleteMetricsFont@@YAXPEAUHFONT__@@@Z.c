/*
 * XREFs of ?DeleteMetricsFont@@YAXPEAUHFONT__@@@Z @ 0x1C01E8CF8
 * Callers:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8B9C (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8C14 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
 */

void __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    GreDeleteObject(a1);
  }
}
