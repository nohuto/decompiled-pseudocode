/*
 * XREFs of ExQueueWorkItemEx @ 0x1400A8A00
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400A89D0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140206288 (PopPepIdleTimeoutDpcRoutine.c)
 *     ExpHotAddProcessorToWorkers @ 0x14022E9FC (ExpHotAddProcessorToWorkers.c)
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     MmScrubMemory @ 0x14066528C (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005FEAC (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D11BC (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem((__int64)a1, v6, a3, 0);
}
