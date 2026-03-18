/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400CCD10
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x1400992DC (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400CA3A4 (KeSetIdealProcessorThreadEx.c)
 *     KiSetAffinityThread @ 0x1400CA9BC (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400CAF3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetSystemAffinityThread @ 0x1400CCBB4 (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CFE18 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiComputeThreadAffinity @ 0x1400F2060 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 1616) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 1608) & *(_QWORD *)a2) != 0LL;
}
