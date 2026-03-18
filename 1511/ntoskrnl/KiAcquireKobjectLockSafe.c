/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140034400
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeSetProcess @ 0x14001BFCC (KeSetProcess.c)
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     KeDeregisterObjectNotification @ 0x14002E4EC (KeDeregisterObjectNotification.c)
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140031978 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiOutSwapProcesses @ 0x14003272C (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140032BC0 (KiInSwapProcesses.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     PpmCheckRun @ 0x140074B90 (PpmCheckRun.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiThawSingleThread @ 0x140095E5C (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x140096FC0 (KiFreezeSingleThread.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KiInSwapSingleProcess @ 0x1400C7B28 (KiInSwapSingleProcess.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 *     KiSwitchQueue @ 0x1400E7B20 (KiSwitchQueue.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x1400EC548 (KeRemoveQueueEntry.c)
 *     KeQueryOwnerMutant @ 0x1400EEFCC (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x1400F1A30 (KiSwitchPriQueue.c)
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     KeQueryTimerDueTime @ 0x1401C35D8 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x1401C7B68 (KeInsertHeadQueue.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 *     KiSatisfyThreadWait @ 0x1401CB548 (KiSatisfyThreadWait.c)
 *     ExpCheckForWorker @ 0x140214B20 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3, a2, a3);
      result = *(unsigned int *)a1;
    }
    while ( (result & 0x80u) != 0LL || _interlockedbittestandset(a1, 7u) );
  }
  return result;
}
