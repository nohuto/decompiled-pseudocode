/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C00F95C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97F0 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  int v3; // esi

  v3 = (int)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_(0x3Au, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
  ndisCoIndicateStatusInternal(v3);
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_(0x3Bu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
}
