/*
 * XREFs of SmFpAllocate @ 0x14013FA1C
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013F8E0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140252094 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     SmKmAllocateMdlForLock @ 0x14014F364 (SmKmAllocateMdlForLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x140258E30 (SmpFpWaitForResource.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmFpAllocate(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  PVOID MdlForLock; // rax
  PVOID v10; // rbx
  void *v12; // rax
  ULONG Tag; // [rsp+58h] [rbp+10h]

  if ( a2 >= 4 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v10 = *(PVOID *)(a4 + 24);
LABEL_5:
      if ( v10 )
        return (__int64)v10;
      goto LABEL_15;
    }
    MdlForLock = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_4:
    v10 = MdlForLock;
    goto LABEL_5;
  }
  if ( a2 == 2 )
  {
    MdlForLock = (PVOID)SmKmAllocateMdlForLock((unsigned __int64)*(unsigned __int16 *)(a1 + 84) << 12);
    goto LABEL_4;
  }
  if ( a2 != 3 )
  {
    Tag = 810708339;
    HIBYTE(Tag) = a2 + 48;
    MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(a1 + 2LL * a2 + 80), Tag);
    goto LABEL_4;
  }
  if ( (unsigned int)SmAcquireReleaseCharges((unsigned __int64)*(unsigned __int16 *)(a1 + 86) << 12, 1, 0LL) )
    return -8LL;
  v10 = 0LL;
LABEL_15:
  if ( a5 )
  {
    v12 = (void *)SmpFpWaitForResource(a1, (unsigned int)a2, a3);
    v10 = v12;
    if ( a2 >= 4 )
      MmMapLockedPagesWithReservedMapping(v12, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return (__int64)v10;
}
