/*
 * XREFs of NdisIMGetBindingContext @ 0x1C00CCB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetBindingContext(NDIS_HANDLE NdisBindingHandle)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Fu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (__int64)NdisBindingHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x30u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (__int64)NdisBindingHandle);
  }
  return *(NDIS_HANDLE *)(v1 + 1976);
}
