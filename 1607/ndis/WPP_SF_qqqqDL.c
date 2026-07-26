/*
 * XREFs of WPP_SF_qqqqDL @ 0x1C004485C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDL(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0x2Au, va);
}
