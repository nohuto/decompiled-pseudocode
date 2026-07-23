/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400823D8
 * Callers:
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14007DA50 (PoCopyDeepIdleMask.c)
 *     KeComplementAffinityEx @ 0x1400D4BD0 (KeComplementAffinityEx.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(_DWORD *a1, __int16 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PoCopyDeepIdleMask(a1);
  __writecr8(CurrentIrql);
  KeComplementAffinityEx(a2, a1);
  return KeAndAffinityEx(a2, (__int16 *)&KeActiveProcessors, a2);
}
