/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80
 * Callers:
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400F6B34 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1402066C0 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1401113F8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140111484 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x1402073F4 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned int v9; // ecx
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = 2LL * a2;
  v4 = a3;
  v5 = a2;
  if ( a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(a1 + 472);
  v8 = *(_WORD *)(v11 + 2LL * a3) & 0x1FFF;
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
  {
    if ( a3 == *(_DWORD *)(a1 + 16LL * a2 + 648) )
    {
      v7 = *(_QWORD *)(a1 + 16LL * a2 + 656);
    }
    else
    {
      v12 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0LL);
      v7 = v12;
      if ( !v12 )
        return 3221225514LL;
      if ( v12 == -1 )
        return 3221226029LL;
      v8 = *(_WORD *)(v11 + 2 * v4) & 0x1FFF;
    }
LABEL_17:
    if ( v8 )
    {
      result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v7, v4, v7, v4, 0);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_3;
  }
  result = ST_STORE<SM_TRAITS>::StStagingRegionMap(a1, a3, &v13);
  if ( (int)result < 0 )
    return result;
  v8 = *(_WORD *)(v11 + 2 * v4) & 0x1FFF;
  if ( v8 >= *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1 )
    return 3221225599LL;
  if ( (*(_WORD *)(v11 + 2 * v4) & 0x1FFF) != 0 )
  {
LABEL_31:
    v7 = v13;
    goto LABEL_17;
  }
  if ( (_DWORD)v4 != *(_DWORD *)(a1 + 8 * v3 + 648) )
  {
    ++*(_DWORD *)(a1 + 8 * v5 + 1088);
    goto LABEL_31;
  }
  v7 = v13;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 8 * v3 + 648);
  if ( (_DWORD)v4 != v9 && v9 != -1 )
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v9);
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * *(unsigned int *)(a1 + 8 * v3 + 648)) & 0x1FFF) == 0 )
      ST_STORE<SM_TRAITS>::StReleaseRegion(a1);
  }
  *(_DWORD *)(a1 + 8 * v3 + 648) = v4;
  *(_DWORD *)(a1 + 8 * v3 + 652) = v8;
  *(_QWORD *)(a1 + 8 * v3 + 656) = v7;
  if ( (_DWORD)v4 != -1 && !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1168), 4LL, 5000LL, 4294967294LL);
  return 0LL;
}
