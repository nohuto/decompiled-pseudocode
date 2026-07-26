/*
 * XREFs of WPP_SF_qqDL @ 0x1C003F434
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C0018A64 (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00409A0 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C0041080 (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, va);
}
