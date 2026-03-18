/*
 * XREFs of InitializeSListHead @ 0x1400F8DC8
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F86AC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400F8AB0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x1400F8BFC (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140105AC0 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14013EA90 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401AFDE4 (HvlpSetupCachedHypercallPages.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PfTAccessTracingInitialize @ 0x1403A6C30 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1403A7C1C (KiInitPrcb.c)
 *     CmpInitCallbacks @ 0x14051CC68 (CmpInitCallbacks.c)
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140520684 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x140520784 (MiInitializeNuma.c)
 *     EtwpInitializeStackLookasideList @ 0x140524484 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeStackTracing @ 0x140525610 (EtwpInitializeStackTracing.c)
 *     WdipSemInitializeGlobalState @ 0x1405340C4 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140540AC4 (PfFbBufferListInitialize.c)
 *     ObpInitStackAndObjectTables @ 0x14062FCB0 (ObpInitStackAndObjectTables.c)
 *     RtlStdInitializeStackDatabase @ 0x140647FF8 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14065CC90 (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x140667B28 (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1406C4324 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1406C49B4 (VfPoolInitPhase1.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiInitializeKernelStacks @ 0x140762E08 (MiInitializeKernelStacks.c)
 *     MiInitializeDecayPfns @ 0x140767E90 (MiInitializeDecayPfns.c)
 *     MiInitializeBootDefaults @ 0x14076F498 (MiInitializeBootDefaults.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
