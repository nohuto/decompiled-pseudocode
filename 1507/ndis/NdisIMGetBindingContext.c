/*
 * XREFs of NdisIMGetBindingContext @ 0x1C00CDE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetBindingContext(NDIS_HANDLE NdisBindingHandle)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Fu, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)NdisBindingHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x30u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)NdisBindingHandle);
  }
  return *(NDIS_HANDLE *)(v1 + 1976);
}
