/*
 * XREFs of KeIsThreadRunning @ 0x1401D2AA4
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeSetProcess @ 0x140074F94 (KeSetProcess.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     KeInsertQueue @ 0x140087860 (KeInsertQueue.c)
 *     KeWakeWaitChain @ 0x1400A4264 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     KiRundownMutants @ 0x1400F0170 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F4C40 (KeReleaseMutant.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
 *     KeTryToInsertQueueApc @ 0x1401D65B8 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1401D6940 (KeInsertHeadQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
