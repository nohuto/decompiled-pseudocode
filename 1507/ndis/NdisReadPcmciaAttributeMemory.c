/*
 * XREFs of NdisReadPcmciaAttributeMemory @ 0x1C005BFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005C20C (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  int v5; // esi
  int SetBusConfigSpace; // eax
  ULONG v9; // ebx

  v5 = (int)Buffer;
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_q(0x1Cu, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((_DWORD)NdisAdapterHandle, Offset, v5, Length, 1, 1);
  v9 = SetBusConfigSpace;
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_qD(0x1Du, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, (__int64)NdisAdapterHandle, SetBusConfigSpace);
  return v9;
}
