/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1400F7B48
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
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
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
