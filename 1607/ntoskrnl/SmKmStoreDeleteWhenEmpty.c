/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x140002FD0
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400A6598 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r9d
  _BYTE WorkItem[72]; // [rsp+30h] [rbp-50h] BYREF
  char v11; // [rsp+B8h] [rbp+38h] BYREF
  int v12; // [rsp+C0h] [rbp+40h] BYREF

  v3 = a2[1464] & 0x3FF;
  v5 = SmKmStoreRefFromStoreIndex(a1, v3);
  v6 = 0;
  v7 = v5;
  if ( v8 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v5 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v5 + 34) & 1) == 0 )
  {
    return v6;
  }
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a2 + 20, &v11, &v12);
  if ( a2[234] << (a2[9] - 6) == (a2[234] << (a2[9] - 6)) - 16 * ((unsigned int)(v12 + 1023) >> 10) )
  {
    _m_prefetchw((const void *)(v7 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v7 + 34), 2u) & 2) == 0 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      *(_WORD *)&WorkItem[32] = 0;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[16] = SmKmStoreDeleteWhenEmptyWorker;
      *(_QWORD *)&WorkItem[24] = WorkItem;
      *(_QWORD *)&WorkItem[56] = a1;
      *(_DWORD *)&WorkItem[64] = v3;
      *(_QWORD *)WorkItem = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&WorkItem[32], WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v6;
}
