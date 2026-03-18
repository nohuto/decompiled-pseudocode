/*
 * XREFs of IopRunIoQosWorkItem @ 0x1401F9438
 * Callers:
 *     IoCreateFlow @ 0x1401F8F48 (IoCreateFlow.c)
 *     IoDeleteFlow @ 0x1401F8F84 (IoDeleteFlow.c)
 *     IoQueryFlowHistory @ 0x1401F8FE0 (IoQueryFlowHistory.c)
 *     IoQueryFlowInformation @ 0x1401F9054 (IoQueryFlowInformation.c)
 *     IoSetFlowPolicy @ 0x1401F90FC (IoSetFlowPolicy.c)
 *     IoSetHandleFlow @ 0x1401F9180 (IoSetHandleFlow.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopRunIoQosWorkItem(__int64 a1)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, DelayedWorkQueue);
  return KeWaitForSingleObject((PVOID)(a1 + 136), *(KWAIT_REASON *)(a1 + 164), 0, 0, 0LL);
}
