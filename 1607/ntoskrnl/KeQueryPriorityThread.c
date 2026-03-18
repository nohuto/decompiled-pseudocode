/*
 * XREFs of KeQueryPriorityThread @ 0x1400C73C0
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140003134 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C6770 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C71EC (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x14010D8D4 (PoNotifyMediaBuffering.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A0F4 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A324 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401211D4 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     PfSnPrefetchScenario @ 0x1403E5094 (PfSnPrefetchScenario.c)
 *     MiInSwapStore @ 0x1404F17D0 (MiInSwapStore.c)
 *     PfSnPrefetchSections @ 0x140506F14 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140507260 (PfSnPrefetchSectionsCleanup.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x14070D51C (ViPendingQueuePassiveLevelCompletion.c)
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
