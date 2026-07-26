/*
 * XREFs of NdisMUnmapIoSpace @ 0x1C00CCB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisMUnmapIoSpace(NDIS_HANDLE MiniportAdapterHandle, PVOID VirtualAddress, UINT Length)
{
  SIZE_T v3; // rdi

  v3 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle);
  MmUnmapIoSpace(VirtualAddress, v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle);
}
