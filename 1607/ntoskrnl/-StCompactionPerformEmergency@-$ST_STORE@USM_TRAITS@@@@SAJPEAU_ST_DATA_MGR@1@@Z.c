/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14011FBA4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1401206A0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x140125E38 (MmStoreDecommitVirtualMemory.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // r13d
  unsigned int v2; // ebx
  int v3; // ebp
  _WORD *v5; // r14
  _WORD *v6; // r12
  __int64 v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r8

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v5 = *(_WORD **)(a1 + 1016);
  v6 = &v5[*(unsigned int *)(a1 + 856)];
  if ( v5 >= v6 )
    return v2;
  do
  {
    if ( (*v5 & 0x1FFF) != 0 && (*v5 & 0x1FFFu) <= (unsigned int)(v1 - 4096) >> 4 )
    {
      v7 = ((__int64)v5 - *(_QWORD *)(a1 + 1016)) >> 1;
      if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v7) )
        goto LABEL_5;
      v9 = (unsigned __int8)*(_DWORD *)(a1 + 776) ? 0 : v8 >> 13;
      if ( (_DWORD)v7 != *(_DWORD *)(16 * (v9 + 76LL) + a1) )
      {
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v7, 0LL, v7, 0) < 0 )
        {
          if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2) != 2 )
            break;
          v10 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v7, 0, 1);
          if ( !v10 || v10 == -1 )
          {
LABEL_5:
            v3 = 1;
            goto LABEL_16;
          }
          ST_STORE<SM_TRAITS>::StCompactRegions(a1, v10, v7, v10, v7, 0);
          ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v7, v11);
        }
        MmStoreDecommitVirtualMemory(
          ((16 * (*v5 & 0x1FFF) + 4095) & 0xFFFFF000)
        + (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6056LL) + 8LL * (unsigned int)v7) & 0x7FFFFFFFFFFF0000LL),
          v1 - ((16 * (*v5 & 0x1FFF) + 4095) & 0xFFFFF000));
      }
    }
LABEL_16:
    ++v5;
  }
  while ( v5 < v6 );
  if ( v3 )
    return (unsigned int)-1073741267;
  return v2;
}
