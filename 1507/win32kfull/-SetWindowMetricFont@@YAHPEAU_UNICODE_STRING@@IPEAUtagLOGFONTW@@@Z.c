/*
 * XREFs of ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01D54A0
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D4CA8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D4DB0 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D5790 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWindowMetricFont(struct _UNICODE_STRING *a1, unsigned int a2, struct tagLOGFONTW *a3)
{
  return FastWriteProfileValue(a1, 23LL, a2, 3LL, a3, 92);
}
