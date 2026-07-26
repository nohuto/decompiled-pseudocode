/*
 * XREFs of NdisMSetAttributes @ 0x1C00D0950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C00E84E0 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        char a3,
        NDIS_INTERFACE_TYPE a4)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Cu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)MiniportAdapterHandle);
  NdisMSetAttributesEx(MiniportAdapterHandle, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)MiniportAdapterHandle);
}
