/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400FF69C
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011044C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int v2; // esi
  _WORD *v3; // r15
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi
  struct _EX_RUNDOWN_REF v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  struct _KTHREAD *v11; // rbp
  KPRIORITY PriorityThread; // eax
  __int64 v13; // r8

  v2 = 0;
  v3 = (_WORD *)(a1 + 24);
  do
  {
    v6 = v2 | (32 * (*v3 & 0x7FF));
    v7 = (struct _EX_RUNDOWN_REF *)(a1 + 176LL * (v2 & 0x1F));
    if ( !ExAcquireRundownProtection(v7 + 1) )
      goto LABEL_3;
    if ( (v7[3].Count & 0x7FF) != v6 >> 5 )
    {
      ExReleaseRundownProtection_0(v7 + 1);
LABEL_3:
      v8.Count = 0LL;
      goto LABEL_4;
    }
    v8.Count = v7->Count;
LABEL_4:
    if ( v8.Count )
    {
      *(_BYTE *)(v8.Count + 4486) = a2;
      v9 = *(unsigned __int8 *)(v8.Count + 4486);
      if ( (_DWORD)v9 == 4 )
        v10 = *(_DWORD *)(v8.Count + 5168);
      else
        v10 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v9];
      v11 = *(struct _KTHREAD **)(v8.Count + 4664);
      PriorityThread = KeQueryPriorityThread(v11);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v10 )
          KeSetActualBasePriorityThread((__int64)v11, v10, v13);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v8.Count + 80, v8.Count + 4432);
      }
      else if ( PriorityThread > (int)v10 )
      {
        KeSetActualBasePriorityThread((__int64)v11, v10, v13);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v8.Count + 4480) & 0x1F) + a1 + 8));
    }
    ++v2;
    v3 += 88;
  }
  while ( v2 < 0x20 );
}
