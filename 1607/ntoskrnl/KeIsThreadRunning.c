/*
 * XREFs of KeIsThreadRunning @ 0x1401D2C78
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x140058C90 (KiTimerWaitTest.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005E350 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KeSetProcess @ 0x140074F14 (KeSetProcess.c)
 *     IoSetIoCompletionEx2 @ 0x14007DEC0 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x14007E0BC (KeInsertQueueEx.c)
 *     KeInsertQueue @ 0x140085F70 (KeInsertQueue.c)
 *     KeWakeWaitChain @ 0x1400A5CEC (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400CB420 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1400CF090 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400EDDA0 (KeRegisterObjectNotification.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeRundownQueueEx @ 0x1400F6B68 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F6E00 (KeReleaseMutant.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F8A70 (NtReleaseWorkerFactoryWorker.c)
 *     KiInsertQueueInternal @ 0x1400F9E38 (KiInsertQueueInternal.c)
 *     KeTryToInsertQueueApc @ 0x1401D678C (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1401D6B14 (KeInsertHeadQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
