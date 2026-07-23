/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x14011E50C
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140117558 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14012F2F0 (MmStoreChargeResidentAvailableForRead.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ecx

  if ( a3 )
  {
    if ( qword_1403BF140 == a1 )
      _InterlockedExchange64(&qword_1403BF140, 0LL);
    else
      MiReturnResidentAvailable(a2 + 48);
    return 1;
  }
  else
  {
    v5 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v5 )
    {
      if ( qword_1403BF140 )
        return 0;
      v5 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_1403BF140, a1, 0LL) )
        return 0;
    }
  }
  return v5;
}
