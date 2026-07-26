/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00B1690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A5BD4 (ndisIfQueryBindingMiniportIfIndex.c)
 */

NDIS_STATUS __stdcall NdisIfQueryBindingIfIndex(
        NDIS_HANDLE NdisBindingHandle,
        PNET_IFINDEX pBoundIfIndex,
        PNET_LUID pBoundIfNetLuid,
        PNET_IFINDEX pLowestIfIndex,
        PNET_LUID pLowestIfNetLuid)
{
  __int64 v5; // r14
  NDIS_STATUS BindingMiniportIfIndex; // edi

  v5 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x2Eu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x2Fu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
