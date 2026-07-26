/*
 * XREFs of WPP_SF_qqqqD @ 0x1C00447F0
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00C4F00 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0x6Du, va);
}
