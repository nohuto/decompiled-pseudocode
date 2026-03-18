/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14020A408
 * Callers:
 *     ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14011489C (-SmStoreActionNotify@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_S.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  unsigned int v9; // edi
  unsigned int v10; // esi
  struct _EX_RUNDOWN_REF *v11; // rdi
  struct _EX_RUNDOWN_REF v12; // rax
  int v13; // eax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v10 = *(_DWORD *)(a2 + 4480);
  v11 = (struct _EX_RUNDOWN_REF *)(a1 + 176LL * (v10 & 0x1F));
  if ( !ExAcquireRundownProtection(v11 + 1) )
    goto LABEL_7;
  if ( (v11[3].Count & 0x7FF) != v10 >> 5 )
  {
    ExReleaseRundownProtection_0(v11 + 1);
LABEL_7:
    v12.Count = 0LL;
    goto LABEL_8;
  }
  v12.Count = v11->Count;
LABEL_8:
  if ( v12.Count )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreTerminateWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 4680);
    PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
    LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 4480);
    v13 = *(_BYTE *)(a1 + 10112) & 1;
    LODWORD(PoolWithTag[1].Parameter) = a3;
    HIDWORD(PoolWithTag[1].WorkerRoutine) = v13;
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
