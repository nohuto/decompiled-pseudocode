/*
 * XREFs of MiInSwapStore @ 0x1404F17D0
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400B72AC (MmInSwapWorkingSet.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1400C73C0 (KeQueryPriorityThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInSwapStoreContextDereference @ 0x1404F1934 (MiInSwapStoreContextDereference.c)
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
