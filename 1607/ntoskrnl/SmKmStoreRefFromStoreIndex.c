/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x14000321C
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140002D30 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140002E5C (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDereference @ 0x140002F88 (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140002FA4 (SmKmStoreReference.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003000 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreReferenceEx @ 0x1400031E4 (SmKmStoreReferenceEx.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14011785C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A0F4 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011D85C (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmpProcessQueryStoreStats @ 0x140135264 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E31A8 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1403E3434 (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x1403E3548 (SmpKeyedStoreCreate.c)
 *     SmKmStoreDelete @ 0x1403E4174 (SmKmStoreDelete.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     SmStoreCompressionStop @ 0x14054BCFC (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140696EEC (SmProcessSystemStoreTrimRequest.c)
 *     SmKmGetStoreList @ 0x1406980B4 (SmKmGetStoreList.c)
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
