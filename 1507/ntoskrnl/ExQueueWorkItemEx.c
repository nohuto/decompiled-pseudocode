/*
 * XREFs of ExQueueWorkItemEx @ 0x14000CD94
 * Callers:
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140131804 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1401398B0 (PopPepIdleTimeoutDpcRoutine.c)
 *     IoQueueWorkItemToNode @ 0x1401F71B8 (IoQueueWorkItemToNode.c)
 *     ExpHotAddProcessorToWorkers @ 0x140264F14 (ExpHotAddProcessorToWorkers.c)
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *BugCheckParameter2, int a2, __int64 a3)
{
  ULONG64 v3; // r9
  __int64 v4; // rdx

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v3 = BugCheckParameter2[2];
  if ( v3 <= MmUserProbeAddress )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v3, 0LL);
  if ( (unsigned int)a2 >= 7 )
    v4 = (unsigned int)(a2 - 32);
  else
    v4 = (unsigned int)ExpBuiltinPriorities[a2];
  return ExpQueueWorkItem(BugCheckParameter2, v4, a3, 0LL);
}
