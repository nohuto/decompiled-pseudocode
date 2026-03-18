/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140111764
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140205848 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140111868 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140111894 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     MmStoreDecommitVirtualMemory @ 0x140116440 (MmStoreDecommitVirtualMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 result; // rax
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a1 + 4672);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * a2);
  v8 = *v7 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v8 )
    return 1075380276LL;
  if ( (*(_WORD *)v7 & 0x4000) != 0 )
    *(_WORD *)v7 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v7, a3 & 1);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v8, v4);
  if ( *(__int16 *)v7 < 0 )
    return 3221225646LL;
  v9 = *v7;
  *v7 = 0LL;
  memset(v11, 0, 0x28uLL);
  v11[0] = v8;
  v11[1] = v4;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3, (__int64)v11, (a3 & 1) != 0 ? 3 : 0);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v7 = v9;
  return result;
}
