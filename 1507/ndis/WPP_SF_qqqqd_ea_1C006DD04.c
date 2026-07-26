/*
 * XREFs of WPP_SF_qqqqd @ 0x1C006DD04
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C006DF30 (ndisOidPostPDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, 0x1Bu, va);
}
