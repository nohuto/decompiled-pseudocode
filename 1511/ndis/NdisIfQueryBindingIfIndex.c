/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00AC630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A0D68 (ndisIfQueryBindingMiniportIfIndex.c)
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
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x2Eu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x2Fu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
