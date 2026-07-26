/*
 * XREFs of WPP_SF_qqqqDd @ 0x1C0071C80
 * Callers:
 *     ndisOidPrePDQueryConfig @ 0x1C0072000 (ndisOidPrePDQueryConfig.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDd(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, va);
}
