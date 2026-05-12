/*
 * XREFs of RaidReleasePortData @ 0x1C0026958
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C0026118 (RaSqmLogAdapterStatistics.c)
 *     StorEtwEnableCallback @ 0x1C0034F74 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x1C0037D0C (StorpLogStatistics.c)
 *     RaDeleteDriver @ 0x1C005365C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    WPP_MAIN_CB.Reserved = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
