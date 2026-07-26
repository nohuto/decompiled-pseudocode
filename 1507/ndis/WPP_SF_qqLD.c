/*
 * XREFs of WPP_SF_qqLD @ 0x1C005EF54
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A1940 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqLD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, 0xFu, va);
}
