/*
 * XREFs of WPP_SF_qLq @ 0x1C004EBD8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C0016378 (ndisQueueRequestWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0058804 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005891C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisMQueueNewWorkItem @ 0x1C005E838 (ndisMQueueNewWorkItem.c)
 *     NdisMFreeSharedMemory @ 0x1C005F400 (NdisMFreeSharedMemory.c)
 *     NdisMAllocateSharedMemory @ 0x1C00B1950 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
