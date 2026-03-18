/*
 * XREFs of IopRunIoQosWorkItem @ 0x1401BDB5C
 * Callers:
 *     IoCreateFlow @ 0x1401BD6C0 (IoCreateFlow.c)
 *     IoDeleteFlow @ 0x1401BD6FC (IoDeleteFlow.c)
 *     IoQueryFlowHistory @ 0x1401BD758 (IoQueryFlowHistory.c)
 *     IoQueryFlowInformation @ 0x1401BD7CC (IoQueryFlowInformation.c)
 *     IoSetFlowPolicy @ 0x1401BD874 (IoSetFlowPolicy.c)
 *     IoSetHandleFlow @ 0x1401BD8F8 (IoSetHandleFlow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

NTSTATUS __fastcall IopRunIoQosWorkItem(__int64 a1)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, DelayedWorkQueue);
  return KeWaitForSingleObject((PVOID)(a1 + 136), *(KWAIT_REASON *)(a1 + 164), 0, 0, 0LL);
}
