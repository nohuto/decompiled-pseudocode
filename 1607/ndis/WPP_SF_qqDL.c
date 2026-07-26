/*
 * XREFs of WPP_SF_qqDL @ 0x1C0044618
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C0019A90 (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C0045BA0 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C0046074 (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, va);
}
