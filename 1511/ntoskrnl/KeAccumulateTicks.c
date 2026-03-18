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

void __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, __int64 a3, unsigned __int8 a4, char a5)
{
  unsigned int v6; // edi
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // r14d
  char v14; // dl
  unsigned __int8 CurrentIrql; // r15
  char v16; // al
  __int64 p_TimerTable; // r9
  unsigned int LastTimerHand; // edx
  char v19; // r10
  unsigned int v20; // edx
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  unsigned __int16 v23; // tt
  __int64 CurrentThread; // rsi
  unsigned int InterruptRate; // eax
  __int64 v26; // rcx
  bool v27; // zf
  int DpcWatchdogPeriod; // ecx
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v30; // rbp
  unsigned int v31; // ecx
  __int16 v32; // cx
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int MaximumDpcQueueDepth; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int DpcTimeLimit; // ecx
  __int16 v39; // cx
  unsigned __int64 v40; // [rsp+38h] [rbp-50h] BYREF
  __int16 v41; // [rsp+40h] [rbp-48h]
  _QWORD v42[2]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  v9 = MEMORY[0xFFFFF78000000008];
  if ( (a1->DpcRequestSummary & 8) == 0 )
  {
    a3 = MEMORY[0xFFFFF78000000008] >> 18;
    if ( KiSerializeTimerExpiration )
    {
      if ( !a1->ClockOwner )
      {
LABEL_4:
        a1->LastTimerHand = a3;
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
    if ( (unsigned int)a3 - LastTimerHand >= 0x100 )
      a3 = LastTimerHand + 255;
    v19 = 0;
    v20 = LastTimerHand - 1;
    while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v20 + p_TimerTable + 536) )
    {
      if ( v20 == (_DWORD)a3 )
        goto LABEL_24;
    }
    v19 = 1;
LABEL_24:
    a1->LastTimerHand = v20;
    if ( v19 || a1->ClockOwner && KiNextTimer2DueTime <= v9 )
    {
      _m_prefetchw(&a1->11756);
      v21 = a1->DpcRequestSlot[0];
      do
      {
        v22 = v21;
        BYTE1(v22) = HIBYTE(v21);
        v23 = v21;
        v21 = _InterlockedCompareExchange16((volatile signed __int16 *)&a1->11756, v21 | 8, v21);
      }
      while ( v23 != v21 );
      if ( (v21 & 0x29) == 0 )
      {
        if ( a1->NestingLevel )
        {
          a1->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v22) = 2;
          HalRequestSoftwareInterrupt(v22);
        }
      }
    }
  }
LABEL_5:
  if ( a1->ClockOwner )
  {
    v11 = v9 + KeMaximumIncrement;
    v12 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v11 > qword_1402E8928 )
        goto LABEL_6;
    }
    else if ( v11 <= qword_1402E8928 )
    {
      goto LABEL_6;
    }
    v13 = 0;
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( v12 == KiHRTimerClockActive )
    {
      if ( v12 )
      {
        RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, KiHRTimerClockRequest);
        byte_1402E8998 = 0;
        KiSetClockIntervalToMinimumRequested();
        v16 = 0;
      }
      else
      {
        KiSetClockInterval(KeMinimumIncrement, (__int64)KiHRTimerClockRequest, a3);
        v13 = KeMinimumIncrement;
        v16 = 1;
      }
      KiHRTimerClockActive = v16;
      v14 = 1;
    }
    __writecr8(CurrentIrql);
    if ( v14 )
      PoTraceSystemTimerResolutionKernel(v13, 1834242632LL);
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v39 = 0;
    v40 = v9;
    v41 = 0;
    if ( a1->ClockOwner )
    {
      v39 = 1;
      v41 = 1;
    }
    if ( (a1->DpcRequestSummary & 8) != 0 )
      v41 = v39 | 8;
    v42[1] = 16LL;
    v42[0] = &v40;
    EtwTraceKernelEvent((int)v42, 1, 0x40040000u, 0xF4Fu, 4196866);
  }
  a1->LastTick = v6;
  v10 = v6 - a2;
  if ( v10 )
  {
    CurrentThread = (__int64)a1->CurrentThread;
    if ( a1->ClockOwner )
    {
      if ( !--KiClockPollCycle )
      {
        KiClockPollCycle = KiClockKeepAliveCycle;
        BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
        v30 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
        v31 = (unsigned __int8)KiClockCheckSlot + 1;
        if ( v31 >= (unsigned int)KeNumberProcessors_0 )
          LOBYTE(v31) = 0;
        KiClockCheckSlot = v31;
        if ( (unsigned __int8)KiCheckKeepAlive(*(unsigned int *)(v30 + 36)) )
        {
          if ( !*(_DWORD *)(v30 + 22624) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
          {
            HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
            KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v30, BugCheckParameter4);
          }
          *(_DWORD *)(v30 + 22624) = 0;
        }
      }
    }
    if ( a5 )
    {
      a1->UserTime += v10;
      *(_DWORD *)(CurrentThread + 732) += v10;
    }
    else
    {
      a1->KernelTime += v10;
      if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
      {
        a1->DpcTime += v10;
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
        a1->InterruptTime += v10;
      }
      else
      {
        *(_DWORD *)(CurrentThread + 652) += v10;
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
       && (v36 = *(_QWORD *)(CurrentThread + 104)) != 0
       && (v37 = a1->ScbOffset + v36) != 0
       && (unsigned int)KiGetThreadEffectiveRankNonZero(CurrentThread, v37, 0)
       || *(char *)(CurrentThread + 195) < 8) )
    {
      a1->AvailableTime += v10;
    }
    if ( v10 >= 8 )
    {
      a1->InterruptRate = 0;
    }
    else
    {
      a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
      InterruptRate = a1->InterruptRate;
      v26 = v10;
      do
      {
        InterruptRate >>= 4;
        --v26;
      }
      while ( v26 );
      a1->InterruptRate = InterruptRate;
    }
    a1->InterruptLastCount = a1->InterruptCount;
    a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v10;
    a1->DpcLastCount = a1->DpcData[0].DpcCount;
    if ( !a1->DpcData[0].DpcQueueDepth || (v32 = a1->DpcRequestSlot[0], (v32 & 3) != 0) )
    {
      v27 = a1->AdjustDpcThreshold-- == 1;
      if ( !v27
        || (a1->AdjustDpcThreshold = KiAdjustDpcThreshold,
            MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth,
            MaximumDpcQueueDepth >= KiMaximumDpcQueueDepth) )
      {
LABEL_47:
        if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && KiPollSlot == a1->Number )
          KdCheckForDebugBreak();
        return;
      }
      v34 = MaximumDpcQueueDepth + 1;
    }
    else
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      if ( (v32 & 0x2F) == 0 )
        KiRequestSoftwareInterrupt(a1, 2u);
      v33 = a1->MaximumDpcQueueDepth;
      if ( a1->DpcRequestRate >= KiIdealDpcRate || v33 <= 1 )
        goto LABEL_47;
      v34 = v33 - 1;
    }
    a1->MaximumDpcQueueDepth = v34;
    goto LABEL_47;
  }
}
