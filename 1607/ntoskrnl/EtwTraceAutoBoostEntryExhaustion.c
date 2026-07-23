/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008B350 (FsRtlLookupPerFileObjectContext.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C4300 (ExTryAcquirePushLockExclusiveEx.c)
 *     PspLockQuotaExpansion @ 0x1400C486C (PspLockQuotaExpansion.c)
 *     FsRtlAcquireEofLock @ 0x1400C4AD0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C4CE0 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C5780 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C5930 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400C5AF0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C5D70 (ExAcquirePushLockSharedEx.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     PspLockQuotaListExclusive @ 0x14014CD74 (PspLockQuotaListExclusive.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1592);
  v4 = a2;
  v5 = v2;
  v6 = &v4;
  v8 = 0;
  v7 = 16;
  return EtwTraceKernelEvent((int)&v6, 1, 0x20000200u, 1348, 5249538);
}
