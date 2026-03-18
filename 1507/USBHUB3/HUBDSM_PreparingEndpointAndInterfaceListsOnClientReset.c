/*
 * XREFs of HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C0016AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset(__int64 a1)
{
  return HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(*(_QWORD *)(a1 + 960));
}
