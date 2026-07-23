/*
 * XREFs of MmDetachSession @ 0x140076538
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     MiDetachFromOwningSession @ 0x1400B3404 (MiDetachFromOwningSession.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     PspDetachSession @ 0x1404CE648 (PspDetachSession.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140674C3C (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F57C (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
