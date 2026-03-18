/*
 * XREFs of InitializeSListHead @ 0x140002B3C
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140002274 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140002824 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140002970 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140110C30 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140148544 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC614 (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x1403C838C (PfTAccessTracingInitialize.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1403D5408 (KiInitPrcb.c)
 *     MiInitializePartition @ 0x14054ECF0 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14054F190 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14054F2F4 (MiInitializeNuma.c)
 *     EtwpInitializeStackTracing @ 0x140552D48 (EtwpInitializeStackTracing.c)
 *     CmpInitCallbacks @ 0x14055B900 (CmpInitCallbacks.c)
 *     WdipSemInitializeGlobalState @ 0x14056600C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140571B4C (PfFbBufferListInitialize.c)
 *     EtwpInitializeStackLookasideList @ 0x14058170C (EtwpInitializeStackLookasideList.c)
 *     ObpInitStackAndObjectTables @ 0x140667D9C (ObpInitStackAndObjectTables.c)
 *     RtlStdInitializeStackDatabase @ 0x140687924 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14069BDFC (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x1406A99E4 (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407103E0 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140710A3C (VfPoolInitPhase1.c)
 *     MiInitializeKernelStacks @ 0x14078E3DC (MiInitializeKernelStacks.c)
 *     MiInitializeDecayPfns @ 0x14078E618 (MiInitializeDecayPfns.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
