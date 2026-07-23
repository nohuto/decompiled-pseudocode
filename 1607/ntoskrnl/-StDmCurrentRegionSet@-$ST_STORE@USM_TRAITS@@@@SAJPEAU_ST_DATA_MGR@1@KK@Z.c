/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700
 * Callers:
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400046B4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140118E04 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140115974 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011CE24 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14011FBA4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v11; // rax

  v3 = a3;
  v5 = (unsigned int *)(a1 + 16 * (a2 + 76LL));
  v6 = *v5;
  if ( a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
LABEL_3:
    *v5 = -1;
    if ( (_DWORD)v3 != (_DWORD)v6 && (_DWORD)v6 != -1 )
    {
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v6) & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
          a1,
          (unsigned int)v6,
          0LL,
          *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v6) & 0x1FFF);
      else
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
    }
    if ( (_DWORD)v3 != -1 )
    {
      if ( v8 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(a1, (unsigned int)v3, v8, 0LL);
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1872), 3LL, 5000LL, 4294967294LL);
    }
    *v5 = v3;
    result = 0LL;
    v5[1] = v8;
    *((_QWORD *)v5 + 1) = v7;
    return result;
  }
  v10 = *(_QWORD *)(a1 + 1016);
  v11 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0LL);
  v7 = v11;
  if ( !v11 )
    return 3221225514LL;
  if ( v11 == -1 )
    return 3221226029LL;
  v8 = *(_WORD *)(v10 + 2 * v3) & 0x1FFF;
  if ( (*(_WORD *)(v10 + 2 * v3) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v11, v3, v11, v3, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
