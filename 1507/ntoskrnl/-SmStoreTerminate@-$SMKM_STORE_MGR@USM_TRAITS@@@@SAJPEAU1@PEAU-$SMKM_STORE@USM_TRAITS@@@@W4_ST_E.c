/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14025987C
 * Callers:
 *     ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14014A2B8 (-SmStoreActionNotify@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_S.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // r14
  struct _EX_RUNDOWN_REF *v12; // rdi
  unsigned __int64 v13; // rtt
  __int64 v14; // rax
  unsigned __int64 v15; // rtt
  int v16; // eax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v10 = *(_DWORD *)(a2 + 4480);
  v11 = 176LL * (v10 & 0x1F);
  v12 = (struct _EX_RUNDOWN_REF *)(v11 + a1);
  _m_prefetchw((const void *)(v11 + a1 + 8));
  v13 = *(_QWORD *)(v11 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + a1 + 8), v13 + 2, v13)
    && !ExfAcquireRundownProtection(v12 + 1) )
  {
    goto LABEL_9;
  }
  if ( (*(_WORD *)(v11 + a1 + 24) & 0x7FF) != v10 >> 5 )
  {
    _m_prefetchw(&v12[1]);
    v15 = v12[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], v15 - 2, v15) )
      ExfReleaseRundownProtection(v12 + 1);
LABEL_9:
    v14 = 0LL;
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(v11 + a1);
LABEL_10:
  if ( v14 )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreTerminateWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 4680);
    PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
    LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 4480);
    v16 = *(_BYTE *)(a1 + 10096) & 1;
    LODWORD(PoolWithTag[1].Parameter) = a3;
    HIDWORD(PoolWithTag[1].WorkerRoutine) = v16;
    HIDWORD(PoolWithTag[1].Parameter) = a4;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
    PoolWithTag = 0LL;
    v9 = 0;
  }
  else
  {
    v9 = -1073741431;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v9;
}
