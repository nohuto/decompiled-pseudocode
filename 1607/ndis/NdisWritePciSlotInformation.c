/*
 * XREFs of NdisWritePciSlotInformation @ 0x1C005FBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005FD7C (ndisGetSetBusConfigSpace.c)
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
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0x14u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 0, 0);
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0x15u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  return SetBusConfigSpace;
}
