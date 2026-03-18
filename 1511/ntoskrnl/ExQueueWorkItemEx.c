/*
 * XREFs of ExQueueWorkItemEx @ 0x140100640
 * Callers:
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400F3F94 (PopFxResidentTimeoutDpcRoutine.c)
 *     IoQueueWorkItemToNode @ 0x1401BBC04 (IoQueueWorkItemToNode.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1401ED708 (PopPepIdleTimeoutDpcRoutine.c)
 *     ExpHotAddProcessorToWorkers @ 0x140214C74 (ExpHotAddProcessorToWorkers.c)
 *     ExpWorkerHotAddProcessor @ 0x1403B3244 (ExpWorkerHotAddProcessor.c)
 *     MmScrubMemory @ 0x14062D224 (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x140101574 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140101B8C (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(ULONG_PTR a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(a1, v6, a3, 0LL);
}
