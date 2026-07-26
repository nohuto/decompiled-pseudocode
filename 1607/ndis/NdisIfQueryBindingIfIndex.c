/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00B0210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A398C (ndisIfQueryBindingMiniportIfIndex.c)
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
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0x2Eu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0x2Fu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
