/*
 * XREFs of ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D7088
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C00D7644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6864 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D7304 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWindowMetricInt(struct _UNICODE_STRING *a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v3; // r10d

  v3 = a3;
  if ( a2 <= 0x90u )
  {
    if ( a2 < 0x8Fu && (a2 < 0x40u || a2 > 0x41u && (a2 <= 0x87u || a2 > 0x8Au && (a2 <= 0x8Bu || a2 > 0x8Du))) )
      return UpdateWinIniInt(a1, 23LL, a2, v3);
LABEL_15:
    v3 = -((int)(1440 * a3 + (*(unsigned __int16 *)(gpsi + 7286LL) >> 1)) / *(unsigned __int16 *)(gpsi + 7286LL));
    return UpdateWinIniInt(a1, 23LL, a2, v3);
  }
  if ( a2 >= 0x92u && (a2 <= 0x94u || a2 > 0x97u && (a2 <= 0x99u || a2 == 158)) )
    goto LABEL_15;
  return UpdateWinIniInt(a1, 23LL, a2, v3);
}
