/*
 * XREFs of WPP_SF_qqdqq @ 0x1C006DB34
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00E1670 (ndisOidPrePDCloseProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqdqq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, 0x1Du, va);
}
