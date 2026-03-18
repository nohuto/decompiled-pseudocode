/*
 * XREFs of ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@KK@Z @ 0x140107B00 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140206F30 (-StRegionFindRepurpose@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StStagingRegionReuse@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@@Z @ 0x140207564 (-StStagingRegionReuse@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        int *a5)
{
  __int64 v5; // rdi
  int v9; // r8d
  int v10; // edx
  __int64 result; // rax
  unsigned __int16 *Repurpose; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx

  v5 = 2LL * a2;
  if ( *(_DWORD *)(a1 + 16LL * a2 + 648) != -1
    && (unsigned int)(*(_DWORD *)(a1 + 16LL * a2 + 652) + a3) <= *(_DWORD *)(a1 + 168) )
  {
LABEL_3:
    v9 = *(_DWORD *)(a1 + 8 * v5 + 652);
    v10 = *(_DWORD *)(a1 + 8 * v5 + 648);
    *a4 = *(_QWORD *)(a1 + 8 * v5 + 656) + (unsigned int)(16 * v9);
    *a5 = v9 | (v10 << *(_DWORD *)(a1 + 164));
    return 0LL;
  }
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, 0xFFFFFFFF);
  while ( 1 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 1160) & 3) != 3 )
      {
        v14 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v14 )
        {
          v15 = (*(unsigned __int8 *)(a1 + 184) >> 1) & 1;
          if ( v14 == 1 )
          {
            v16 = 4294967294LL;
            v17 = *(_BYTE *)(a1 + 128) != 0 ? 400 : 30;
            v18 = *(_BYTE *)(a1 + 1160) & 0xFC | 1;
          }
          else
          {
            v17 = 0LL;
            v18 = *(_BYTE *)(a1 + 1160) & 0xFC | 2;
            v16 = 0LL;
          }
          v19 = *(_QWORD *)(a1 + 1168);
          *(_BYTE *)(a1 + 1160) = v18;
          ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v19, v15, v17, v16);
        }
      }
      v13 = ST_STORE<SM_TRAITS>::StStagingRegionReuse(a1);
      if ( v13 )
      {
        LODWORD(v13) = *(_DWORD *)v13;
        goto LABEL_10;
      }
      v20 = *(_DWORD *)(a1 + 648);
      v21 = 0LL;
      if ( v20 != -1 )
        v21 = v20;
      Repurpose = (unsigned __int16 *)ST_STORE<SM_TRAITS>::StRegionFindRepurpose(a1, v21);
    }
    else
    {
      Repurpose = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, a2);
    }
    if ( !Repurpose )
      return 3221225599LL;
    v13 = ((__int64)Repurpose - *(_QWORD *)(a1 + 472)) >> 1;
LABEL_10:
    if ( (_DWORD)v13 == -1 )
      return 3221225599LL;
    result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, v13);
    if ( (int)result >= 0 )
      goto LABEL_3;
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
}
