/*
 * XREFs of KdpSysReadBusData @ 0x1406AC7A4
 * Callers:
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x1406AB074 (KdpGetBusData.c)
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
    BusDataByOffset = qword_1402D26A0(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
