/*
 * XREFs of WPP_SF_qqDq @ 0x1C003F490
 * Callers:
 *     NdisAllocateCloneOidRequest @ 0x1C0007640 (NdisAllocateCloneOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0xACu, va);
}
