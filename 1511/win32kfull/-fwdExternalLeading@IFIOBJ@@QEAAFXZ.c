/*
 * XREFs of ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C001D7D4
 * Callers:
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C001D334 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00E86A0 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     GreFillFontDir @ 0x1C02B27F0 (GreFillFontDir.c)
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
