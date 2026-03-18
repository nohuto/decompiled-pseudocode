/*
 * XREFs of KiExitDispatcher @ 0x14004C6B0
 * Callers:
 *     KeThawProcess @ 0x14000989C (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     KeResumeThread @ 0x14000C8A4 (KeResumeThread.c)
 *     KeSuspendThread @ 0x14000C978 (KeSuspendThread.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ExpQueueWorkItemNode @ 0x14000D530 (ExpQueueWorkItemNode.c)
 *     KiRundownMutants @ 0x14000DF1C (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 *     KeInsertPriQueue @ 0x140029C68 (KeInsertPriQueue.c)
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     IopCompleteIrpInFileObjectList @ 0x140042DE0 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140066890 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KeFreezeProcess @ 0x1400D24F8 (KeFreezeProcess.c)
 *     KeSetProcess @ 0x1400EFB40 (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x1400F33C0 (KeAlertThreadByThreadId.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     KeWakeWaitChain @ 0x140103A14 (KeWakeWaitChain.c)
 *     KeRundownQueueEx @ 0x140112874 (KeRundownQueueEx.c)
 *     KeInsertQueue @ 0x1401190B0 (KeInsertQueue.c)
 *     KeTimeOutQueueWaiters @ 0x140120854 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     KiInsertQueue @ 0x14017E344 (KiInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x1401E46B4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x1401FAFCC (IopPassiveInterruptDpc.c)
 *     KeInsertHeadQueue @ 0x140204A7C (KeInsertHeadQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x14020BC24 (KiSwapToUmsThreadContinue.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiDirectSwitchThread @ 0x1400EBC80 (KiDirectSwitchThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     KiAddThreadToReadyQueue @ 0x1400ED780 (KiAddThreadToReadyQueue.c)
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiExitDispatcher(
        signed __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int v5; // r12d
  __int64 result; // rax
  signed __int64 v7; // r13
  __int64 **v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 *v11; // rsi
  __int64 *v12; // rbp
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  int v17; // eax
  volatile signed __int32 *v18; // rdi
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  signed __int64 *v21; // rdx
  signed __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 p_AbPropagateBoostsList; // r8
  unsigned int v25; // ebx
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  char v30; // bl
  __int64 v31; // r14
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v35; // rsi
  int v36; // ebx
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // al
  unsigned int v39; // eax
  int v40; // edx
  char v41; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  bool v52; // zf
  __int64 v53; // rcx
  unsigned __int8 v56; // [rsp+98h] [rbp+20h]

  v56 = a4;
  v5 = 0;
  result = a2;
  v7 = a1;
  if ( *(_QWORD *)(a1 + 11400) )
  {
    if ( !a2 || !(unsigned __int8)KiDirectSwitchThread(a1, a4) )
    {
      v8 = *(__int64 ***)(v7 + 11400);
      *(_QWORD *)(v7 + 11400) = 0LL;
      while ( 1 )
      {
        v9 = *((unsigned __int8 *)v8 + 371);
        v10 = (__int64 *)(v8 - 27);
        v11 = *(v8 - 1);
        v8 = (__int64 **)*v8;
        v12 = &v11[6 * v9];
        do
        {
          if ( *((unsigned __int8 *)v11 + 17) < 5u )
          {
            v13 = (volatile signed __int32 *)v11[4];
            v14 = 0;
            if ( _interlockedbittestandset(v13, 7u) )
            {
              do
              {
                if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v14);
              }
              while ( (*v13 & 0x80u) != 0 || _interlockedbittestandset(v13, 7u) );
            }
            if ( *((_BYTE *)v11 + 17) == 4 )
            {
              v15 = (__int64 *)*v11;
              v16 = (__int64 **)v11[1];
              if ( *(__int64 **)(*v11 + 8) != v11 || *v16 != v11 )
                __fastfail(3u);
              *v16 = v15;
              v15[1] = (__int64)v16;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
          }
          v11 += 6;
        }
        while ( v11 != v12 );
        *((_BYTE *)v10 + 566) = a3;
        *((_BYTE *)v10 + 567) = v56;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceReadyThread(v10, a3, v56, 0LL);
        v17 = *((_DWORD *)v10 + 30);
        if ( (v17 & 0x10000) == 0 )
          break;
        if ( (v17 & 0x40000) != 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)v10 + 30, 0x12u);
          if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v10[23] + 572), 8u) & 7) != 0 )
          {
            v18 = (volatile signed __int32 *)v10[23];
            v19 = 0;
            if ( _interlockedbittestandset(v18, 7u) )
            {
              do
              {
                if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v19);
              }
              while ( (*v18 & 0x80u) != 0 || _interlockedbittestandset(v18, 7u) );
            }
            if ( (v18[143] & 7) != 0 )
              goto LABEL_47;
            _InterlockedAnd(v18, 0xFFFFFF7F);
          }
        }
        KiDeferredReadyThread(v7, v10);
LABEL_48:
        if ( !v8 )
        {
          result = a2;
          goto LABEL_50;
        }
      }
      v18 = (volatile signed __int32 *)v10[23];
      v20 = 0;
      if ( _interlockedbittestandset(v18, 7u) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( (*v18 & 0x80u) != 0 || _interlockedbittestandset(v18, 7u) );
      }
      if ( (v18[143] & 7) == 0 )
      {
        _InterlockedExchangeAdd(v18 + 143, 8u);
        _InterlockedAnd(v18, 0xFFFFFF7F);
        _interlockedbittestandreset((volatile signed __int32 *)v10 + 30, 0x12u);
        *((_BYTE *)v10 + 388) = 6;
        v21 = v10 + 27;
        _m_prefetchw(&KiStackInSwapListHead);
        v22 = KiStackInSwapListHead;
        do
        {
          *v21 = v22;
          a1 = v22;
          v22 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v21, v22);
        }
        while ( v22 != a1 );
        if ( !v22 )
          KeSetEvent(&KiSwapEvent, 10, 0);
        goto LABEL_48;
      }
LABEL_47:
      KiRequestProcessInSwap(v10, v18);
      goto LABEL_48;
    }
    goto LABEL_143;
  }
LABEL_50:
  if ( (_BYTE)result )
  {
LABEL_143:
    v53 = *(_QWORD *)(v7 + 8);
    result = a5;
    *(_DWORD *)(v53 + 116) |= 4u;
    *(_BYTE *)(v53 + 390) = a5;
    return result;
  }
  if ( a5 >= 2u )
  {
    if ( *(_QWORD *)(v7 + 16) )
    {
      result = *(unsigned __int8 *)(v7 + 11754);
      if ( !(_BYTE)result )
      {
        if ( *(_BYTE *)(v7 + 32) )
        {
          *(_BYTE *)(v7 + 6) = 1;
        }
        else
        {
          LOBYTE(a1) = 2;
          return HalRequestSoftwareInterrupt(a1);
        }
      }
    }
  }
  else
  {
    v23 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(v7 + 8), 0LL);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
        {
          if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v25);
        }
        while ( *(_QWORD *)(v7 + 48) );
      }
      v26 = *(_QWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      _disable();
      *(_BYTE *)(v7 + 32) = 1;
      v27 = __rdtsc();
      v28 = v27 - *(_QWORD *)(v7 + 23352);
      v29 = v28 + *(unsigned int *)(v23 + 80);
      *(_QWORD *)(v23 + 72) += v28;
      *(_QWORD *)(v7 + 23352) = v27;
      v30 = *(_BYTE *)(v23 + 2);
      if ( v29 > 0xFFFFFFFF )
        LODWORD(v29) = -1;
      *(_DWORD *)(v23 + 80) = v29;
      if ( (v30 & 0x3E) != 0 )
      {
        if ( (v30 & 0x10) != 0 )
        {
          *(_QWORD *)(v7 + 8LL * *(unsigned __int8 *)(v23 + 124) + 23368) += *(_QWORD *)(v7 + 23352)
                                                                           - *(_QWORD *)(v7 + 23360);
          v30 &= ~0x10u;
          *(_QWORD *)(v7 + 23360) = 0LL;
        }
        if ( (v30 & 0x3E) != 0 )
        {
          if ( (v30 & 0x20) != 0 )
          {
            v31 = *(_QWORD *)(v23 + 1952);
            if ( v31 )
            {
              v32 = (_QWORD *)(v31
                             + 8 * (*(unsigned __int8 *)(v7 + 23858) + 2LL * (unsigned int)PoGetFrequencyBucket(v7)));
              *v32 += v28;
            }
            v30 &= ~0x20u;
          }
          if ( (v30 & 0x3E) != 0 )
          {
            v33 = *(_QWORD *)(v23 + 104);
            if ( v33 )
            {
              for ( i = (_QWORD *)(*(unsigned int *)(v7 + 1624) + v33); i; i = (_QWORD *)i[49] )
                *i += v28;
            }
            if ( (*(_BYTE *)(v23 + 2) & 8) != 0
              && (*(_QWORD *)(v23 + 576) & *(_QWORD *)(*(_QWORD *)(v7 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(v7 + 1600) + 136LL) )
            {
              *(_QWORD *)(v7 + 23392) += v28;
            }
            if ( *(_QWORD *)(v23 + 360) )
              KiEndCounterAccumulation(v23);
          }
        }
      }
      _enable();
      *(_QWORD *)(v7 + 8) = v26;
      *(_BYTE *)(v26 + 388) = 2;
      v35 = *(_QWORD *)(v23 + 72);
      v36 = *(unsigned __int8 *)(v23 + 565);
      *(_BYTE *)(v23 + 643) = 32;
      *(_BYTE *)(v23 + 390) = a5;
      if ( *(_QWORD *)(v23 + 568) != KiCpuSetSequence && (*(_DWORD *)(v23 + 116) & 8) == 0
        || v35 >= *(_QWORD *)(v23 + 32) )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 64), 0LL) )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v23 + 120), 0xBu);
        }
        else
        {
          if ( v35 >= *(_QWORD *)(v23 + 32) )
          {
            p_AbPropagateBoostsList = *(unsigned __int8 *)(v23 + 195);
            if ( (char)p_AbPropagateBoostsList < 16 )
            {
              v37 = *(_BYTE *)(v23 + 564);
              v38 = -1 - (v37 >> 4) - (v37 & 0xF) + p_AbPropagateBoostsList;
              if ( v38 < *(_BYTE *)(v23 + 563) )
                v38 = *(_BYTE *)(v23 + 563);
              p_AbPropagateBoostsList = v38;
              if ( v37 )
              {
                if ( (v37 & 0xF) != 0 )
                  *(_DWORD *)(v23 + 1420) = MEMORY[0xFFFFF78000000320];
                *(_BYTE *)(v23 + 564) = 0;
              }
              v39 = *(_DWORD *)(v23 + 1408);
              if ( v39 )
              {
                _BitScanReverse((unsigned int *)&v40, v39);
                p_AbPropagateBoostsList = (unsigned __int8)p_AbPropagateBoostsList;
                if ( (char)p_AbPropagateBoostsList < v40 )
                  p_AbPropagateBoostsList = (unsigned __int8)v40;
              }
            }
            v41 = p_AbPropagateBoostsList;
            if ( KiAbEnabled )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              if ( (char)p_AbPropagateBoostsList > *(char *)(v23 + 195) )
              {
                if ( *(_BYTE *)(v23 + 793) )
                {
                  v43 = (_QWORD *)(v23 + 1376);
                  if ( *(_QWORD *)(v23 + 1376) == 1LL )
                  {
                    p_AbPropagateBoostsList = (unsigned __int64)&CurrentPrcb->AbPropagateBoostsList;
                    if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                    {
                      *v43 = *(_QWORD *)p_AbPropagateBoostsList;
                      *(_QWORD *)p_AbPropagateBoostsList = v43;
                      _InterlockedIncrement16((volatile signed __int16 *)(v23 + 1416));
                      KiAbQueueAutoBoostDpc(CurrentPrcb);
                    }
                  }
                }
              }
            }
            v44 = KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v23 + 651);
            v45 = *(_DWORD *)(v23 + 120);
            *(_BYTE *)(v23 + 195) = v41;
            v46 = v35 + v44;
            if ( (v45 & 0x10) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)(v23 + 120), 4u);
            v47 = *(_QWORD *)(v23 + 544);
            *(_QWORD *)(v23 + 32) = v46;
            if ( *(_BYTE *)(v47 + 1490) == 2 && *(char *)(v23 + 195) < 16 && (*(_DWORD *)(v23 + 120) & 2) == 0 )
              KiScheduleNextForegroundBoost(v23);
            v36 = 0;
          }
          if ( *(_QWORD *)(v23 + 568) != KiCpuSetSequence
            && (*(_DWORD *)(v23 + 116) & 8) == 0
            && (unsigned int)KiComputeThreadAffinity(v23)
            && (*(unsigned __int8 *)(v7 + 1616) != *(_WORD *)(v23 + 584)
             || (*(_QWORD *)(v7 + 1608) & *(_QWORD *)(v23 + 576)) == 0LL) )
          {
            _interlockedbittestandset((volatile signed __int32 *)(v23 + 120), 0xBu);
          }
          *(_QWORD *)(v23 + 64) = 0LL;
        }
      }
      LOBYTE(p_AbPropagateBoostsList) = 1;
      KiUpdateGroupSchedulingRank(v23, v7, p_AbPropagateBoostsList);
      v48 = 0LL;
      if ( *(char *)(v23 + 195) >= 16 || (*(_BYTE *)(v7 + 35) & 2) != 0 )
      {
        v49 = *(_QWORD *)(v23 + 104);
        if ( v49 && (v50 = *(unsigned int *)(v7 + 1624) + v49) != 0 )
        {
          while ( (*(_BYTE *)(v50 + 112) & 2) == 0 )
          {
            v50 = *(_QWORD *)(v50 + 392);
            if ( !v50 )
              goto LABEL_123;
          }
        }
        else
        {
LABEL_123:
          v48 = *(_QWORD *)(v23 + 576) & **(_QWORD **)(v7 + 1600);
        }
      }
      if ( (*(_DWORD *)(v23 + 120) & 0x800) != 0 || v48 )
      {
        v52 = *(_QWORD *)(v7 + 16) == 0LL;
        *(_BYTE *)(v23 + 388) = 7;
        LOBYTE(v5) = !v52;
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
        _interlockedbittestandreset((volatile signed __int32 *)(v23 + 120), 0xBu);
        *(_BYTE *)(v23 + 565) = v36;
        KiDeferredReadyThread(v7, v23);
        if ( !v5 && *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 24) && *(_QWORD *)(v7 + 16) )
        {
          if ( *(_BYTE *)(v7 + 32) )
          {
            *(_BYTE *)(v7 + 6) = 1;
          }
          else
          {
            LOBYTE(v51) = 2;
            HalRequestSoftwareInterrupt(v51);
          }
        }
      }
      else
      {
        *(_BYTE *)(v23 + 565) = 0;
        KiAddThreadToReadyQueue(v7, 0, v23, 0, v36);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      }
      v52 = (unsigned __int8)KiSwapContext(v23, v26, a5) == 0;
    }
    else
    {
      v52 = (*(_DWORD *)(v23 + 116) & 0x40) == 0;
    }
    if ( !v52 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(v23 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    result = a5;
    __writecr8(a5);
  }
  return result;
}
