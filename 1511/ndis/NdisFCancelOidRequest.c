/*
 * XREFs of NdisFCancelOidRequest @ 0x1C0052F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  NDIS_HANDLE v3; // [rsp+28h] [rbp-40h]
  PVOID v4; // [rsp+38h] [rbp-30h]

  v3 = NdisFilterHandle;
  v4 = RequestId;
  ndisExpandStack(ndisFCancelOidRequestInternal, v2);
}
