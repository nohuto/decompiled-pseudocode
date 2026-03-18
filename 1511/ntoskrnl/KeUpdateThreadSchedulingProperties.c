/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x140095C70
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 */

char __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v5; // r10
  char v6; // r11

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(a3 + 16) || v6 == 3 )
  {
    if ( (*(_BYTE *)(v5 + 2) & 4) != 0 )
      result = KiQueryEffectivePriorityThread(v5, a3);
    else
      result = *(_BYTE *)(v5 + 195);
    **(_BYTE **)(a3 + 56) = result;
  }
  return result;
}
