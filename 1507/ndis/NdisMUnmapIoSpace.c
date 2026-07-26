/*
 * XREFs of NdisMUnmapIoSpace @ 0x1C00D3400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisMUnmapIoSpace(NDIS_HANDLE MiniportAdapterHandle, PVOID VirtualAddress, UINT Length)
{
  SIZE_T v3; // rdi

  v3 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle);
  MmUnmapIoSpace(VirtualAddress, v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle);
}
