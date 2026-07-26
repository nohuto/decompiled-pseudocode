/*
 * XREFs of WPP_SF_qLq @ 0x1C003F298
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00539E4 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053AFC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisMQueueNewWorkItem @ 0x1C005A47C (ndisMQueueNewWorkItem.c)
 *     NdisMFreeSharedMemory @ 0x1C005B850 (NdisMFreeSharedMemory.c)
 *     NdisMAllocateSharedMemory @ 0x1C00B0910 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
