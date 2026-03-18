/*
 * XREFs of InitializeSListHead @ 0x1400D9F4C
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D97D4 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400D9BD8 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x1400D9D50 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140137DDC (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14016C2EC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E7698 (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x1403EC0C0 (PfTAccessTracingInitialize.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     ExInitializeSystemLookasideList @ 0x1403F7CAC (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1403F7D4C (KiInitPrcb.c)
 *     EtwpInitializeStackTracing @ 0x140595A28 (EtwpInitializeStackTracing.c)
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140597028 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x140597144 (MiInitializeNuma.c)
 *     CmpInitCallbacks @ 0x1405A2A08 (CmpInitCallbacks.c)
 *     WdipSemInitializeGlobalState @ 0x1405AF3A0 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1405B678C (PfFbBufferListInitialize.c)
 *     EtwpInitializeStackLookasideList @ 0x1405C2C40 (EtwpInitializeStackLookasideList.c)
 *     ObpInitStackAndObjectTables @ 0x1406ADCDC (ObpInitStackAndObjectTables.c)
 *     RtlStdInitializeStackDatabase @ 0x1406CB0DC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1406DF538 (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x1406EAE54 (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140745BD8 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140746278 (VfPoolInitPhase1.c)
 *     MiInitializeKernelStacks @ 0x1407D3770 (MiInitializeKernelStacks.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 *     MiInitializeSystemPteTracker @ 0x1407E2C50 (MiInitializeSystemPteTracker.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
