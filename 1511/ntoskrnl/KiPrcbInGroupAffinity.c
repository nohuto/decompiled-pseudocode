/*
 * XREFs of KiPrcbInGroupAffinity @ 0x14002A910
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x14002A7B4 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400956F8 (KeSetIdealProcessorThreadEx.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGroupSchedulingMoveThread @ 0x1400C369C (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 1616) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 1608) & *(_QWORD *)a2) != 0LL;
}
