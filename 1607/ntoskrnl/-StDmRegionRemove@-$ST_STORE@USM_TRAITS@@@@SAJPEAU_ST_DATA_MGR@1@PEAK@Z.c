/*
 * XREFs of ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C
 * Callers:
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021D430 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F4D0 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14021E884 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021ECFC (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14021F8C4 (-StRegionFindRepurpose@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14021FA20 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionRemove(struct NP_CONTEXT::NP_CTX *a1, _DWORD *a2)
{
  _WORD *Repurpose; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned int IsCurrentRegion; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8

  Repurpose = (_WORD *)ST_STORE<SM_TRAITS>::StRegionFindRepurpose(a1, (unsigned int)*a2);
  if ( !Repurpose )
    return 3221226021LL;
  v7 = ((__int64)Repurpose - *((_QWORD *)a1 + 127)) >> 1;
  if ( (*Repurpose & 0x1FFF) == 0 )
    goto LABEL_6;
  if ( (*((_DWORD *)a1 + 208) & 2) != 0 )
    return 3221226021LL;
  result = ST_STORE<SM_TRAITS>::StDmRegionEvict(a1, (__int64)a1 + 936, v7, v5, *((_DWORD *)a1 + 202) + 1);
  if ( (int)result >= 0 )
  {
LABEL_6:
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion((__int64)a1, v7);
    if ( IsCurrentRegion != 8 )
      ST_STORE<SM_TRAITS>::StDmCurrentRegionSet((__int64)a1, IsCurrentRegion, 0xFFFFFFFF);
    v9 = ST_STORE<SM_TRAITS>::StStagingRegionFind(a1, (unsigned int)v7);
    v10 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(v10 + 16), 0);
      }
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_DWORD *)v10 = -1;
    }
    v11 = *((_QWORD *)a1 + 106);
    *a2 = v7;
    *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + v11) &= ~(1 << (v7 & 7));
    --*((_DWORD *)a1 + 214);
    return 0LL;
  }
  return result;
}
