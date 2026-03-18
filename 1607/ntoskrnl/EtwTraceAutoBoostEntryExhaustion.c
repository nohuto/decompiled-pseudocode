/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14015964C
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140013010 (SeComputeAutoInheritByObjectTypeEx.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1400333C0 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008BBF0 (FsRtlLookupPerFileObjectContext.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C6460 (ExTryAcquirePushLockExclusiveEx.c)
 *     PspLockQuotaExpansion @ 0x1400C69CC (PspLockQuotaExpansion.c)
 *     FsRtlAcquireEofLock @ 0x1400C6C30 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C6E40 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C7740 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C78E0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C7A90 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400C7C50 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C7ED0 (ExAcquirePushLockSharedEx.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     EtwpLockBufferList @ 0x1400EB6C0 (EtwpLockBufferList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     PspLockQuotaListExclusive @ 0x14014C804 (PspLockQuotaListExclusive.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     EtwpDisableCompression @ 0x14022A834 (EtwpDisableCompression.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
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
