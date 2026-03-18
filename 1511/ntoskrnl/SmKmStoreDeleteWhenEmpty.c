/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x14010267C
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x1404D1574 (SmpKeyedStoreCreate.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400E4014 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v5 = a1 + 176LL * (a2[1120] & 0x1F);
  if ( a3 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v5 + 26), 1u);
  }
  else if ( (*(_BYTE *)(v5 + 26) & 1) == 0 )
  {
    return v3;
  }
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats((__int64)(a2 + 20), &v7, &v8);
  if ( a2[72] << (a2[9] - 6) == (a2[72] << (a2[9] - 6)) - 16 * ((unsigned int)(v8 + 1023) >> 10) )
  {
    _m_prefetchw((const void *)(v5 + 26));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v5 + 26), 2u) & 2) == 0 )
    {
      *(_QWORD *)(v5 + 56) = v5 + 32;
      *(_QWORD *)(v5 + 48) = SmKmStoreDeleteWhenEmptyWorker;
      *(_QWORD *)(v5 + 32) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 32), DelayedWorkQueue);
      return 1;
    }
  }
  return v3;
}
