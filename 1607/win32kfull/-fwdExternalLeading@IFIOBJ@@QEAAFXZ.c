/*
 * XREFs of ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C0026784
 * Callers:
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0012348 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00127D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0023590 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     GreFillFontDir @ 0x1C02B582C (GreFillFontDir.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IFIOBJ::fwdExternalLeading(IFIOBJ *this)
{
  __int64 result; // rax
  __int16 v2; // cx

  result = 0LL;
  v2 = *(_WORD *)(*(_QWORD *)this + 64LL)
     + *(_WORD *)(*(_QWORD *)this + 68LL)
     - *(_WORD *)(*(_QWORD *)this + 66LL)
     - *(_WORD *)(*(_QWORD *)this + 62LL)
     - *(_WORD *)(*(_QWORD *)this + 60LL);
  if ( v2 > 0 )
    return (unsigned int)v2;
  return result;
}
