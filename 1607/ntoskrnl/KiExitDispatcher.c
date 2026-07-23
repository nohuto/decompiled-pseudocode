/*
 * XREFs of KiExitDispatcher @ 0x140056280
 * Callers:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeSetTimerEx @ 0x140055D50 (KeSetTimerEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeSetProcess @ 0x140074F94 (KeSetProcess.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x14007E13C (KeInsertQueueEx.c)
 *     KeInsertQueue @ 0x140087860 (KeInsertQueue.c)
 *     KeAlertThreadByThreadId @ 0x140096B20 (KeAlertThreadByThreadId.c)
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x1400A4264 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1400A6788 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 *     KeThawProcess @ 0x1400C52E8 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x1400C6D10 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1400C6DDC (KeFreezeProcess.c)
 *     KeSuspendThread @ 0x1400C7748 (KeSuspendThread.c)
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KiRundownMutants @ 0x1400F0170 (KiRundownMutants.c)
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400F4C40 (KeReleaseMutant.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     KiSetSystemTimeDpc @ 0x14012A9A8 (KiSetSystemTimeDpc.c)
 *     KeFreezeProcessNew @ 0x1401D1F5C (KeFreezeProcessNew.c)
 *     KeInsertHeadQueue @ 0x1401D6940 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140225EF4 (EtwTraceReadyThread.c)
 */

void KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, ...)
{
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // r14
  bool v8; // bl
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  __int64 **v11; // r12
  __int64 *v12; // r15
  __int64 *v13; // rsi
  __int64 *v14; // r13
  int v15; // eax
  volatile signed __int32 *v16; // r12
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // rbp
  volatile signed __int32 *v22; // rsi
  signed __int64 *v23; // r15
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  __int64 *v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = (a2 & 1) != 0;
  if ( *(_QWORD *)(a1 + 11400) )
  {
    if ( (a2 & 1) != 0 && KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_30;
    v11 = *(__int64 ***)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = 0LL;
    while ( 1 )
    {
      v12 = (__int64 *)(v11 - 27);
      v13 = *(v11 - 1);
      v26 = *v11;
      v14 = &v13[6 * *((unsigned __int8 *)v11 + 371)];
      do
      {
        if ( *((unsigned __int8 *)v13 + 17) < 5u )
        {
          v16 = (volatile signed __int32 *)v13[4];
          v28 = 0;
          while ( _interlockedbittestandset(v16, 7u) )
          {
            do
              KeYieldProcessorEx(&v28);
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
        EtwTraceReadyThread(v12, v6, v5);
      v15 = *((_DWORD *)v12 + 30);
      if ( (v15 & 0x10000) == 0 )
        break;
      if ( (v15 & 0x40000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)v12 + 30, 0x12u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v12[23] + 572), 8u) & 7) != 0 )
        {
          v22 = (volatile signed __int32 *)v12[23];
          KiAcquireKobjectLockSafe(v22);
          if ( (v22[143] & 7) != 0 )
            goto LABEL_39;
          _InterlockedAnd(v22, 0xFFFFFF7F);
        }
      }
      KiDeferredReadyThread(a1, v12);
LABEL_18:
      v11 = (__int64 **)v26;
      if ( !v26 )
        goto LABEL_2;
    }
    v22 = (volatile signed __int32 *)v12[23];
    KiAcquireKobjectLockSafe(v22);
    if ( (v22[143] & 7) == 0 )
    {
      _InterlockedExchangeAdd(v22 + 143, 8u);
      _InterlockedAnd(v22, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)v12 + 30, 0x12u);
      *((_BYTE *)v12 + 388) = 6;
      v23 = v12 + 27;
      _m_prefetchw(&KiStackInSwapListHead);
      v24 = KiStackInSwapListHead;
      do
      {
        *v23 = v24;
        v25 = v24;
        v24 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v23, v24);
      }
      while ( v24 != v25 );
      if ( !v24 )
        KeSetEvent(&KiSwapEvent, 10, 0);
      goto LABEL_18;
    }
LABEL_39:
    KiRequestProcessInSwap(v12, v22);
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
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL, a3, a4);
      v27 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v21 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v10, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v21;
      if ( *(_BYTE *)(v21 + 388) == 1 )
        *(_DWORD *)(v21 + 2008) = *(_DWORD *)(v21 + 2008) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v21 + 388) = 2;
      *(_BYTE *)(v10 + 643) = 32;
      *(_BYTE *)(v10 + 390) = v9;
      KiQueueReadyThread(a1, v10);
      if ( !(unsigned __int8)KiSwapContext(v10, v21, v9) )
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
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11754) )
  {
    LOBYTE(a2) = 2;
    KiRequestSoftwareInterrupt(a1, a2, a3, a4);
  }
}
