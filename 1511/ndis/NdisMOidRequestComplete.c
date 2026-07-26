/*
 * XREFs of NdisMOidRequestComplete @ 0x1C0040650
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C004D030 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C00F3630 (NdisMCoRequestComplete.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009398 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  NDIS_STATUS v4; // edi
  __int64 v6; // r10
  struct _NDIS_OID_REQUEST *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v4 = Status;
  v7 = OidRequest;
  if ( !v3 )
  {
    LOBYTE(Status) = 1;
    ndisOidFreeInternalCloneRequest(
      (KSPIN_LOCK *)MiniportAdapterHandle,
      (__int64)OidRequest,
      *(__int64 *)&Status,
      (KSPIN_LOCK *)&v7);
    OidRequest = v7;
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 279) )
    *((_QWORD *)MiniportAdapterHandle + 279) = 0LL;
  v6 = 136LL * *(int *)(*((_QWORD *)MiniportAdapterHandle + 477) + 904LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v6
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v6 + 24),
    *((_QWORD *)MiniportAdapterHandle + 672),
    MiniportAdapterHandle,
    OidRequest,
    v4);
}
