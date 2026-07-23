/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400EC640
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KiReadyThread @ 0x14005F76C (KiReadyThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KeSetProcess @ 0x140074F94 (KeSetProcess.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertQueue @ 0x140087860 (KeInsertQueue.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiInSwapProcesses @ 0x140090680 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140090730 (KiOutSwapProcesses.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x1400A4264 (KeWakeWaitChain.c)
 *     KiSwitchQueue @ 0x1400A65EC (KiSwitchQueue.c)
 *     KeTimeOutQueueWaiters @ 0x1400A6788 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KeQueryOwnerMutant @ 0x1400A9D04 (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x1400B0A14 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1400B3328 (KeRetryOutswapProcess.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     KiThawSingleThread @ 0x1400C5400 (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x1400C6E8C (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1400C7748 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1400C7874 (KiSuspendThread.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400EA6D4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     KiRundownMutants @ 0x1400F0170 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F4C40 (KeReleaseMutant.c)
 *     KeDeregisterObjectNotification @ 0x1400F7A2C (KeDeregisterObjectNotification.c)
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
 *     KeRemoveQueueEntry @ 0x1400F7CA0 (KeRemoveQueueEntry.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     KeQueryTimerDueTime @ 0x1401D3604 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x1401D6940 (KeInsertHeadQueue.c)
 *     KiSatisfyThreadWait @ 0x1401DA7B8 (KiSatisfyThreadWait.c)
 *     ExpCheckForWorker @ 0x14022E6D0 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi
  __int64 result; // rax

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v1);
      result = *(unsigned int *)a1;
    }
    while ( (result & 0x80u) != 0LL || _interlockedbittestandset(a1, 7u) );
  }
  return result;
}
