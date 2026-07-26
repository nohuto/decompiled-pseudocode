/*
 * XREFs of NdisReadPcmciaAttributeMemory @ 0x1C005FB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005FD7C (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  int v5; // esi
  int SetBusConfigSpace; // eax
  ULONG v9; // ebx

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0x1Cu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 1, 1);
  v9 = SetBusConfigSpace;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_qD(0x1Du, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, (__int64)NdisAdapterHandle, SetBusConfigSpace);
  return v9;
}
