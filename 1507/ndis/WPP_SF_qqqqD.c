/*
 * XREFs of WPP_SF_qqqqD @ 0x1C003F60C
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C009E0B0 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0x6Du, va);
}
