/*
 * XREFs of WPP_SF_qqill @ 0x1C005EFFC
 * Callers:
 *     NdisSetCoalescableTimerObject @ 0x1C0026590 (NdisSetCoalescableTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqill(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_49acf40009c130b7c86151e057504a2b_Traceguids, 0xBu, va);
}
