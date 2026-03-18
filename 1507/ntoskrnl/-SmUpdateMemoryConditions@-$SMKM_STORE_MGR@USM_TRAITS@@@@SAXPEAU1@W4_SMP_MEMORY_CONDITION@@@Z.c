/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1400D48F4
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400117B0 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014040C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int v2; // esi
  _WORD *v3; // r12
  unsigned int v6; // edi
  __int64 v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt
  __int64 v10; // rbx
  __int64 v11; // rax
  signed int v12; // edi
  struct _KTHREAD *v13; // rbp
  KPRIORITY PriorityThread; // eax
  struct _EX_RUNDOWN_REF *v15; // rcx
  unsigned __int64 v16; // rtt
  unsigned __int64 v17; // rtt

  v2 = 0;
  v3 = (_WORD *)(a1 + 24);
  do
  {
    v6 = v2 | (32 * (*v3 & 0x7FF));
    v7 = 176LL * (v2 & 0x1F);
    v8 = (struct _EX_RUNDOWN_REF *)(v7 + a1);
    _m_prefetchw((const void *)(v7 + a1 + 8));
    v9 = *(_QWORD *)(v7 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + a1 + 8), v9 + 2, v9)
      && !ExfAcquireRundownProtection(v8 + 1) )
    {
      goto LABEL_4;
    }
    if ( (*(_WORD *)(v7 + a1 + 24) & 0x7FF) != v6 >> 5 )
    {
      _m_prefetchw(&v8[1]);
      v17 = v8[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[1], v17 - 2, v17) )
        ExfReleaseRundownProtection(v8 + 1);
LABEL_4:
      v10 = 0LL;
      goto LABEL_5;
    }
    v10 = *(_QWORD *)(v7 + a1);
LABEL_5:
    if ( v10 )
    {
      *(_BYTE *)(v10 + 4486) = a2;
      v11 = *(unsigned __int8 *)(v10 + 4486);
      if ( (_DWORD)v11 == 4 )
        v12 = *(_DWORD *)(v10 + 5160);
      else
        v12 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v11];
      v13 = *(struct _KTHREAD **)(v10 + 4664);
      PriorityThread = KeQueryPriorityThread(v13);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v12 )
          KeSetActualBasePriorityThread((__int64)v13, v12);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v10 + 80, v10 + 4432);
      }
      else if ( PriorityThread > v12 )
      {
        KeSetActualBasePriorityThread((__int64)v13, v12);
      }
      v15 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v10 + 4480) & 0x1F) + a1 + 8);
      _m_prefetchw(v15);
      v16 = v15->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v15, v16 - 2, v16) )
        ExfReleaseRundownProtection(v15);
    }
    ++v2;
    v3 += 88;
  }
  while ( v2 < 0x20 );
}
