/*
 * XREFs of ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140255CF0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140144790 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmEtwLogStoreStateChange @ 0x140257538 (SmEtwLogStoreStateChange.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StEmptyStore(__int64 a1, __int64 a2)
{
  int v3; // edi

  v3 = a2;
  if ( (dword_140353094 & 0x10) != 0 )
    SmEtwLogStoreStateChange(&qword_140353088, a2, a1, (unsigned int)a2);
  if ( *(_DWORD *)(a1 + 4216) )
  {
    *(_DWORD *)(a1 + 4216) = 0;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1248), 5, 0xFFFFFFFF, 0xFFFFFFFF);
  }
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 80, 1);
  if ( v3 )
    ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 1264, 1);
}
