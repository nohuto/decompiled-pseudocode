/*
 * XREFs of PerfDiagpRequestState @ 0x14055CC7C
 * Callers:
 *     PerfDiagpBootUserProxyCallback @ 0x14055CC58 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x140569C98 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x140569CF4 (PerfDiagpShutdownProxyCallback.c)
 *     PerfDiagpBootSystemProxyCallback @ 0x1405C7220 (PerfDiagpBootSystemProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
