/*
 * XREFs of KiChargeSchedulingGroupCycleTime @ 0x1401CB44C
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14007B7B0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400C3468 (KiRecomputeGroupSchedulingRank.c)
 *     KiComputeGroupSchedulingRank @ 0x1400C3C94 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiChargeSchedulingGroupCycleTime(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  ULONG_PTR v4; // rcx

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
