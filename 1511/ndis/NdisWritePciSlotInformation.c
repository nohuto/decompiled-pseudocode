/*
 * XREFs of NdisWritePciSlotInformation @ 0x1C005BDE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005BF6C (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisWritePciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  int v5; // edi
  ULONG SetBusConfigSpace; // edi

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_q(0x14u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 0);
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_q(0x15u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
