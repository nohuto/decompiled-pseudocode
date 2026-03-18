/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140144474
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140144790 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  char v1; // al
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // esi
  char v7; // cl
  __int64 v9; // rdx
  __int64 v10; // r9
  char v11; // cl

  v1 = *(_BYTE *)(a1 + 1160);
  if ( (v1 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1160) = v1 & 0xFB;
LABEL_3:
    *(_BYTE *)(a1 + 1160) |= 3u;
    v4 = 0;
    while ( 1 )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 128)
         ? ST_STORE<SM_TRAITS>::StCompactionPerformFile(a1)
         : ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1);
      v6 = v5;
      v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
      if ( v6 < 0 )
        break;
      if ( v3 != 2 )
        goto LABEL_8;
    }
    if ( v3 == 2 )
    {
      if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
        *(_BYTE *)(a1 + 1160) |= 4u;
      v3 = 1;
    }
    goto LABEL_9;
  }
  *(_BYTE *)(a1 + 1160) = v1 & 0xFC;
  v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
  if ( v3 == 2 )
    goto LABEL_3;
  v4 = 0;
LABEL_8:
  v6 = 0;
LABEL_9:
  *(_BYTE *)(a1 + 1160) &= 0xFCu;
  v7 = *(_BYTE *)(a1 + 1160);
  if ( v3 )
  {
    v9 = (*(unsigned __int8 *)(a1 + 184) >> 1) & 1;
    if ( v3 == 1 )
    {
      v10 = 4294967294LL;
      v4 = *(_BYTE *)(a1 + 128) != 0 ? 400 : 30;
      v11 = v7 & 0xFC | 1;
    }
    else
    {
      v10 = 0LL;
      v11 = v7 & 0xFC | 2;
    }
    *(_BYTE *)(a1 + 1160) = v11;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1168), v9, v4, v10);
  }
  return (unsigned int)v6;
}
