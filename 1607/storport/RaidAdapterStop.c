/*
 * XREFs of RaidAdapterStop @ 0x1C000CA80
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000C984 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C005E2C4 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C005E544 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x1C000CAC8 (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 528) || !*(_QWORD *)(a1 + 536) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1LL) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
