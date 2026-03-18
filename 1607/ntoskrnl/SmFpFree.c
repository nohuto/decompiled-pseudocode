/*
 * XREFs of SmFpFree @ 0x14011ADA8
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003E08 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011A2EC (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AA74 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011ABA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011AD70 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011B6E0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011CDD0 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011D85C (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14011E384 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011E4F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_S.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011E5E0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmUnlockMdl @ 0x14011E998 (SmKmUnlockMdl.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011E9F4 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14011F634 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011F6C0 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140220CB0 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003C90 (SmAcquireReleaseCharges.c)
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     SmKmFreeMdlForLock @ 0x140124930 (SmKmFreeMdlForLock.c)
 *     MmUnmapReservedMapping @ 0x1401E4198 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x14022149C (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, struct _MDL *a4)
{
  void *MappedSystemVa; // rbx
  struct _MDL *v7; // r14

  MappedSystemVa = a4;
  if ( a2 < 5 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = a4;
    MappedSystemVa = a4->MappedSystemVa;
  }
  if ( *(_QWORD *)(a1 + 104) == a3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 86) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      SmKmFreeMdlForLock(MappedSystemVa);
    }
    else if ( a2 == 3 )
    {
      SmAcquireReleaseCharges((unsigned __int64)*(unsigned __int16 *)(a1 + 94) << 12, 1, 1);
    }
    else
    {
      ExFreePoolWithTag(MappedSystemVa, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(MappedSystemVa, v7);
  }
}
