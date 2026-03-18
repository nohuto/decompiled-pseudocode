/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1400D2840
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002C50 (SmKmStoreHelperWorker.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140003134 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003E08 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoApplyPriorityInfoThread @ 0x140070BA4 (IoApplyPriorityInfoThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BF048 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140113248 (MiWakeModifiedPageWriter.c)
 *     PfpServiceMainThreadUnboost @ 0x1401145B0 (PfpServiceMainThreadUnboost.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A324 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401211D4 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     PfpServiceMainThreadBoost @ 0x1401265B4 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x140130AE0 (PopCreatePowerThread.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x14013D554 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x14013F190 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     PopFxEmergencyWorker @ 0x14014BE58 (PopFxEmergencyWorker.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE714 (MiFlushAllHintedStorePages.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566108 (ExpWorkerThreadBalanceManager.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14057A718 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400A7AB0 (KiPriQueueThreadPriorityChanged.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D26C0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D37A0 (KiStartThreadCycleAccumulation.c)
 *     EtwTracePriority @ 0x140226010 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  bool v5; // si
  unsigned int v6; // eax
  unsigned int v7; // r14d
  struct _KPRCB *v8; // rcx
  char v9; // al
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rcx
  struct _SINGLE_LIST_ENTRY *v15; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  v5 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v7 = v6;
  v8 = KeGetCurrentPrcb();
  if ( (char)v18 < (char)v6 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v15 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_AbSelfIoBoostsList = &v8->AbSelfIoBoostsList;
        if ( v8 != (struct _KPRCB *)-25776LL )
        {
          v15->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v15;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc((__int64)v8);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v18;
  v9 = *(_BYTE *)(a1 + 564);
  if ( v9 )
  {
    if ( (v9 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v18 != *(char *)(a1 + 195) )
  {
    if ( !v5 || CurrentPrcb->NestingLevel )
    {
      v10 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      v10 = KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      KiStartThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
      _enable();
    }
    v11 = v10 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
    v12 = v18;
    *(_QWORD *)(a1 + 32) = v11;
    KiSetPriorityThread(a1, &v19, v12);
  }
  v13 = *(volatile signed __int32 **)(a1 + 232);
  if ( v13 && (*(_BYTE *)v13 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v13, a1);
  else
    *(_QWORD *)(a1 + 64) = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v19, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v7, v18, (__int64)&v18);
  return v7;
}
