/*
 * XREFs of KiWakeQueueWaiter @ 0x1400EC680
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeSetProcess @ 0x140074F94 (KeSetProcess.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     KiActivateWaiterKQueue @ 0x14007E788 (KiActivateWaiterKQueue.c)
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
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     KeInsertHeadQueue @ 0x1401D6940 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  char v10; // si
  __int64 v11; // rbx
  char v12; // cl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  do
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      return 0;
    v8 = *v7;
    v9 = (_QWORD *)v7[1];
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    v10 = 0;
    *(_QWORD *)(v8 + 8) = v9;
    v11 = v7[3];
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(v11 + 64) );
    }
    if ( *(_BYTE *)(v11 + 388) == 5 )
    {
      v12 = *(_BYTE *)(v11 + 112);
      v10 = 0;
      v13 = v12 & 7;
      if ( v13 == 1 || v13 == 4 )
      {
        v14 = *(_QWORD *)(v11 + 232);
        if ( v14 )
        {
          if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
          {
            v19 = (unsigned __int8)*(_DWORD *)(v11 + 540);
            *(_DWORD *)(v11 + 540) = v19;
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 4 * v19 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
          }
        }
        v15 = *(_QWORD *)(v11 + 712);
        if ( v15 )
        {
          v21 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 22672), 0LL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(_QWORD *)(v15 + 22672) );
          }
          if ( *(_QWORD *)(v11 + 712) )
          {
            v16 = *(_QWORD *)(v11 + 216);
            v17 = *(_QWORD **)(v11 + 224);
            if ( *(_QWORD *)(v16 + 8) != v11 + 216 || *v17 != v11 + 216 )
              __fastfail(3u);
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            *(_QWORD *)(v11 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 22672), 0LL);
        }
        *(_BYTE *)(v11 + 388) = 7;
        *(_QWORD *)(v11 + 216) = *(_QWORD *)(a1 + 11400);
        *(_QWORD *)(a1 + 11400) = v11 + 216;
        *(_QWORD *)(v11 + 200) = a3;
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v11 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v11 + 112) = v12 & 0xF8 | 2;
        *(_QWORD *)(v11 + 200) = a3;
        *((_BYTE *)v7 + 17) = 0;
LABEL_21:
        v10 = 1;
        goto LABEL_22;
      }
      if ( v13 == 5 )
      {
        *(_BYTE *)(v11 + 112) = v12 & 0xF8 | 6;
      }
      else if ( v13 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_22:
    *(_QWORD *)(v11 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v10 )
      return 1;
  }
  while ( v3 != v4 );
  return 0;
}
