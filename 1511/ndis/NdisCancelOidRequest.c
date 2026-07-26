/*
 * XREFs of NdisCancelOidRequest @ 0x1C00405A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((_QWORD *)NdisBindingHandle + 2), 0LL, RequestId, 0LL);
}
