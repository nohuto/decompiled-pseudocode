/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C00F95B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  int v3; // esi

  v3 = (int)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_(0x3Au, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
  ndisCoIndicateStatusInternal(v3);
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_(0x3Bu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
}
