/*
 * XREFs of ?StStagingRegionReuse@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@@Z @ 0x140207564
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x1402072E0 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 */

unsigned int *__fastcall ST_STORE<SM_TRAITS>::StStagingRegionReuse(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 v3; // r14
  unsigned int v4; // esi
  __int64 v6; // rax
  __int16 v7; // cx

  v1 = (unsigned int *)(a1 + 504);
  v2 = a1 + 648;
  v3 = *(_QWORD *)(a1 + 472);
  v4 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1;
  while ( (unsigned __int64)v1 < v2 )
  {
    v6 = *v1;
    if ( (_DWORD)v6 != -1 )
    {
      v7 = *(_WORD *)(v3 + 2 * v6);
      if ( (v7 & 0xC000) == 0 )
      {
        if ( (v7 & 0x1FFFu) < v4 )
          return v1;
        ST_STORE<SM_TRAITS>::StStagingRegionIssueIo(a1, v1);
      }
    }
    v1 += 6;
  }
  return 0LL;
}
