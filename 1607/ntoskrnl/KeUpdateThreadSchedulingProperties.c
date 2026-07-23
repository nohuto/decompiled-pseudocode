/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1400C6CB8
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1400C6A60 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 */

char __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v5; // r9
  char v6; // r10

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1, a3, a1);
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
