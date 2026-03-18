/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     ExAcquirePushLockSharedEx @ 0x14004E6D0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     MiInitializeInPageSupport @ 0x14005EB30 (MiInitializeInPageSupport.c)
 *     ExAcquireFastMutexUnsafe @ 0x140062930 (ExAcquireFastMutexUnsafe.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     FsRtlAcquireEofLock @ 0x1400D57D0 (FsRtlAcquireEofLock.c)
 *     ExAcquireFastMutex @ 0x1400F10C0 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F2C60 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F7580 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400F7760 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400FF100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140101060 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlReleaseEofLock @ 0x1401014F0 (FsRtlReleaseEofLock.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140101DA0 (FsRtlLookupPerFileObjectContext.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1584);
  v4 = a2;
  v5 = v2;
  v6 = &v4;
  v8 = 0;
  v7 = 16;
  return EtwTraceKernelEvent((int)&v6, 1, 0x20000200u, 0x544u, 5249538);
}
