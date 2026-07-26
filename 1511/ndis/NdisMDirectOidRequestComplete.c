/*
 * XREFs of NdisMDirectOidRequestComplete @ 0x1C00405D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009398 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMDirectOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  __int64 v6; // r10
  struct _NDIS_OID_REQUEST *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v7 = OidRequest;
  if ( !v3 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)MiniportAdapterHandle, (__int64)OidRequest, 0LL, (KSPIN_LOCK *)&v7);
    OidRequest = v7;
  }
  v6 = 136LL * *(int *)(*((_QWORD *)MiniportAdapterHandle + 477) + 904LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v6
                                                                                      + 56))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v6 + 24),
    *((_QWORD *)MiniportAdapterHandle + 672),
    MiniportAdapterHandle,
    OidRequest,
    Status);
}
