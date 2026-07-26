/*
 * XREFs of WPP_SF_qqDDD @ 0x1C003F3CC
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDDD(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, va);
}
