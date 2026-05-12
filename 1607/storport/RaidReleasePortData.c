/*
 * XREFs of RaidReleasePortData @ 0x1C000D1DC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000D090 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002B738 (RaSqmLogAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C003D964 (StorpLogStatistics.c)
 *     RaDeleteDriver @ 0x1C005E900 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
