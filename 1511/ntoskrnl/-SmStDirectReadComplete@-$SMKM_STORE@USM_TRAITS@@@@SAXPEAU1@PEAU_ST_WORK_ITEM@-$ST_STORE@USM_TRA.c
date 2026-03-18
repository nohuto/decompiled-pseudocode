/*
 * XREFs of ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1401105D4
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011057C (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z @ 0x1402037D0 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(a1, a1, a2, &v3);
}
