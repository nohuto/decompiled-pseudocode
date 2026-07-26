/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1C0057D30
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C7DC (ndisOidFreeInternalCloneRequest.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  PNDIS_OID_REQUEST v5; // rsi
  KIRQL v7; // al
  KIRQL v8; // bl
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-48h] BYREF
  NDIS_HANDLE v11; // [rsp+28h] [rbp-40h]
  PNDIS_OID_REQUEST v12; // [rsp+38h] [rbp-30h]
  PNDIS_OID_REQUEST v13; // [rsp+70h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v5 = OidRequest;
  v13 = OidRequest;
  if ( !v3 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)NdisFilterHandle, (__int64)OidRequest, 0LL, (KSPIN_LOCK *)&v13);
    v5 = v13;
  }
  *(_DWORD *)&v5->NdisReserved[8] = Status;
  v11 = NdisFilterHandle;
  v12 = v5;
  if ( ndisExpandStack(ndisFDirectOidRequestCompleteInternal, v10) < 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v8 = v7;
    v9 = *((_QWORD *)NdisFilterHandle + 30);
    *((_DWORD *)NdisFilterHandle + 40) = 2101393;
    *(_QWORD *)v5->NdisReserved = v9;
    *((_QWORD *)NdisFilterHandle + 30) = v13;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    *((_DWORD *)NdisFilterHandle + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v8);
  }
}
