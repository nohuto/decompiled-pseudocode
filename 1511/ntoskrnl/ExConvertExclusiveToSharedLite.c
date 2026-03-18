/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1400CF4E8
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 *     VerifierExConvertExclusiveToSharedLite @ 0x1406C0368 (VerifierExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  ULONG NumberOfSharedWaiters; // ecx
  USHORT Flag; // ax
  PVOID SharedWaiters; // rax
  int WaiterPriority; // ebx
  unsigned __int8 CurrentIrql; // si
  volatile signed __int64 *v7[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v8; // [rsp+50h] [rbp+8h] BYREF

  KeFastAcquireInStackQueuedSpinLockAndRaise(&Resource->SpinLock, v7);
  NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
  Resource->Flag &= ~0x80u;
  Flag = Resource->Flag;
  if ( NumberOfSharedWaiters )
  {
    Resource->ActiveEntries += NumberOfSharedWaiters;
    Resource->NumberOfSharedWaiters = 0;
    if ( !Resource->NumberOfExclusiveWaiters )
      Resource->Flag = Flag & 0xFB;
    SharedWaiters = Resource->SharedWaiters;
    WaiterPriority = Resource->WaiterPriority;
    Resource->SharedWaiters = 0LL;
    v8 = SharedWaiters;
    KxReleaseQueuedSpinLock(v7);
    _enable();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeWakeWaitChain(&v8, 0LL, 0LL);
    if ( WaiterPriority )
      ExpApplyPriorityBoost((__int64)Resource, 65280, (__int64)KeGetCurrentThread());
    __writecr8(CurrentIrql);
  }
  else
  {
    KxReleaseQueuedSpinLock(v7);
    _enable();
  }
  __incgsdword(0x6334u);
}
