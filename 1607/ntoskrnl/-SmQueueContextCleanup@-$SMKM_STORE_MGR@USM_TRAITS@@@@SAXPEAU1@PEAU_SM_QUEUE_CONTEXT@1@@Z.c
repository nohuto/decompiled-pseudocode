/*
 * XREFs of ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011A85C
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 * Callees:
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011B2E0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 *v5; // rdx
  __int64 result; // rax
  __int64 *v7; // r9

  v2 = a2[2];
  if ( v2 )
    result = SmFpFree(a1 + 1376, 5LL, -1LL, v2);
  while ( 1 )
  {
    v5 = (__int64 *)a2[1];
    if ( v5 == (__int64 *)a2 )
      break;
    v7 = (__int64 *)*a2;
    *a2 = *(_QWORD *)*a2 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v7 == v5 )
    {
      *a2 = 0LL;
      a2[1] = (unsigned __int64)a2;
    }
    else
    {
      *v5 = *v5 & 7 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    result = SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, v7, -1LL);
  }
  return result;
}
