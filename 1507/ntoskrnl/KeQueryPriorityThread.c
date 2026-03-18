/*
 * XREFs of KeQueryPriorityThread @ 0x1400D5D70
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400D48F4 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400D59B4 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x1401326CC (PoNotifyMediaBuffering.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401458E0 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404F58F0 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 *     VerifierKeQueryPriorityThread @ 0x1407421B4 (VerifierKeQueryPriorityThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140742C34 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     <none>
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  else
    return Thread->Priority;
}
