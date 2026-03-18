/*
 * XREFs of MmDetachSession @ 0x1400764B8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x140086B20 (MiEmptyAccessLogs.c)
 *     MiDetachFromOwningSession @ 0x1400B55DC (MiDetachFromOwningSession.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140490A2C (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x1404990F4 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     PspDetachSession @ 0x1404EC5C0 (PspDetachSession.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140674B58 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
