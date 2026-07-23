/*
 * XREFs of KeAccumulateTicks @ 0x1400DA260
 * Callers:
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiCheckKeepAlive @ 0x14009E100 (KiCheckKeepAlive.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForTimerExpiration @ 0x1400DA690 (KiCheckForTimerExpiration.c)
 *     KdPollBreakIn @ 0x1400DD630 (KdPollBreakIn.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401672F0 (DbgBreakPointWithStatus.c)
 *     HvlInvokeHypervisorDebugger @ 0x1401BA9B0 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x1401D1C3C (KiDpcWatchdogCaptureStack.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 */

void __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r15
  unsigned int v10; // esi
  __int64 CurrentThread; // rdi
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v13; // rbp
  unsigned int v14; // ecx
  unsigned int DpcWatchdogProfileSingleDpcThreshold; // eax
  signed int DpcWatchdogProfileCumulativeDpcThreshold; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int InterruptRate; // eax
  __int64 v20; // rcx
  __int16 v21; // cx
  unsigned int MaximumDpcQueueDepth; // ecx
  int v23; // eax
  unsigned int v25; // eax

  v9 = 0;
  KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v10 = a3 - a2;
  if ( !v10 )
    return;
  CurrentThread = (__int64)a1->CurrentThread;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v13 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v14 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v14 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v14) = 0;
      KiClockCheckSlot = v14;
      if ( KiCheckKeepAlive(*(_DWORD *)(v13 + 36)) )
      {
        if ( !*(_DWORD *)(v13 + 22624) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v13, BugCheckParameter4);
        }
        *(_DWORD *)(v13 + 22624) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v10;
    *(_DWORD *)(CurrentThread + 732) += v10;
LABEL_37:
    a1->DpcWatchdogCount = 0;
    KiResetGlobalDpcWatchdogProfiler(a1);
    goto LABEL_38;
  }
  a1->KernelTime += v10;
  if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
  {
    ++a1->DpcTimeCount;
    a1->DpcTime += v10;
    if ( a1->DpcTimeLimit )
    {
      DpcWatchdogProfileSingleDpcThreshold = a1->DpcWatchdogProfileSingleDpcThreshold;
      if ( DpcWatchdogProfileSingleDpcThreshold && a1->DpcTimeCount >= DpcWatchdogProfileSingleDpcThreshold )
      {
        KiDpcWatchdogCaptureStack(a1);
        v9 = 1;
      }
      if ( a1->DpcTimeCount > a1->DpcTimeLimit )
      {
        if ( KeEnableWatchdogTimeout )
        {
          __rdtsc();
          HvlInvokeHypervisorDebugger(3LL, 0LL);
          if ( (_BYTE)KdDebuggerEnabled )
            NT_ASSERT(
              "*** DPC execution time exceeds system limit
    This is NOT a break in update time
    This is a BUG in a "
              "DPC routine
    Perform a stack trace to find the culprit
    The time out limit will be doubled on contin"
              "uation
    Use gh to continue!!
");
          KeBugCheckEx(
            0x133u,
            0LL,
            a1->DpcTimeCount,
            a1->DpcTimeLimit,
            (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
        }
        a1->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
      }
    }
  }
  else if ( a1->NestingLevel <= 1u )
  {
    *(_DWORD *)(CurrentThread + 652) += v10;
  }
  else
  {
    a1->InterruptTime += v10;
  }
  if ( a4 < 2u )
    goto LABEL_37;
  ++a1->DpcWatchdogCount;
  if ( a1->DpcWatchdogPeriod )
  {
    DpcWatchdogProfileCumulativeDpcThreshold = a1->DpcWatchdogProfileCumulativeDpcThreshold;
    if ( DpcWatchdogProfileCumulativeDpcThreshold
      && a1->DpcWatchdogCount >= DpcWatchdogProfileCumulativeDpcThreshold
      && !v9 )
    {
      KiDpcWatchdogCaptureStack(a1);
    }
    if ( a1->DpcWatchdogCount >= a1->DpcWatchdogPeriod )
    {
      if ( KeEnableWatchdogTimeout )
      {
        __rdtsc();
        HvlInvokeHypervisorDebugger(2LL, 0LL);
        if ( (_BYTE)KdDebuggerEnabled )
          NT_ASSERT(
            "*** DPC watchdog timeout
    This is NOT a break in update time
    This is most likely a BUG in an ISR
    "
            "Perform a stack trace to find the culprit
    The period will be doubled on continuation
    Use gh to continue!!
");
        KeBugCheckEx(0x133u, 1uLL, a1->DpcWatchdogPeriod, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
      }
      goto LABEL_37;
    }
  }
LABEL_38:
  if ( (_KTHREAD *)CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (*(char *)(CurrentThread + 195) < 16
     && *(_QWORD *)(CurrentThread + 104)
     && (v17 = *(_QWORD *)(CurrentThread + 104)) != 0
     && (v18 = a1->ScbOffset + v17) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero(CurrentThread, v18, 0LL, 0, 0LL)
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
    v20 = v10;
    do
    {
      InterruptRate >>= 4;
      --v20;
    }
    while ( v20 );
    a1->InterruptRate = InterruptRate;
  }
  a1->InterruptLastCount = a1->InterruptCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v10;
  a1->DpcLastCount = a1->DpcData[0].DpcCount;
  if ( a1->DpcData[0].DpcQueueDepth )
  {
    v21 = a1->DpcRequestSlot[0];
    if ( (v21 & 3) == 0 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      if ( (v21 & 0x2F) == 0 )
        KiRequestSoftwareInterrupt(a1, 2u);
      MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth;
      if ( a1->DpcRequestRate >= KiIdealDpcRate || MaximumDpcQueueDepth <= 1 )
        goto LABEL_64;
      v23 = MaximumDpcQueueDepth - 1;
      goto LABEL_63;
    }
  }
  if ( a1->AdjustDpcThreshold-- == 1 )
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    v25 = a1->MaximumDpcQueueDepth;
    if ( v25 < KiMaximumDpcQueueDepth )
    {
      v23 = v25 + 1;
LABEL_63:
      a1->MaximumDpcQueueDepth = v23;
    }
  }
LABEL_64:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
    && KiPollSlot == a1->Number
    && (!KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
    && (unsigned __int8)KdPollBreakIn((unsigned __int8)KdEventLoggingEnabled) )
  {
    DbgBreakPointWithStatus(1u);
  }
}
