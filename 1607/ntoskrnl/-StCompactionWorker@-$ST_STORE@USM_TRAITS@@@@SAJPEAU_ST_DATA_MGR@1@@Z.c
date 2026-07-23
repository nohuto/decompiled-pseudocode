/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140120514
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140114FC8 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  char v1; // al
  int v3; // eax
  int v4; // edi

  v1 = *(_BYTE *)(a1 + 1864);
  if ( (v1 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1864) = v1 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1864) = v1 & 0xFC;
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
    if ( v3 != 2 )
    {
LABEL_6:
      v4 = 0;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(a1 + 1864) |= 3u;
  while ( 1 )
  {
    v4 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1);
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
    if ( v4 < 0 )
      break;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  if ( v3 == 2 )
    v3 = 1;
LABEL_9:
  *(_BYTE *)(a1 + 1864) &= 0xFCu;
  if ( v3 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v3);
  return (unsigned int)v4;
}
