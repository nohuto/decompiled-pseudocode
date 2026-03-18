/*
 * XREFs of KiInsertQueueDpc @ 0x1400A48A0
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     PopQueueTargetDpc @ 0x140013A6C (PopQueueTargetDpc.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     PoExecutePerfCheck @ 0x1400A3DE0 (PoExecutePerfCheck.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     PpmPerfAction @ 0x1400A6090 (PpmPerfAction.c)
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     PpmCheckSnapAllUtility @ 0x1400A6B90 (PpmCheckSnapAllUtility.c)
 *     KiGenericCallDpcWorker @ 0x1400D61D0 (KiGenericCallDpcWorker.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     KiScheduleNextForegroundBoost @ 0x1400EC79C (KiScheduleNextForegroundBoost.c)
 *     KiForegroundTimerCallback @ 0x1400F4B7C (KiForegroundTimerCallback.c)
 *     MmSetAccessLogging @ 0x140100EDC (MmSetAccessLogging.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     KiInitializeUserApc @ 0x14011E7C8 (KiInitializeUserApc.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x140157980 (PpmPerfQueueAction.c)
 *     ExpTimeRefreshCallback @ 0x14015DB84 (ExpTimeRefreshCallback.c)
 *     ExQueueDebuggerWorker @ 0x14016CFF0 (ExQueueDebuggerWorker.c)
 *     IoProcessPassiveInterrupts @ 0x1401FAC30 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x1402037DC (KiInsertSecondarySignalList.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 *     PpmPerfControlActionCallback @ 0x14023A794 (PpmPerfControlActionCallback.c)
 *     EtwSendTraceBuffer @ 0x14025C988 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14026015C (EtwpQueueStackWalkDpc.c)
 *     ExpSvmFaultRoutine @ 0x1402655B0 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1402673A0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x14026743C (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140267F68 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14025CF48 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // ax
  char v7; // r9
  bool v9; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int Number; // r15d
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
  int v28; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+34h] [rbp-44h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v32; // [rsp+80h] [rbp+8h]
  __int64 v33; // [rsp+88h] [rbp+10h]
  __int64 v34; // [rsp+90h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  v5 = *(_WORD *)(a1 + 2);
  v7 = 0;
  v9 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v28 = 0;
  v29 = 0;
  v32 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 < 0x280u )
  {
    Number = CurrentPrcb->Number;
    if ( v5 != (_WORD)Number )
      *(_WORD *)(a1 + 2) = Number;
    v12 = (__int64)CurrentPrcb;
  }
  else
  {
    Number = v5 - 640;
    v12 = KiProcessorBlock[Number];
  }
  if ( (*(_QWORD *)(a1 + 16) & *(_QWORD *)(v12 + 1608)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), *(unsigned __int8 *)(v12 + 1617));
  if ( *(_BYTE *)a1 != 26 || (v13 = v12 + 11688, !*(_BYTE *)(v12 + 11752)) )
    v13 = v12 + 11648;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
      goto LABEL_16;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 16));
  }
  a2 = v33;
  v7 = 0;
  a3 = v34;
LABEL_16:
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), IsrDpcStats, 0LL) )
  {
    ++*(_DWORD *)(v13 + 24);
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(a1 + 40) = a2;
    *(_QWORD *)(a1 + 48) = a3;
    if ( v9 )
    {
      v29 = *(_DWORD *)(v13 + 24);
      v28 = *(_DWORD *)(v13 + 28);
    }
    v7 = 1;
    v32 = 1;
    if ( *(_BYTE *)(a1 + 1) == 2 )
    {
      v15 = *(_QWORD *)v13;
      v16 = (_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v16;
      *v16 = v15;
      *(_QWORD *)v13 = v16;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      **(_QWORD **)(v13 + 8) = a1 + 8;
      *(_QWORD *)(v13 + 8) = a1 + 8;
    }
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v7 = v32;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  if ( v7 )
  {
    if ( v9 )
      EtwTraceDpcEnqueueEvent(
        -203591049 * (KiWaitNever ^ __ROR8__(*(_QWORD *)(a1 + 24) ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever)),
        *(_QWORD *)(a1 + 24),
        v29,
        v28,
        Number,
        *(_BYTE *)(a1 + 1));
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
        goto LABEL_62;
      v19 = 4LL;
      goto LABEL_50;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 11736) )
    {
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( !*(_BYTE *)(a1 + 1) && *(_DWORD *)(v12 + 11740) >= *(_DWORD *)(v12 + 11744) )
        {
LABEL_45:
          _m_prefetchw((const void *)(v12 + 11756));
          v20 = *(_WORD *)(v12 + 11756);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 11756), v20 | 0x10, v20);
          }
          while ( v21 != v20 );
          if ( (v20 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v12 + 1600) + 64LL) & *(_QWORD *)(v12 + 1608)) == 0LL )
            goto LABEL_62;
        }
      }
      else if ( (unsigned __int8)(*(_BYTE *)(a1 + 1) - 2) > 1u )
      {
        goto LABEL_45;
      }
    }
    v19 = 2LL;
LABEL_50:
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
        HalSendSoftwareInterrupt(Number, v19);
      }
    }
  }
LABEL_62:
  __writecr8(CurrentIrql);
  return v32;
}
