/*
 * XREFs of WPP_SF_qqDq @ 0x1C0044674
 * Callers:
 *     NdisAllocateCloneOidRequest @ 0x1C000C560 (NdisAllocateCloneOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0xAEu, va);
}
