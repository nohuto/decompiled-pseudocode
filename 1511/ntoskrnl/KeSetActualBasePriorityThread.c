/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14007D1E0
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 *     SmKmStoreHelperWorker @ 0x1400F71C0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoApplyPriorityInfoThread @ 0x1400FB734 (IoApplyPriorityInfoThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400FF69C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14011283C (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     PfpServiceMainThreadBoost @ 0x1401175A4 (PfpServiceMainThreadBoost.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 *     PfpServiceMainThreadUnboost @ 0x14011A3FC (PfpServiceMainThreadUnboost.c)
 *     PopCreatePowerThread @ 0x140125DF8 (PopCreatePowerThread.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x140131D18 (MiZeroLargePageThread.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     PopFxEmergencyWorker @ 0x140142838 (PopFxEmergencyWorker.c)
 *     MiFlushAllHintedStorePages @ 0x1401DCA38 (MiFlushAllHintedStorePages.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140545E4C (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  bool v7; // di
  bool v8; // zf
  char v9; // al
  unsigned int v10; // esi
  struct _KPRCB *v11; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  char v14; // al
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  char v18; // dl
  int v19; // r8d
  signed int v20; // esi
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rdx
  char v23; // r12
  signed int v24; // r15d
  struct _KPRCB *v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rax
  char v28; // r14
  _BYTE *ready; // rax
  struct _KPRCB *v30; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v32; // rcx
  bool v33; // al
  __int64 Number; // rcx
  struct _KPRCB *v35; // rax
  _BYTE *v36; // rcx
  struct _KPRCB *v37; // [rsp+30h] [rbp-9h] BYREF
  __int64 v38; // [rsp+38h] [rbp-1h] BYREF
  __int64 v39; // [rsp+40h] [rbp+7h]
  volatile signed __int64 *v40; // [rsp+48h] [rbp+Fh] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+67h]
  int v42; // [rsp+A8h] [rbp+6Fh] BYREF
  int v43; // [rsp+B0h] [rbp+77h] BYREF
  int v44; // [rsp+B8h] [rbp+7Fh]

  v42 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = (unsigned __int8)v38;
  v7 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v43, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = KiAbEnabled == 0;
  v9 = *(_BYTE *)(a1 + 563);
  v10 = v9;
  v41 = v9;
  *(_BYTE *)(a1 + 645) = 0;
  if ( !v8 )
  {
    v11 = KeGetCurrentPrcb();
    if ( (char)v42 < v9 )
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
            KiAbQueueAutoBoostDpc(v11);
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v42;
  v14 = *(_BYTE *)(a1 + 564);
  if ( v14 )
  {
    if ( (v14 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1420) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v42 != *(char *)(a1 + 195) )
  {
    if ( !v7 || CurrentPrcb->NestingLevel )
    {
      v15 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      v15 = KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
      _enable();
    }
    v16 = v15 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
    v17 = *(_DWORD *)(a1 + 1408);
    v18 = v42;
    *(_QWORD *)(a1 + 32) = v16;
    if ( v17 )
    {
      _BitScanReverse((unsigned int *)&v19, v17);
      if ( v18 < v19 )
        v18 = v19;
      v44 = v19;
    }
    v20 = v18;
    if ( *(char *)(a1 + 195) == v18 )
    {
LABEL_66:
      v10 = v41;
      goto LABEL_67;
    }
    v21 = KiAcquireThreadStateLock(a1, &v37, &v40);
    v22 = (unsigned int)*(char *)(a1 + 195);
    v23 = 0;
    v24 = *(char *)(a1 + 195);
    if ( v21 <= 3u )
    {
      switch ( v21 )
      {
        case 1u:
          v25 = v37;
          KiRemoveThreadFromAnyReadyQueue(v37, v40, a1, (unsigned int)v24);
          KiUpdateThreadPriority(0LL, a1, v20, 0);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v20, &v38);
          goto LABEL_51;
        case 2u:
          v25 = v37;
          v28 = v37->NextThread == 0LL;
          KiUpdateThreadPriority((__int64)v37, a1, v20, v28);
          if ( v20 < v24 && v28 )
          {
            v25 = v37;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              ready = (_BYTE *)KiSelectReadyThreadEx(v37, a1, 0);
              if ( ready )
              {
                KiUpdateThreadState((__int64)v25, ready, 3, 1);
                v23 = 1;
              }
            }
            else if ( v37->ReadySummary >> (v20 + 1) )
            {
              *(_BYTE *)(a1 + 112) |= 0x10u;
            }
          }
LABEL_51:
          v32 = *(_QWORD *)(a1 + 104);
          if ( !v32 )
            goto LABEL_54;
          while ( (*(_DWORD *)(v32 + 4) & 2) != 0 )
          {
            v32 = *(_QWORD *)(v32 + 80);
            if ( !v32 )
              goto LABEL_54;
          }
          if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 || *(char *)(a1 + 195) >= 16 )
          {
LABEL_54:
            v33 = 0;
            v22 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 24768);
            if ( v22 )
              v33 = (v22 & *(_QWORD *)(a1 + 576)) == v22;
          }
          else
          {
            v33 = 0;
          }
          if ( v33 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
          {
            _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
            v25 = v37;
          }
          if ( v25 )
            _InterlockedAnd64((volatile signed __int64 *)&v25->PrcbLock, 0LL);
          if ( v40 )
            _InterlockedAnd64(v40, 0LL);
          if ( v23 )
          {
            LODWORD(v22) = KeGetPcr()->Prcb.Number;
            Number = v37->Number;
            if ( (_DWORD)v22 != (_DWORD)Number )
            {
              v35 = KeGetCurrentPrcb();
              LOBYTE(v22) = 2;
              ++v35->SynchCounters.IpiSendSoftwareInterruptCount;
              HalSendSoftwareInterrupt(Number, v22);
            }
          }
          LOBYTE(CurrentIrql) = v39;
          goto LABEL_66;
        case 3u:
          v25 = v37;
          KiUpdateThreadPriority((__int64)v37, a1, v20, 1);
          if ( v20 < v24 )
          {
            v26 = (_BYTE *)KiSelectReadyThreadEx(v25, a1, 0);
            if ( v26 )
            {
              KiUpdateThreadState((__int64)v25, v26, 3, 1);
              v27 = v38;
              *(_BYTE *)(a1 + 388) = 7;
              *(_QWORD *)(a1 + 216) = v27;
              v38 = a1 + 216;
            }
          }
          goto LABEL_51;
      }
    }
    if ( KiAbEnabled )
    {
      v30 = KeGetCurrentPrcb();
      if ( (char)v20 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v22 = a1 + 1376;
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &v30->AbPropagateBoostsList;
            if ( v30 != (struct _KPRCB *)-25656LL )
            {
              *(_SINGLE_LIST_ENTRY *)v22 = (_SINGLE_LIST_ENTRY)p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = (struct _SINGLE_LIST_ENTRY *)v22;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
              KiAbQueueAutoBoostDpc(v30);
            }
          }
        }
      }
    }
    v25 = v37;
    *(_BYTE *)(a1 + 195) = v20;
    goto LABEL_51;
  }
LABEL_67:
  v36 = *(_BYTE **)(a1 + 232);
  if ( v36 && (*v36 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v36, a1);
  else
    *(_QWORD *)(a1 + 64) = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v38, (unsigned __int8)CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v10, v42, (__int64)&v42);
  return v10;
}
