/*
 * XREFs of ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140258EC4
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140258FE4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v4 = *(_DWORD *)(a4 + 4480) & 0x1F;
  LODWORD(v6) = *a2;
  return SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(SmGlobals, &v6, a3, v4);
}
