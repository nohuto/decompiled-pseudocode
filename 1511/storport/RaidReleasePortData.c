/*
 * XREFs of RaidReleasePortData @ 0x1C000A32C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000A1E0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00280B8 (RaSqmLogAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0039B90 (StorpLogStatistics.c)
 *     RaDeleteDriver @ 0x1C0057598 (RaDeleteDriver.c)
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
