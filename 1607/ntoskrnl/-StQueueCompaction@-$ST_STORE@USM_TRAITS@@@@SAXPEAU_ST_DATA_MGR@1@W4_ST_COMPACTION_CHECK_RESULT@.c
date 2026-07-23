/*
 * XREFs of ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140114FC8
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140120514 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = (*(unsigned __int8 *)(a1 + 832) >> 1) & 1;
  if ( a2 == 1 )
  {
    v5 = 4294967294LL;
    v4 = *(_BYTE *)(a1 + 776) != 0 ? 400 : 30;
    v3 = *(_BYTE *)(a1 + 1864) & 0xFC | 1;
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 1864) & 0xFC | 2;
    v4 = 0LL;
    v5 = 0LL;
  }
  *(_BYTE *)(a1 + 1864) = v3;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1872), v2, v4, v5);
}
