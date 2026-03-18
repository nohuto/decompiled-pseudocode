/*
 * XREFs of ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1402066C0
 * Callers:
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140203A80 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140206B9C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14020639C (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140206F30 (-StRegionFindRepurpose@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402072C0 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionRemove(__int64 a1, _DWORD *a2)
{
  _WORD *Repurpose; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8

  Repurpose = (_WORD *)ST_STORE<SM_TRAITS>::StRegionFindRepurpose(a1, (unsigned int)*a2);
  if ( !Repurpose )
    return 3221226021LL;
  v6 = ((__int64)Repurpose - *(_QWORD *)(a1 + 472)) >> 1;
  if ( (*Repurpose & 0x1FFF) == 0 )
    goto LABEL_20;
  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    return 3221226021LL;
  result = ST_STORE<SM_TRAITS>::StDmRegionEvict(a1, a1 + 392, v6, v5, *(_DWORD *)(a1 + 160) + 1);
  if ( (int)result >= 0 )
  {
LABEL_20:
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
      v8 = 0;
    else
      v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2LL * (unsigned int)v6) >> 13;
    if ( (_DWORD)v6 != *(_DWORD *)(a1 + 16LL * v8 + 648) )
      v8 = 8;
    if ( v8 != 8 )
      ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v8, 0xFFFFFFFF);
    v9 = ST_STORE<SM_TRAITS>::StStagingRegionFind(a1, (unsigned int)v6);
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
    v11 = *(_QWORD *)(a1 + 200);
    *a2 = v6;
    *(_BYTE *)(((unsigned __int64)(unsigned int)v6 >> 3) + v11) &= ~(1 << (v6 & 7));
    --*(_DWORD *)(a1 + 208);
    return 0LL;
  }
  return result;
}
