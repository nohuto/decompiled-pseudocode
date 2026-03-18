/*
 * XREFs of SmFpFree @ 0x14013F098
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013EA5C (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14013F004 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013F8E0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140144058 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140257B24 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     SmKmFreeMdlForLock @ 0x14014B838 (SmKmFreeMdlForLock.c)
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x140258D2C (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, __int64 a2, __int64 a3, struct _MDL *a4)
{
  void *MappedSystemVa; // rbx
  int v5; // esi
  struct _MDL *v7; // r14

  MappedSystemVa = a4;
  v5 = a2;
  if ( (int)a2 < 4 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = a4;
    MappedSystemVa = a4->MappedSystemVa;
  }
  if ( *(_QWORD *)(a1 + 96) == a3 && (unsigned int)SmpFpReleaseResource(a1, a2, MappedSystemVa) )
  {
    if ( v5 >= 4 )
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 77) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 96), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      SmKmFreeMdlForLock(MappedSystemVa);
    }
    else if ( v5 == 3 )
    {
      SmAcquireReleaseCharges((unsigned __int64)*(unsigned __int16 *)(a1 + 86) << 12, 1, 1LL);
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
