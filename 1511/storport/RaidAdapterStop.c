/*
 * XREFs of RaidAdapterStop @ 0x1C00088B8
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00084A4 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C0056F70 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00571E4 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x1C0008900 (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
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
