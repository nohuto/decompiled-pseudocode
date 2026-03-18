/*
 * XREFs of KeIsThreadRunning @ 0x1401C2F44
 * Callers:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeSetProcess @ 0x14001BFCC (KeSetProcess.c)
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     PpmCheckRun @ 0x140074B90 (PpmCheckRun.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     KeTryToInsertQueueApc @ 0x1401C77E0 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x1401C7B68 (KeInsertHeadQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
