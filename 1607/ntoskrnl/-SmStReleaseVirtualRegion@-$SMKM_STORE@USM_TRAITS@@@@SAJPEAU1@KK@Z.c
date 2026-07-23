/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140120598
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1401206A0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1401206CC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     MmStoreDecommitVirtualMemory @ 0x140125E38 (MmStoreDecommitVirtualMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 v5; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned __int8 v11; // r9
  __int64 result; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a3;
  v5 = *(unsigned int *)(a1 + 6048);
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 6056) + 8LL * a2);
  v9 = *v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v9 )
    return 1075380276LL;
  if ( (*(_WORD *)v8 & 0x4000) != 0 )
    *(_WORD *)v8 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v8, a3 & 1);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2, a3, a4) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v9, v5);
  if ( *(__int16 *)v8 < 0 )
    return 3221225646LL;
  v10 = *v8;
  *v8 = 0LL;
  memset(v13, 0, sizeof(v13));
  v11 = 8;
  *(_QWORD *)&v13[0] = v9;
  *((_QWORD *)&v13[0] + 1) = v5;
  if ( (v4 & 1) != 0 )
    v11 = 11;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3, v13, v11);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v8 = v10;
  return result;
}
