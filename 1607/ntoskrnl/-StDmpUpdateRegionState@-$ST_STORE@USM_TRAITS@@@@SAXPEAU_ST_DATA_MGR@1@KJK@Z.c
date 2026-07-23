/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14011AAF4 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011CE24 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // rbx
  unsigned __int16 v8; // r8
  __int64 result; // rax
  _DWORD *v10; // r10

  v4 = *(_QWORD *)(a1 + 1016);
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = *(_WORD *)(v4 + 2LL * (unsigned int)a2);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    result = 0LL;
  else
    result = v8 >> 13;
  *(_WORD *)(v4 + 2LL * (unsigned int)a2) = v5 + v8;
  v10 = (_DWORD *)(a1 + 16 * (result + 76));
  *(_DWORD *)(a1 + 8 * result + 1796) += v5;
  if ( *v10 != (_DWORD)a2 )
    result = ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
               a1,
               a2,
               v8 & 0x1FFF,
               *(_WORD *)(v4 + 2LL * (unsigned int)a2) & 0x1FFF);
  if ( v5 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)a2 != *v10 && !a4 )
      return ST_STORE<SM_TRAITS>::StReleaseRegion(a1, a2);
  }
  else if ( (_DWORD)a2 == *v10 )
  {
    v10[1] += v5;
  }
  return result;
}
