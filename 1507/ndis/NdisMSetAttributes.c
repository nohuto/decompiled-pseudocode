/*
 * XREFs of NdisMSetAttributes @ 0x1C00D1BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C00E7E60 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        char a3,
        NDIS_INTERFACE_TYPE a4)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x59u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)MiniportAdapterHandle);
  NdisMSetAttributesEx(MiniportAdapterHandle, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Au, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)MiniportAdapterHandle);
}
