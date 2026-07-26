/*
 * XREFs of NdisDirectOidRequest @ 0x1C0044110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 103))(
           NdisBindingHandle,
           OidRequest);
}
