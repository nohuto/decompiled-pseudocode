/*
 * XREFs of InitializeSListHead @ 0x140002CB0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400023E8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140002998 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140002AE4 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140111194 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140148AB4 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC4F8 (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x1403C838C (PfTAccessTracingInitialize.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1403D5408 (KiInitPrcb.c)
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14054F6D0 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14054F834 (MiInitializeNuma.c)
 *     EtwpInitializeStackTracing @ 0x140553288 (EtwpInitializeStackTracing.c)
 *     CmpInitCallbacks @ 0x14055BE40 (CmpInitCallbacks.c)
 *     WdipSemInitializeGlobalState @ 0x14056654C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x14057208C (PfFbBufferListInitialize.c)
 *     EtwpInitializeStackLookasideList @ 0x140581BB8 (EtwpInitializeStackLookasideList.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     RtlStdInitializeStackDatabase @ 0x140687A08 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14069BEE0 (WdipSemFreePool.c)
 *     EtwpEnableStackCaching @ 0x1406A9B1C (EtwpEnableStackCaching.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140710410 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140710A6C (VfPoolInitPhase1.c)
 *     MiInitializeKernelStacks @ 0x14078E3DC (MiInitializeKernelStacks.c)
 *     MiInitializeDecayPfns @ 0x14078E618 (MiInitializeDecayPfns.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
