/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400CABB0
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x140098ADC (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400C8244 (KeSetIdealProcessorThreadEx.c)
 *     KiSetAffinityThread @ 0x1400C885C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetSystemAffinityThread @ 0x1400CAA54 (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CDCB8 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 1616) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 1608) & *(_QWORD *)a2) != 0LL;
}
