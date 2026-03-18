/*
 * XREFs of ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140255C60
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140142038 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140255040 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14025653C (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpCurrentRegionWrite(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r8
  int v4; // ecx
  unsigned int v5; // edi
  __int64 result; // rax
  _DWORD *i; // rdx

  v1 = *(_QWORD *)(a1 + 472);
  v3 = *(unsigned int *)(a1 + 648);
  v4 = *(_DWORD *)(a1 + 168);
  v5 = *(_WORD *)(v1 + 2 * v3) & 0x1FFF;
  if ( v5 >= (unsigned int)(3 * v4) >> 2 || v5 >= v4 - *(_DWORD *)(a1 + 172) + 1 )
  {
    for ( i = (_DWORD *)(a1 + 504); *i != (_DWORD)v3; i += 6 )
      ;
    return ST_STORE<SM_TRAITS>::StStagingRegionIssueIo(a1);
  }
  else
  {
    result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, *(_QWORD *)(a1 + 656), v3, *(_QWORD *)(a1 + 656), v3, 0);
    if ( (int)result >= 0 )
      *(_DWORD *)(a1 + 652) = v5;
  }
  return result;
}
