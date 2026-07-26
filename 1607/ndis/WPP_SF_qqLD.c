/*
 * XREFs of WPP_SF_qqLD @ 0x1C006288C
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A84A4 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqLD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, 0xFu, va);
}
