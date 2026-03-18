/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1400F9DBC
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
 *     KiTryUnwaitThread @ 0x140057DA0 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1400F9E38 (KiInsertQueueInternal.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  char v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    result = (__int64)v2;
    v2 = (_QWORD *)v2[1];
    v6 = *(_BYTE *)(result + 16);
    if ( v6 == 2 )
    {
      v7 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      *(_BYTE *)(result + 17) = 5;
      KiInsertQueueInternal(*(_QWORD *)(result + 24), result);
    }
    else
    {
      if ( v6 != 1 )
        return result;
      v8 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
        __fastfail(3u);
      *v2 = v8;
      *(_QWORD *)(v8 + 8) = v2;
      KiTryUnwaitThread(a1, result, *(unsigned __int16 *)(result + 18), 0LL);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
