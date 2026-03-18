/*
 * XREFs of KdpSysWriteBusData @ 0x14072C85C
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = qword_1403217F8(a2, a3, Buffer);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}
