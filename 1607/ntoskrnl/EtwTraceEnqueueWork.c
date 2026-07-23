/*
 * XREFs of EtwTraceEnqueueWork @ 0x140225A4C
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
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
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     KeInsertHeadQueue @ 0x1401D6940 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
