/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400940B4
 * Callers:
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeComplementAffinityEx @ 0x140077200 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400938C0 (PoCopyDeepIdleMask.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PoCopyDeepIdleMask(a1);
  __writecr8(CurrentIrql);
  KeComplementAffinityEx(a2, a1);
  return KeAndAffinityEx(a2, KeActiveProcessors, a2);
}
