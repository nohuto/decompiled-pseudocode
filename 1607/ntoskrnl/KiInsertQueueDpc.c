/*
 * XREFs of KiInsertQueueDpc @ 0x1400D82C0
 * Callers:
 *     MmSetAccessLogging @ 0x140001D44 (MmSetAccessLogging.c)
 *     PopQueueTargetDpc @ 0x14000D654 (PopQueueTargetDpc.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     IopAllocateIrpPrivate @ 0x14002E250 (IopAllocateIrpPrivate.c)
 *     KiTimerWaitTest @ 0x140058C90 (KiTimerWaitTest.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     ExQueueDebuggerWorker @ 0x140083318 (ExQueueDebuggerWorker.c)
 *     EtwpRequestFlushTimer @ 0x140085ADC (EtwpRequestFlushTimer.c)
 *     KiGenericCallDpcWorker @ 0x14009595C (KiGenericCallDpcWorker.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140099104 (KiChargeSchedulingGroupCycleTime.c)
 *     KiScheduleNextForegroundBoost @ 0x1400A44D0 (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x1400A7C9C (KiInitializeUserApc.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KiForegroundTimerCallback @ 0x1400AA56C (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x1400AA984 (KiEntropyQueueDpc.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3870 (KiTransitionSchedulingGroupGeneration.c)
 *     KeInsertQueueDpc @ 0x1400D82A0 (KeInsertQueueDpc.c)
 *     PpmPerfAction @ 0x1400D86C0 (PpmPerfAction.c)
 *     PpmCheckSnapAllUtility @ 0x1400D8E00 (PpmCheckSnapAllUtility.c)
 *     KeClockInterruptNotify @ 0x1400D9870 (KeClockInterruptNotify.c)
 *     PoExecutePerfCheck @ 0x1400DD360 (PoExecutePerfCheck.c)
 *     EtwpSwitchBuffer @ 0x1400ED3E0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400ED78C (EtwpPrepareDirtyBuffer.c)
 *     ExpTimeRefreshCallback @ 0x140112170 (ExpTimeRefreshCallback.c)
 *     KeMaskInterrupt @ 0x1401240A0 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x14012F6DC (PpmPerfQueueAction.c)
 *     IoProcessPassiveInterrupts @ 0x1401CD954 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x1401D5D20 (KiInsertSecondarySignalList.c)
 *     PpmPerfControlActionCallback @ 0x140204FA0 (PpmPerfControlActionCallback.c)
 *     EtwSendTraceBuffer @ 0x140225124 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x140229390 (EtwpQueueStackWalkDpc.c)
 *     ExpSvmFaultRoutine @ 0x14022F520 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x140230F08 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140230FA4 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1402312A0 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D8260 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3CDC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3D8C (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x140225B94 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // r10
  char v6; // r11
  bool v8; // r13
  bool v9; // r12
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rdi
  signed __int64 IsrDpcStats; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  signed __int16 v17; // ax
  signed __int16 v18; // tt
  __int64 v19; // rdx
  signed __int16 v20; // ax
  signed __int16 v21; // tt
  __int16 v22; // r8
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  unsigned __int16 v25; // tt
  struct _KPRCB *v26; // rax
  int v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+34h] [rbp-54h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v32; // [rsp+90h] [rbp+8h]
  __int64 v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v6 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v28 = 0;
  v9 = 0;
  v29 = 0;
  v32 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 < 0x280u )
  {
    LODWORD(v11) = CurrentPrcb->Number;
    v12 = (__int64)CurrentPrcb;
    v9 = v5 != (unsigned __int16)v11;
  }
  else
  {
    v11 = (unsigned int)v5 - 640;
    v12 = KiProcessorBlock[v11];
    if ( !v12 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v12 + 1608)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v12 + 1617));
  if ( *(_BYTE *)BugCheckParameter2 != 26 || (v13 = v12 + 11688, !*(_BYTE *)(v12 + 11752)) )
    v13 = v12 + 11648;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
      goto LABEL_15;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 16));
  }
  a2 = v33;
  v6 = 0;
  a3 = v34;
  a4 = v35;
LABEL_15:
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( (_DWORD)v11 != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    ++*(_DWORD *)(v13 + 24);
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v8 )
    {
      v29 = *(_DWORD *)(v13 + 24);
      v28 = *(_DWORD *)(v13 + 28);
    }
    v6 = 1;
    v32 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v15 = *(_QWORD *)v13;
      v16 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v16;
      *v16 = v15;
      *(_QWORD *)v13 = v16;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      **(_QWORD **)(v13 + 8) = BugCheckParameter2 + 8;
      *(_QWORD *)(v13 + 8) = BugCheckParameter2 + 8;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = v11;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v6 = v32;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  if ( v6 )
  {
    if ( v8 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v29,
        v28,
        v11,
        *(_BYTE *)(BugCheckParameter2 + 1));
    if ( v13 == v12 + 11688 )
    {
      _m_prefetchw((const void *)(v12 + 11758));
      v17 = *(_WORD *)(v12 + 11758);
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 11758), v17 | 2, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x2F) != 0 )
        goto LABEL_63;
      v19 = 4LL;
      goto LABEL_51;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 11736) )
    {
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( !*(_BYTE *)(BugCheckParameter2 + 1) && *(_DWORD *)(v12 + 11740) >= *(_DWORD *)(v12 + 11744) )
        {
LABEL_46:
          _m_prefetchw((const void *)(v12 + 11756));
          v20 = *(_WORD *)(v12 + 11756);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 11756), v20 | 0x10, v20);
          }
          while ( v21 != v20 );
          if ( (v20 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v12 + 1600) + 64LL) & *(_QWORD *)(v12 + 1608)) == 0LL )
            goto LABEL_63;
        }
      }
      else if ( (unsigned __int8)(*(_BYTE *)(BugCheckParameter2 + 1) - 2) > 1u )
      {
        goto LABEL_46;
      }
    }
    v19 = 2LL;
LABEL_51:
    v22 = 47;
    if ( (struct _KPRCB *)v12 == CurrentPrcb )
    {
      v22 = 41;
      LOWORD(v19) = v19 | 0x20;
    }
    _m_prefetchw((const void *)(v12 + 11756));
    v23 = *(_WORD *)(v12 + 11756);
    do
    {
      v24 = v23;
      BYTE1(v24) = BYTE1(v19) | HIBYTE(v23);
      v25 = v23;
      v23 = _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 11756), v19 | v23, v23);
    }
    while ( v25 != v23 );
    if ( ((unsigned __int16)v22 & v23) == 0 )
    {
      if ( (struct _KPRCB *)v12 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v24) = 2;
          HalRequestSoftwareInterrupt(v24);
        }
      }
      else if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v12 + 24) || *(_BYTE *)(v12 + 7) )
      {
        v26 = KeGetCurrentPrcb();
        LOBYTE(v19) = 2;
        ++v26->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt((unsigned int)v11, v19);
      }
    }
  }
LABEL_63:
  __writecr8(CurrentIrql);
  return v32;
}
