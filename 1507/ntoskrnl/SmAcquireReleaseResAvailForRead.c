/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x140140004
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14014F32C (MmStoreChargeResidentAvailableForRead.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // ecx

  if ( a3 )
  {
    if ( qword_140352D20 == a1 )
    {
      _InterlockedExchange64(&qword_140352D20, 0LL);
    }
    else
    {
      v5 = a2 + 48;
      MiReturnResidentAvailable(a2 + 48);
      _InterlockedExchangeAdd64(&qword_14034FB10, v5);
    }
    return 1;
  }
  else
  {
    v6 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v6 )
    {
      if ( qword_140352D20 )
        return 0;
      v6 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_140352D20, a1, 0LL) )
        return 0;
    }
  }
  return v6;
}
