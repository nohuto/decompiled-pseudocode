/*
 * XREFs of EtwTraceEnqueueWork @ 0x140225C20
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
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
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     KeInsertHeadQueue @ 0x1401D6B14 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1592);
  v6 = a2;
  v7 = v3;
  v4 = 5250562;
  if ( !a3 )
    v4 = 5244418;
  v8 = &v6;
  v10 = 0;
  v9 = 12;
  return EtwTraceKernelEvent((int)&v8, 1, 0x21000000u, 1342, v4);
}
