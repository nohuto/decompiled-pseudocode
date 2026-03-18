/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400EE7C0
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140058C90 (KiTimerWaitTest.c)
 *     KiTimer2Expiration @ 0x14005A0A0 (KiTimer2Expiration.c)
 *     KiCommitThreadWait @ 0x14005ACD0 (KiCommitThreadWait.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005E350 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     KeInsertPriQueue @ 0x14005F700 (KeInsertPriQueue.c)
 *     KiReadyThread @ 0x14005FBEC (KiReadyThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KeSetProcess @ 0x140074F14 (KeSetProcess.c)
 *     KeInsertQueueEx @ 0x14007E0BC (KeInsertQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E5F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertQueue @ 0x140085F70 (KeInsertQueue.c)
 *     KiProcessThreadWaitList @ 0x14008DCC0 (KiProcessThreadWaitList.c)
 *     KiInSwapProcesses @ 0x140090F20 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140090FD0 (KiOutSwapProcesses.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140097D9C (KiWaitForAllObjects.c)
 *     KeResumeThread @ 0x1400A2840 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x1400A5CEC (KeWakeWaitChain.c)
 *     KiSwitchQueue @ 0x1400A8074 (KiSwitchQueue.c)
 *     KeTimeOutQueueWaiters @ 0x1400A8210 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     KeQueryOwnerMutant @ 0x1400AB79C (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x1400B2AD4 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1400B5500 (KeRetryOutswapProcess.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
 *     KiThawSingleThread @ 0x1400C7560 (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x1400C8FEC (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1400C98A8 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1400C99D4 (KiSuspendThread.c)
 *     KeForceResumeThread @ 0x1400CB374 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400CB420 (KiResumeThread.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1400CEB20 (KiDecrementProcessStackCount.c)
 *     KiInSwapSingleProcess @ 0x1400CEC04 (KiInSwapSingleProcess.c)
 *     KeReleaseSemaphoreEx @ 0x1400CF090 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400EC864 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1400EDDA0 (KeRegisterObjectNotification.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeRundownQueueEx @ 0x1400F6B68 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F6E00 (KeReleaseMutant.c)
 *     KeDeregisterObjectNotification @ 0x1400F9C48 (KeDeregisterObjectNotification.c)
 *     KiInsertQueueInternal @ 0x1400F9E38 (KiInsertQueueInternal.c)
 *     KeRemoveQueueEntry @ 0x1400F9F14 (KeRemoveQueueEntry.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     KiProcessExpiredTimerList @ 0x14010CEBC (KiProcessExpiredTimerList.c)
 *     KeQueryTimerDueTime @ 0x1401D37D8 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x1401D6B14 (KeInsertHeadQueue.c)
 *     KiSatisfyThreadWait @ 0x1401DA98C (KiSatisfyThreadWait.c)
 *     ExpCheckForWorker @ 0x14022E8A4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
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
