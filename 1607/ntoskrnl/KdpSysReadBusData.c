/*
 * XREFs of KdpSysReadBusData @ 0x1406F5B20
 * Callers:
 *     KdSystemDebugControl @ 0x14064E93C (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x1406F5434 (KdpGetBusData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = qword_1402F2340(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
