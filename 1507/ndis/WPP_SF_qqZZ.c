/*
 * XREFs of WPP_SF_qqZZ @ 0x1C005676C
 * Callers:
 *     NdisCloseAdapter @ 0x1C00E6D70 (NdisCloseAdapter.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E96F0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
