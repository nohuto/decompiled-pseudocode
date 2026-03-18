/*
 * XREFs of KiWakeQueueWaiter @ 0x14007E740
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
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KiActivateWaiterKQueue @ 0x140094338 (KiActivateWaiterKQueue.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     KeInsertHeadQueue @ 0x1401C7B68 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // r14
  _QWORD *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // rbx
  char v10; // di
  char v11; // al
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rcx
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a2 + 16);
  v5 = a2;
  do
  {
    v7 = v3;
    v3 = (_QWORD *)v3[1];
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v3 != v7 )
      __fastfail(3u);
    *v3 = v8;
    *(_QWORD *)(v8 + 8) = v3;
    if ( *((_BYTE *)v7 + 16) != 1 )
    {
      *((_BYTE *)v7 + 17) = 5;
      KiInsertQueueInternal(v7[3], v7);
      continue;
    }
    v9 = v7[3];
    v10 = 0;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v17, a2, a3);
      while ( *(_QWORD *)(v9 + 64) );
    }
    if ( *(_BYTE *)(v9 + 388) == 5 )
    {
      v11 = *(_BYTE *)(v9 + 112);
      v10 = 0;
      v12 = v11 & 7;
      if ( v12 == 1 || v12 == 4 )
      {
        a2 = *(_QWORD *)(v9 + 232);
        if ( a2 )
        {
          if ( (*(_BYTE *)a2 & 0x7F) == 0x15 )
          {
            v13 = (unsigned __int8)*(_DWORD *)(v9 + 540);
            *(_DWORD *)(v9 + 540) = v13;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v13 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
          }
        }
        v14 = *(_QWORD *)(v9 + 712);
        if ( v14 )
        {
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 22672), 0LL) )
          {
            do
              KeYieldProcessorEx(&v18, a2, a3);
            while ( *(_QWORD *)(v14 + 22672) );
          }
          if ( *(_QWORD *)(v9 + 712) )
          {
            a2 = *(_QWORD *)(v9 + 216);
            v15 = *(__int64 **)(v9 + 224);
            if ( *(_QWORD *)(a2 + 8) != v9 + 216 || *v15 != v9 + 216 )
              __fastfail(3u);
            *v15 = a2;
            *(_QWORD *)(a2 + 8) = v15;
            *(_QWORD *)(v9 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 22672), 0LL);
        }
        *(_BYTE *)(v9 + 388) = 7;
        *(_QWORD *)(v9 + 216) = *(_QWORD *)(a1 + 11400);
        *(_QWORD *)(a1 + 11400) = v9 + 216;
        *(_QWORD *)(v9 + 200) = a3;
        goto LABEL_33;
      }
      if ( (*(_BYTE *)(v9 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v9 + 112) = v11 & 0xF8 | 2;
        *(_QWORD *)(v9 + 200) = a3;
        *((_BYTE *)v7 + 17) = 0;
LABEL_33:
        v10 = 1;
        goto LABEL_34;
      }
      if ( v12 == 5 )
      {
        *(_BYTE *)(v9 + 112) = v11 & 0xF8 | 6;
      }
      else if ( v12 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_34:
    *(_QWORD *)(v9 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v10 )
      return 1;
  }
  while ( v3 != (_QWORD *)(v5 + 8) );
  return 0;
}
