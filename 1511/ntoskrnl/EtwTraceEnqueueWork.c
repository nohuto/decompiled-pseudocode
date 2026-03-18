/*
 * XREFs of EtwTraceEnqueueWork @ 0x14020DD68
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
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
 *     KeInsertHeadQueue @ 0x1401C7B68 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
