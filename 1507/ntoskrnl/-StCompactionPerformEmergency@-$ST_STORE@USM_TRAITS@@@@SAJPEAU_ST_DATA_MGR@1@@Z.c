/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140144058 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140147C9C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x14014BBEC (MmStoreDecommitVirtualMemory.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  _WORD *v1; // r14
  unsigned int v2; // ebx
  int v3; // r13d
  int v5; // ebp
  _WORD *v6; // r12
  __int64 v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v10; // rax
  int v11; // r8d

  v1 = *(_WORD **)(a1 + 472);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 136);
  v5 = 0;
  v6 = &v1[*(unsigned int *)(a1 + 208)];
  if ( v1 >= v6 )
    return v2;
  do
  {
    if ( (*v1 & 0x1FFF) != 0 && (*v1 & 0x1FFFu) <= (unsigned int)(v3 - 4096) >> 4 )
    {
      v7 = ((__int64)v1 - *(_QWORD *)(a1 + 472)) >> 1;
      if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), v7) )
        goto LABEL_5;
      v9 = (unsigned __int8)*(_DWORD *)(a1 + 128) ? 0 : v8 >> 13;
      if ( (_DWORD)v7 != *(_DWORD *)(16LL * v9 + a1 + 648) )
      {
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v7, 0LL, v7, 0) < 0 )
        {
          if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2) != 2 )
            break;
          v10 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v7, 0, 1);
          if ( !v10 || v10 == -1 )
          {
LABEL_5:
            v5 = 1;
            goto LABEL_16;
          }
          ST_STORE<SM_TRAITS>::StCompactRegions(a1, v10, v7, v10, v7, 0);
          ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v7, v11);
        }
        MmStoreDecommitVirtualMemory(
          ((16 * (*v1 & 0x1FFF) + 4095) & 0xFFFFF000)
        + (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 152) + 4680LL) + 8LL * (unsigned int)v7) & 0x7FFFFFFFFFFF0000LL),
          v3 - ((16 * (*v1 & 0x1FFF) + 4095) & 0xFFFFF000));
      }
    }
LABEL_16:
    ++v1;
  }
  while ( v1 < v6 );
  if ( v5 )
    return (unsigned int)-1073741267;
  return v2;
}
