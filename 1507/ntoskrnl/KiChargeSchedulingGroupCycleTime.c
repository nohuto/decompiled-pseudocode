/*
 * XREFs of KiChargeSchedulingGroupCycleTime @ 0x14020A34C
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiChargeSchedulingGroupCycleTime(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a2[5] - *a2;
  a2[5] = *a2;
  result = v2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), v2);
  if ( result <= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
    if ( v4 )
      return KiInsertQueueDpc(v4, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
