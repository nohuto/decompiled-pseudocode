/*
 * XREFs of KiExitDispatcher @ 0x1400879A0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeSetProcess @ 0x14001BFCC (KeSetProcess.c)
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     PpmCheckRun @ 0x140074B90 (PpmCheckRun.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAlertThreadByThreadId @ 0x14008E070 (KeAlertThreadByThreadId.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x140095D30 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x140096ED4 (KeFreezeProcess.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x1400CFA54 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 *     KiSetSystemTimeDpc @ 0x14012045C (KiSetSystemTimeDpc.c)
 *     KeInsertHeadQueue @ 0x1401C7B68 (KeInsertHeadQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400C7BB0 (KiRequestProcessInSwap.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

void KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, ...)
{
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // r14
  bool v8; // bl
  unsigned __int8 v9; // bl
  __int64 v10; // rbp
  __int64 **v11; // r12
  __int64 *v12; // r15
  __int64 *v13; // rdi
  __int64 *v14; // r13
  int v15; // eax
  volatile signed __int32 *v16; // r12
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // r8
  volatile signed __int32 *v25; // rdi
  signed __int64 *v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 *v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+70h] [rbp+8h] BYREF
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = (a2 & 1) != 0;
  if ( *(_QWORD *)(a1 + 11400) )
  {
    if ( (a2 & 1) != 0 && KiDirectSwitchThread(a1, a4, (a2 & 2) != 0, a4) )
      goto LABEL_30;
    v11 = *(__int64 ***)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = 0LL;
    while ( 1 )
    {
      v12 = (__int64 *)(v11 - 27);
      v13 = *(v11 - 1);
      v29 = *v11;
      v14 = &v13[6 * *((unsigned __int8 *)v11 + 371)];
      do
      {
        if ( *((unsigned __int8 *)v13 + 17) < 5u )
        {
          v16 = (volatile signed __int32 *)v13[4];
          v31 = 0;
          while ( _interlockedbittestandset(v16, 7u) )
          {
            do
              KeYieldProcessorEx(&v31, a2, a3);
            while ( (*v16 & 0x80u) != 0 );
          }
          if ( *((_BYTE *)v13 + 17) == 4 )
          {
            v17 = (__int64 *)*v13;
            v18 = (__int64 **)v13[1];
            if ( *(__int64 **)(*v13 + 8) != v13 || *v18 != v13 )
              __fastfail(3u);
            *v18 = v17;
            v17[1] = (__int64)v18;
          }
          _InterlockedAnd(v16, 0xFFFFFF7F);
        }
        v13 += 6;
      }
      while ( v13 != v14 );
      *((_BYTE *)v12 + 566) = v6;
      *((_BYTE *)v12 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v12, v6, v5, 0LL);
      v15 = *((_DWORD *)v12 + 30);
      if ( (v15 & 0x10000) == 0 )
        break;
      if ( (v15 & 0x40000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)v12 + 30, 0x12u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v12[23] + 572), 8u) & 7) != 0 )
        {
          v25 = (volatile signed __int32 *)v12[23];
          KiAcquireKobjectLockSafe(v25, a2, a3);
          if ( (v25[143] & 7) != 0 )
            goto LABEL_37;
          _InterlockedAnd(v25, 0xFFFFFF7F);
        }
      }
      KiDeferredReadyThread(a1, v12);
LABEL_18:
      v11 = (__int64 **)v29;
      if ( !v29 )
        goto LABEL_2;
    }
    v25 = (volatile signed __int32 *)v12[23];
    KiAcquireKobjectLockSafe(v25, a2, a3);
    if ( (v25[143] & 7) == 0 )
    {
      _InterlockedExchangeAdd(v25 + 143, 8u);
      _InterlockedAnd(v25, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)v12 + 30, 0x12u);
      *((_BYTE *)v12 + 388) = 6;
      v26 = v12 + 27;
      _m_prefetchw(&KiStackInSwapListHead);
      v27 = KiStackInSwapListHead;
      do
      {
        *v26 = v27;
        v28 = v27;
        v27 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v26, v27);
      }
      while ( v27 != v28 );
      if ( !v27 )
        KeSetEvent(&KiSwapEvent, 10, 0);
      goto LABEL_18;
    }
LABEL_37:
    KiRequestProcessInSwap(v12, v25);
    goto LABEL_18;
  }
LABEL_2:
  if ( v8 )
  {
LABEL_30:
    v19 = *(_QWORD *)(a1 + 8);
    v20 = a5;
    *(_DWORD *)(v19 + 116) |= 4u;
    *(_BYTE *)(v19 + 390) = v20;
    return;
  }
  v9 = a5;
  if ( a5 < 2u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v30, v21, v22);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v23 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v10, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v23;
      *(_BYTE *)(v23 + 388) = 2;
      *(_BYTE *)(v10 + 643) = 32;
      *(_BYTE *)(v10 + 390) = v9;
      KiQueueReadyThread((struct _KPRCB *)a1, v10, v24);
      if ( !(unsigned __int8)KiSwapContext(v10, v23, v9) )
        goto LABEL_6;
    }
    else if ( (*(_DWORD *)(v10 + 116) & 0x40) == 0 )
    {
LABEL_6:
      __writecr8(v9);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v10 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11754) )
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
}
