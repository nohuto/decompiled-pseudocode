/*
 * XREFs of ExQueueWorkItemEx @ 0x1400A6F80
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400A6F50 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402060B4 (PopPepIdleTimeoutDpcRoutine.c)
 *     ExpHotAddProcessorToWorkers @ 0x14022E828 (ExpHotAddProcessorToWorkers.c)
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005FA2C (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1400CF05C (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem((__int64)a1, v6, a3, 0);
}
