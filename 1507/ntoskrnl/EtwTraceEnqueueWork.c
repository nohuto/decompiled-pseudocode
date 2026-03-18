/*
 * XREFs of EtwTraceEnqueueWork @ 0x14025CFD4
 * Callers:
 *     KiRundownMutants @ 0x14000DF1C (KiRundownMutants.c)
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     IopCompleteIrpInFileObjectList @ 0x140042DE0 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     KeSetProcess @ 0x1400EFB40 (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     KeWakeWaitChain @ 0x140103A14 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x140112874 (KeRundownQueueEx.c)
 *     KeInsertQueue @ 0x1401190B0 (KeInsertQueue.c)
 *     KiInsertQueueInternal @ 0x1401260F4 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     KiInsertQueue @ 0x14017E344 (KiInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x1401E46B4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x1401FAFCC (IopPassiveInterruptDpc.c)
 *     KeInsertHeadQueue @ 0x140204A7C (KeInsertHeadQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x14020BC24 (KiSwapToUmsThreadContinue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1584);
  v6 = a2;
  v7 = v3;
  v4 = 5250562;
  if ( !a3 )
    v4 = 5244418;
  v8 = &v6;
  v10 = 0;
  v9 = 12;
  return EtwTraceKernelEvent((int)&v8, 1, 0x21000000u, 0x53Eu, v4);
}
