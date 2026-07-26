/*
 * XREFs of WPP_SF_qLq @ 0x1C00409D8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0053DD4 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053EEC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisMQueueNewWorkItem @ 0x1C005A41C (ndisMQueueNewWorkItem.c)
 *     NdisMFreeSharedMemory @ 0x1C005B5C0 (NdisMFreeSharedMemory.c)
 *     NdisMAllocateSharedMemory @ 0x1C00AABE0 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
