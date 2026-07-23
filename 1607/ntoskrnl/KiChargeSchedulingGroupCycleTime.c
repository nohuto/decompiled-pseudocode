/*
 * XREFs of KiChargeSchedulingGroupCycleTime @ 0x140098904
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140098864 (KiRecomputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400CE2C8 (KiCheckMaxOverQuotaTransition.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

bool __fastcall KiChargeSchedulingGroupCycleTime(volatile signed __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  bool v4; // bl
  ULONG_PTR v6; // rcx

  v3 = a2[5] - *a2;
  a2[5] = *a2;
  v4 = (__int64)(v3 + _InterlockedExchangeAdd64(a1 + 6, v3)) <= 0;
  if ( *((__int64 *)a1 + 4) > 0 && (__int64)(v3 + _InterlockedExchangeAdd64(a1 + 4, v3)) <= 0 )
  {
    v6 = _InterlockedExchange64(a1 + 9, 0LL);
    if ( v6 )
      KiInsertQueueDpc(v6, 0);
  }
  return v4;
}
