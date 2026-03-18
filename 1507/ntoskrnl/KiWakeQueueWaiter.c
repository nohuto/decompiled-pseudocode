/*
 * XREFs of KiWakeQueueWaiter @ 0x140043EC0
 * Callers:
 *     KiActivateWaiterKQueue @ 0x14000C6D8 (KiActivateWaiterKQueue.c)
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
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
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
 *     KiInsertQueueInternal @ 0x1401260F4 (KiInsertQueueInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v7; // r14
  __int64 v8; // r10
  __int64 v9; // rsi
  char v10; // di
  unsigned int v11; // ebx
  char v12; // al
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  _QWORD *v19; // rcx

  v3 = *(_QWORD **)(a2 + 16);
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
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( *(_QWORD *)(v9 + 64) );
    }
    if ( *(_BYTE *)(v9 + 388) == 5 )
    {
      v12 = *(_BYTE *)(v9 + 112);
      v10 = 0;
      v13 = v12 & 7;
      if ( v13 == 1 || v13 == 4 )
      {
        v14 = *(_QWORD *)(v9 + 232);
        if ( v14 )
        {
          if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
          {
            v15 = (unsigned __int8)*(_DWORD *)(v9 + 540);
            *(_DWORD *)(v9 + 540) = v15;
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 4 * v15 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
          }
        }
        v16 = *(_QWORD *)(v9 + 712);
        if ( v16 )
        {
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 22672), 0LL) )
          {
            do
            {
              if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v17);
            }
            while ( *(_QWORD *)(v16 + 22672) );
          }
          if ( *(_QWORD *)(v9 + 712) )
          {
            v18 = *(_QWORD *)(v9 + 216);
            v19 = *(_QWORD **)(v9 + 224);
            if ( *(_QWORD *)(v18 + 8) != v9 + 216 || *v19 != v9 + 216 )
              __fastfail(3u);
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            *(_QWORD *)(v9 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 22672), 0LL);
        }
        *(_BYTE *)(v9 + 388) = 7;
        *(_QWORD *)(v9 + 216) = *(_QWORD *)(a1 + 11400);
        *(_QWORD *)(a1 + 11400) = v9 + 216;
        *(_QWORD *)(v9 + 200) = a3;
        goto LABEL_41;
      }
      if ( (*(_BYTE *)(v9 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v9 + 112) = v12 & 0xF8 | 2;
        *(_QWORD *)(v9 + 200) = a3;
        *((_BYTE *)v7 + 17) = 0;
LABEL_41:
        v10 = 1;
        goto LABEL_42;
      }
      if ( v13 == 5 )
      {
        *(_BYTE *)(v9 + 112) = v12 & 0xF8 | 6;
      }
      else if ( v13 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_42:
    *(_QWORD *)(v9 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v10 )
      return 1;
  }
  while ( v3 != (_QWORD *)(a2 + 8) );
  return 0;
}
