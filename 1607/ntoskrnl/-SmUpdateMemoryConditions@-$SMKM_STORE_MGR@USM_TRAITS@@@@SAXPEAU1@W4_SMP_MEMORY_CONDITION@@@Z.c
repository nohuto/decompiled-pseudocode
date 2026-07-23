/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400032A8
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400BCED8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011E58C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // edi
  struct _KTHREAD *v10; // rbp
  KPRIORITY PriorityThread; // eax

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a1, i);
    v6 = v5;
    if ( v5 )
    {
      *(_BYTE *)(v5 + 5862) = a2;
      v7 = *(unsigned __int8 *)(v5 + 5862);
      v8 = *(unsigned __int8 *)(v5 + 5862);
      if ( v7 == 4 )
        v9 = *(_DWORD *)(v6 + 6568);
      else
        v9 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v8];
      v10 = *(struct _KTHREAD **)(v6 + 6040);
      PriorityThread = KeQueryPriorityThread(v10);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v9 )
          KeSetActualBasePriorityThread(v10, v9);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v6 + 80, v6 + 5816);
      }
      else if ( PriorityThread > (int)v9 )
      {
        KeSetActualBasePriorityThread(v10, v9);
      }
      SmKmStoreDereference(a1, *(_DWORD *)(v6 + 5856));
    }
  }
}
