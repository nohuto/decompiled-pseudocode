/*
 * XREFs of WPP_SF_qqqqd @ 0x1C006D184
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C006D3B0 (ndisOidPostPDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, 0x1Bu, va);
}
