/*
 * XREFs of NdisReadPciSlotInformation @ 0x1C005BF50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005C20C (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  int v5; // edi
  ULONG SetBusConfigSpace; // edi

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_q(0x12u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 1);
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_q(0x13u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
