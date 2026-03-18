/*
 * XREFs of KeSetActualBasePriorityThread @ 0x140009C20
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140009AEC (IoApplyPriorityInfoThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400117B0 (MiStoreUpdateMemoryConditions.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400D48F4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401458E0 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     PfpServiceMainThreadUnboost @ 0x140148AD0 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x14014C308 (PfpServiceMainThreadBoost.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 *     PopCreatePowerThread @ 0x140159900 (PopCreatePowerThread.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x140165A28 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     PopFxEmergencyWorker @ 0x14017045C (PopFxEmergencyWorker.c)
 *     MiFlushAllHintedStorePages @ 0x14022179C (MiFlushAllHintedStorePages.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405BCBA4 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  bool v6; // r14
  unsigned int v7; // ebx
  bool v8; // zf
  char v9; // al
  unsigned int v10; // ebp
  struct _KPRCB *v11; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  char v14; // al
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  char v20; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // r10
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE *v31; // rcx
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+68h] [rbp+10h] BYREF

  v33 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = KiAbEnabled == 0;
  v9 = *(_BYTE *)(a1 + 563);
  v10 = v9;
  *(_BYTE *)(a1 + 645) = 0;
  if ( !v8 )
  {
    v11 = KeGetCurrentPrcb();
    if ( (char)v33 < v9 )
    {
      if ( *(_BYTE *)(a1 + 1419) )
      {
        v12 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
        if ( *(_QWORD *)(a1 + 1384) == 1LL )
        {
          p_AbSelfIoBoostsList = &v11->AbSelfIoBoostsList;
          if ( v11 != (struct _KPRCB *)-25648LL )
          {
            v12->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v12;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
            KiAbQueueAutoBoostDpc();
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v33;
  v14 = *(_BYTE *)(a1 + 564);
  if ( v14 )
  {
    if ( (v14 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1420) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v33 != *(char *)(a1 + 195) )
  {
    if ( !v6 || CurrentPrcb->NestingLevel )
    {
      v18 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v15 = 3LL;
      v16 = __rdtsc();
      v17 = v16 - CurrentPrcb->StartCycles;
      v18 = v17 + *(_QWORD *)(a1 + 72);
      v19 = v17 + *(unsigned int *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v18;
      CurrentPrcb->StartCycles = v16;
      v20 = *(_BYTE *)(a1 + 2);
      if ( v19 > 0xFFFFFFFF )
        LODWORD(v19) = -1;
      *(_DWORD *)(a1 + 80) = v19;
      if ( (v20 & 0x3E) != 0 )
      {
        if ( (v20 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                     - CurrentPrcb->TaggedCyclesStart;
          v20 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v20 & 0x3E) != 0 )
        {
          if ( (v20 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(a1 + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v23 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v23 = CurrentFrequency / 0x19;
              v24 = (unsigned __int64 *)(v22 + 8 * (CurrentPrcb->PowerState.Class + 2 * v23));
              v16 = v17 + *v24;
              *v24 = v16;
            }
            v20 &= ~0x20u;
          }
          if ( (v20 & 0x3E) != 0 )
          {
            v16 = *(_QWORD *)(a1 + 104);
            if ( v16 )
            {
              for ( v16 += CurrentPrcb->ScbOffset; v16; v16 = *(_QWORD *)(v16 + 392) )
                *(_QWORD *)v16 += v17;
            }
            if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
            {
              v16 = *(_QWORD *)(a1 + 576);
              if ( (v16 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v17;
            }
            if ( *(_QWORD *)(a1 + 360) )
              KiEndCounterAccumulation(a1);
          }
        }
      }
      v25 = __rdtsc();
      CurrentPrcb->CycleTime += v25 - CurrentPrcb->StartCycles;
      if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
      {
        v26 = PpmPerfGetCurrentFrequency(CurrentPrcb);
        if ( v26 / 0x19 < 3 )
          v15 = v26 / 0x19;
        v28 = &CurrentPrcb->Cycles[v15][CurrentPrcb->PowerState.Class];
        v16 = v27 + *v28;
        *v28 = v16;
      }
      CurrentPrcb->StartCycles = v25;
      if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v25;
      if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(a1, 0LL);
      v8 = CurrentPrcb->InterruptRequest == 0;
      CurrentPrcb->NestingLevel = 0;
      if ( !v8 )
      {
        LOBYTE(v16) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(v16);
      }
      _enable();
    }
    v29 = v18 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
    v30 = v33;
    *(_QWORD *)(a1 + 32) = v29;
    KiSetPriorityThread(a1, &v32, v30);
  }
  v31 = *(_BYTE **)(a1 + 232);
  if ( v31 && (*v31 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v31, a1);
  else
    *(_QWORD *)(a1 + 64) = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v32, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v10, v33, (__int64)&v33);
  return v10;
}
