/*
 * XREFs of KeAccumulateTicks @ 0x140048FA0
 * Callers:
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetClockInterval @ 0x140032C70 (KiSetClockInterval.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140035460 (KiSetClockIntervalToMinimumRequested.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KiCheckKeepAlive @ 0x1400E255C (KiCheckKeepAlive.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400E54AC (PoTraceSystemTimerResolutionKernel.c)
 *     KdCheckForDebugBreak @ 0x140119A78 (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlInvokeHypervisorDebugger @ 0x1401AE35C (HvlInvokeHypervisorDebugger.c)
 */

void __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  char v13; // cl
  unsigned int v14; // r14d
  char v15; // dl
  unsigned __int8 CurrentIrql; // r15
  char v17; // al
  __int64 p_TimerTable; // r9
  unsigned int LastTimerHand; // edx
  char v20; // r10
  unsigned int v21; // edx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  unsigned __int16 v24; // tt
  __int64 CurrentThread; // rsi
  unsigned int InterruptRate; // eax
  __int64 v27; // rcx
  bool v28; // zf
  int DpcWatchdogPeriod; // ecx
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v31; // rbp
  unsigned int v32; // ecx
  __int16 v33; // cx
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int MaximumDpcQueueDepth; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int DpcTimeLimit; // ecx
  __int16 v40; // cx
  unsigned __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  __int16 v42; // [rsp+40h] [rbp-48h]
  _QWORD v43[2]; // [rsp+48h] [rbp-40h] BYREF

  v9 = MEMORY[0xFFFFF78000000008];
  if ( (a1->DpcRequestSummary & 8) == 0 )
  {
    v10 = MEMORY[0xFFFFF78000000008] >> 18;
    if ( KiSerializeTimerExpiration )
    {
      if ( !a1->ClockOwner )
      {
LABEL_4:
        a1->LastTimerHand = v10;
        goto LABEL_5;
      }
      p_TimerTable = KiProcessorBlock[0] + 13824;
    }
    else
    {
      p_TimerTable = (__int64)&a1->TimerTable;
    }
    if ( !p_TimerTable )
      goto LABEL_4;
    LastTimerHand = a1->LastTimerHand;
    if ( (unsigned int)v10 - LastTimerHand >= 0x100 )
      LODWORD(v10) = LastTimerHand + 255;
    v20 = 0;
    v21 = LastTimerHand - 1;
    while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v21 + p_TimerTable + 536) )
    {
      if ( v21 == (_DWORD)v10 )
        goto LABEL_24;
    }
    v20 = 1;
LABEL_24:
    a1->LastTimerHand = v21;
    if ( v20 || a1->ClockOwner && KiNextTimer2DueTime <= v9 )
    {
      _m_prefetchw(&a1->11756);
      v22 = a1->DpcRequestSlot[0];
      do
      {
        v23 = v22;
        BYTE1(v23) = HIBYTE(v22);
        v24 = v22;
        v22 = _InterlockedCompareExchange16((volatile signed __int16 *)&a1->11756, v22 | 8, v22);
      }
      while ( v24 != v22 );
      if ( (v22 & 0x29) == 0 )
      {
        if ( a1->NestingLevel )
        {
          a1->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v23) = 2;
          HalRequestSoftwareInterrupt(v23);
        }
      }
    }
  }
LABEL_5:
  if ( a1->ClockOwner )
  {
    v12 = v9 + KeMaximumIncrement;
    v13 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v12 > qword_1402E8928 )
        goto LABEL_6;
    }
    else if ( v12 <= qword_1402E8928 )
    {
      goto LABEL_6;
    }
    v14 = 0;
    v15 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( v13 == KiHRTimerClockActive )
    {
      if ( v13 )
      {
        RtlRbRemoveNode(&KiClockIntervalRequests, &KiHRTimerClockRequest);
        byte_1402E8998 = 0;
        KiSetClockIntervalToMinimumRequested();
        v17 = 0;
      }
      else
      {
        KiSetClockInterval(KeMinimumIncrement, (__int64)&KiHRTimerClockRequest);
        v14 = KeMinimumIncrement;
        v17 = 1;
      }
      KiHRTimerClockActive = v17;
      v15 = 1;
    }
    __writecr8(CurrentIrql);
    if ( v15 )
      PoTraceSystemTimerResolutionKernel(v14, 1834242632LL);
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v40 = 0;
    v41 = v9;
    v42 = 0;
    if ( a1->ClockOwner )
    {
      v40 = 1;
      v42 = 1;
    }
    if ( (a1->DpcRequestSummary & 8) != 0 )
      v42 = v40 | 8;
    v43[1] = 16LL;
    v43[0] = &v41;
    EtwTraceKernelEvent((int)v43, 1, 0x40040000u, 0xF4Fu, 4196866);
  }
  a1->LastTick = a3;
  v11 = a3 - a2;
  if ( v11 )
  {
    CurrentThread = (__int64)a1->CurrentThread;
    if ( a1->ClockOwner )
    {
      if ( !--KiClockPollCycle )
      {
        KiClockPollCycle = KiClockKeepAliveCycle;
        BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
        v31 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
        v32 = (unsigned __int8)KiClockCheckSlot + 1;
        if ( v32 >= (unsigned int)KeNumberProcessors_0 )
          LOBYTE(v32) = 0;
        KiClockCheckSlot = v32;
        if ( (unsigned __int8)KiCheckKeepAlive(*(unsigned int *)(v31 + 36)) )
        {
          if ( !*(_DWORD *)(v31 + 22624) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
          {
            HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
            KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v31, BugCheckParameter4);
          }
          *(_DWORD *)(v31 + 22624) = 0;
        }
      }
    }
    if ( a5 )
    {
      a1->UserTime += v11;
      *(_DWORD *)(CurrentThread + 732) += v11;
    }
    else
    {
      a1->KernelTime += v11;
      if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
      {
        a1->DpcTime += v11;
        ++a1->DpcTimeCount;
        DpcTimeLimit = a1->DpcTimeLimit;
        if ( a1->DpcTimeCount > DpcTimeLimit && DpcTimeLimit )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled )
              KeBugCheckEx(0x133u, 0LL, a1->DpcTimeCount, a1->DpcTimeLimit, 0LL);
            __int2c();
          }
          a1->DpcTimeCount = 0;
        }
      }
      else if ( a1->NestingLevel > 1u )
      {
        a1->InterruptTime += v11;
      }
      else
      {
        *(_DWORD *)(CurrentThread + 652) += v11;
      }
      if ( a4 >= 2u )
      {
        ++a1->DpcWatchdogCount;
        DpcWatchdogPeriod = a1->DpcWatchdogPeriod;
        if ( a1->DpcWatchdogCount < DpcWatchdogPeriod || !DpcWatchdogPeriod )
          goto LABEL_39;
        if ( KeEnableWatchdogTimeout )
        {
          __rdtsc();
          HvlInvokeHypervisorDebugger(2LL, 0LL);
          if ( !(_BYTE)KdDebuggerEnabled )
            KeBugCheckEx(0x133u, 1uLL, a1->DpcWatchdogPeriod, 0LL, 0LL);
          __int2c();
        }
      }
    }
    a1->DpcWatchdogCount = 0;
LABEL_39:
    if ( (_KTHREAD *)CurrentThread != a1->IdleThread
      && a1->NestingLevel <= 1u
      && (*(char *)(CurrentThread + 195) < 16
       && *(_QWORD *)(CurrentThread + 104)
       && (v37 = *(_QWORD *)(CurrentThread + 104)) != 0
       && (v38 = a1->ScbOffset + v37) != 0
       && (unsigned int)KiGetThreadEffectiveRankNonZero(CurrentThread, v38, 0)
       || *(char *)(CurrentThread + 195) < 8) )
    {
      a1->AvailableTime += v11;
    }
    if ( v11 >= 8 )
    {
      a1->InterruptRate = 0;
    }
    else
    {
      a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
      InterruptRate = a1->InterruptRate;
      v27 = v11;
      do
      {
        InterruptRate >>= 4;
        --v27;
      }
      while ( v27 );
      a1->InterruptRate = InterruptRate;
    }
    a1->InterruptLastCount = a1->InterruptCount;
    a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v11;
    a1->DpcLastCount = a1->DpcData[0].DpcCount;
    if ( !a1->DpcData[0].DpcQueueDepth || (v33 = a1->DpcRequestSlot[0], (v33 & 3) != 0) )
    {
      v28 = a1->AdjustDpcThreshold-- == 1;
      if ( !v28
        || (a1->AdjustDpcThreshold = KiAdjustDpcThreshold,
            MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth,
            MaximumDpcQueueDepth >= KiMaximumDpcQueueDepth) )
      {
LABEL_47:
        if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && KiPollSlot == a1->Number )
          KdCheckForDebugBreak();
        return;
      }
      v35 = MaximumDpcQueueDepth + 1;
    }
    else
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      if ( (v33 & 0x2F) == 0 )
        KiRequestSoftwareInterrupt(a1, 2u);
      v34 = a1->MaximumDpcQueueDepth;
      if ( a1->DpcRequestRate >= KiIdealDpcRate || v34 <= 1 )
        goto LABEL_47;
      v35 = v34 - 1;
    }
    a1->MaximumDpcQueueDepth = v35;
    goto LABEL_47;
  }
}
