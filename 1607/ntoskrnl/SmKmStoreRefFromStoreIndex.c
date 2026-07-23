/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x140003390
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140002EA4 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140002FD0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011DDCC (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmpProcessQueryStoreStats @ 0x1401357D4 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1403E4A60 (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     SmKmStoreDelete @ 0x1403E57A0 (SmKmStoreDelete.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     SmStoreCompressionStop @ 0x14054C23C (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140696FD0 (SmProcessSystemStoreTrimRequest.c)
 *     SmKmGetStoreList @ 0x140698198 (SmKmGetStoreList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreRefFromStoreIndex(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v3 )
    return v3 + 40LL * (v2 & 0x1F);
  else
    return 0LL;
}
