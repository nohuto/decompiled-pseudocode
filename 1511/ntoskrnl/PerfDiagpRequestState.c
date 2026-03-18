/*
 * XREFs of PerfDiagpRequestState @ 0x14050C404
 * Callers:
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1404F5768 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x1404F57C4 (PerfDiagpShutdownProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x14050C3E0 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpBootSystemProxyCallback @ 0x14054B73C (PerfDiagpBootSystemProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 < 8 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64465250u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PerfDiagpProxyWorker;
      PoolWithTag->Parameter = PoolWithTag;
      LODWORD(PoolWithTag[1].List.Flink) = a1;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}
