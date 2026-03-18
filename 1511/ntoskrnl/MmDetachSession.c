/*
 * XREFs of MmDetachSession @ 0x140091918
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiDetachFromOwningSession @ 0x1400F1224 (MiDetachFromOwningSession.c)
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1404AC20C (ExGetSessionPoolTagInformation.c)
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 *     PspDetachSession @ 0x1404C0930 (PspDetachSession.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x14063C538 (PopLazySensorActiveInput.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1406C33EC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1406C34BC (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
