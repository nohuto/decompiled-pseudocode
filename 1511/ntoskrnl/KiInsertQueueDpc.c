/*
 * XREFs of KiInsertQueueDpc @ 0x140043D50
 * Callers:
 *     KiInitializeUserApc @ 0x140022898 (KiInitializeUserApc.c)
 *     KiForegroundTimerCallback @ 0x140031DA8 (KiForegroundTimerCallback.c)
 *     IopAllocateIrpPrivate @ 0x140043750 (IopAllocateIrpPrivate.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     PpmPerfAction @ 0x140045860 (PpmPerfAction.c)
 *     PoExecutePerfCheck @ 0x140045CE0 (PoExecutePerfCheck.c)
 *     PpmCheckSnapAllUtility @ 0x140045F00 (PpmCheckSnapAllUtility.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     PopQueueTargetDpc @ 0x14009C5CC (PopQueueTargetDpc.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     KiGenericCallDpcWorker @ 0x1400D7FC4 (KiGenericCallDpcWorker.c)
 *     KiScheduleNextForegroundBoost @ 0x1400E554C (KiScheduleNextForegroundBoost.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     MmSetAccessLogging @ 0x14011B6E8 (MmSetAccessLogging.c)
 *     PpmPerfQueueAction @ 0x14012453C (PpmPerfQueueAction.c)
 *     ExpTimeRefreshCallback @ 0x14012FCDC (ExpTimeRefreshCallback.c)
 *     ExQueueDebuggerWorker @ 0x14013F2AC (ExQueueDebuggerWorker.c)
 *     IoProcessPassiveInterrupts @ 0x1401BF3CC (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x1401C6BB0 (KiInsertSecondarySignalList.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 *     PpmPerfControlActionCallback @ 0x1401EC54C (PpmPerfControlActionCallback.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x140210DC4 (EtwpQueueStackWalkDpc.c)
 *     ExpSvmFaultRoutine @ 0x14021544C (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x140216D50 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140216DEC (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x14021785C (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14020DCDC (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // r10
  int v7; // r8d
  unsigned __int8 v8; // r15
  bool v10; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int Number; // ecx
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // r11d
  signed __int64 IsrDpcStats; // rcx
  int v17; // r13d
  __int64 v18; // rdx
  __int16 v19; // r8
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // tt
  struct _KPRCB *v24; // rax
  signed __int16 v25; // ax
  signed __int16 v26; // tt
  __int64 v27; // rcx
  _QWORD *v28; // rax
  signed __int16 v29; // ax
  signed __int16 v30; // tt
  int v31; // [rsp+30h] [rbp-48h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v34; // [rsp+80h] [rbp+8h]
  __int64 v35; // [rsp+88h] [rbp+10h]
  volatile signed __int32 *v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v35 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v7 = 0;
  v8 = 0;
  v34 = 0;
  v10 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 >= 0x280u )
  {
    v31 = v5 - 640;
    v13 = KiProcessorBlock[v31];
    if ( !v13 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  else
  {
    Number = CurrentPrcb->Number;
    v31 = Number;
    if ( v5 != (_WORD)Number )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
    v13 = (__int64)CurrentPrcb;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v13 + 1608)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v13 + 1617));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v13 + 11752) )
    v14 = v13 + 11688;
  else
    v14 = v13 + 11648;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v14 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 16), 0LL) )
      goto LABEL_11;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v14 + 16), a2, 0LL);
  }
  v7 = 0;
  a4 = v36;
  a2 = v35;
LABEL_11:
  v15 = v31;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( v31 != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v17 = 0;
  }
  else
  {
    ++*(_DWORD *)(v14 + 24);
    ++*(_DWORD *)(v14 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v10 )
    {
      v17 = *(_DWORD *)(v14 + 24);
      v7 = *(_DWORD *)(v14 + 28);
      v34 = v7;
    }
    else
    {
      v17 = 0;
    }
    v8 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v27 = *(_QWORD *)v14;
      v28 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( !*(_QWORD *)v14 )
        *(_QWORD *)(v14 + 8) = v28;
      *v28 = v27;
      *(_QWORD *)v14 = v28;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      **(_QWORD **)(v14 + 8) = BugCheckParameter2 + 8;
      *(_QWORD *)(v14 + 8) = BugCheckParameter2 + 8;
    }
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v14 + 16, retaddr);
    v15 = v31;
    v7 = v34;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 16), 0LL);
  }
  if ( v8 )
  {
    if ( v10 )
    {
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v17,
        v7,
        v15,
        *(_BYTE *)(BugCheckParameter2 + 1));
      v15 = v31;
    }
    if ( v14 == v13 + 11688 )
    {
      _m_prefetchw((const void *)(v13 + 11758));
      v29 = *(_WORD *)(v13 + 11758);
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11758), v29 | 2, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x2F) != 0 )
        goto LABEL_38;
      v18 = 4LL;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(v14 + 24) < *(_DWORD *)(v13 + 11736) )
    {
      if ( CurrentPrcb == (struct _KPRCB *)v13 )
      {
        if ( !*(_BYTE *)(BugCheckParameter2 + 1) && *(_DWORD *)(v13 + 11740) >= *(_DWORD *)(v13 + 11744) )
        {
LABEL_50:
          _m_prefetchw((const void *)(v13 + 11756));
          v25 = *(_WORD *)(v13 + 11756);
          do
          {
            v26 = v25;
            v25 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11756), v25 | 0x10, v25);
          }
          while ( v26 != v25 );
          if ( (v25 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v13 + 1600) + 64LL) & *(_QWORD *)(v13 + 1608)) == 0LL )
            goto LABEL_38;
        }
      }
      else if ( (unsigned __int8)(*(_BYTE *)(BugCheckParameter2 + 1) - 2) > 1u )
      {
        goto LABEL_50;
      }
    }
    v18 = 2LL;
LABEL_30:
    v19 = 47;
    if ( (struct _KPRCB *)v13 == CurrentPrcb )
    {
      v19 = 41;
      LOWORD(v18) = v18 | 0x20;
    }
    _m_prefetchw((const void *)(v13 + 11756));
    v20 = *(_WORD *)(v13 + 11756);
    do
    {
      v21 = v20;
      BYTE1(v21) = BYTE1(v18) | HIBYTE(v20);
      v22 = v20;
      v20 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11756), v18 | v20, v20);
    }
    while ( v22 != v20 );
    if ( ((unsigned __int16)v19 & v20) == 0 )
    {
      if ( (struct _KPRCB *)v13 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v21) = 2;
          HalRequestSoftwareInterrupt(v21);
        }
      }
      else if ( *(_QWORD *)(v13 + 8) != *(_QWORD *)(v13 + 24) || *(_BYTE *)(v13 + 7) )
      {
        v24 = KeGetCurrentPrcb();
        LOBYTE(v18) = 2;
        ++v24->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v15, v18);
      }
    }
  }
LABEL_38:
  __writecr8(CurrentIrql);
  return v8;
}
