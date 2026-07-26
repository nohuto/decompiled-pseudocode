/*
 * XREFs of WPP_SF_qqqqDL @ 0x1C003F678
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDL(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0x2Au, va);
}
