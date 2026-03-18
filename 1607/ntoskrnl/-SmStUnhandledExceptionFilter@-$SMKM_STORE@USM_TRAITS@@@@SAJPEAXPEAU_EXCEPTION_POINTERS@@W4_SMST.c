/*
 * XREFs of ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14021D4F8
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140002D18 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011E070 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14011E1D0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011E4F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_S.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnhandledExceptionFilter(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        int a3)
{
  if ( BugCheckParameter2 )
    KeBugCheckEx(0x154u, BugCheckParameter1, BugCheckParameter2, a3, 0LL);
  return 0LL;
}
