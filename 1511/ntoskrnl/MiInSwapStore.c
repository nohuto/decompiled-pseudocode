/*
 * XREFs of MiInSwapStore @ 0x1403B59C8
 * Callers:
 *     MmInSwapWorkingSet @ 0x140001BC8 (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiInSwapStoreContextDereference @ 0x1403B5B2C (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  KPRIORITY PriorityThread; // eax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73536D4Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  KeInitializeEvent((PRKEVENT)(v3 + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = MiInSwapStoreWorker;
  *((_QWORD *)v3 + 3) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *((_QWORD *)v3 + 4) = Object;
  *((_DWORD *)v3 + 16) = 2;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( PriorityThread < 15 )
    ++PriorityThread;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)v3, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  KeWaitForSingleObject(v3 + 40, WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
