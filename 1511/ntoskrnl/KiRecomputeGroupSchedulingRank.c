/*
 * XREFs of KiRecomputeGroupSchedulingRank @ 0x1400C3468
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 * Callees:
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

unsigned __int64 __fastcall KiRecomputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rtt

  v3 = a3;
  if ( *(__int64 *)(a1 + 32) > 0 )
    KiChargeSchedulingGroupCycleTime(a1, a2);
  v6 = KiCycleDivisorShortTerm * *(unsigned int *)(a1 + 8);
  ++*(_DWORD *)(a2 + 116);
  result = *(_QWORD *)a2;
  v8 = v6 >> 7;
  *(_QWORD *)(a2 + 24) += v8;
  v9 = *(_QWORD *)(a2 + 24);
  if ( result > v9 )
  {
    v10 = v8 + result - v9 - 1;
    result = v10 / v8;
    *(_DWORD *)(a2 + 116) += v10 / v8;
    *(_QWORD *)(a2 + 24) = v9 + v8 * (unsigned int)(v10 / v8);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
  {
    LOBYTE(a3) = 1;
    return KiResortScbQueue(v3, a2, a3);
  }
  return result;
}
