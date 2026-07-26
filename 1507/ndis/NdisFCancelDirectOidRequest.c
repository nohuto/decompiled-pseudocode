/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1C0052A80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  NDIS_HANDLE v3; // [rsp+28h] [rbp-40h]
  PVOID v4; // [rsp+38h] [rbp-30h]

  v3 = NdisFilterHandle;
  v4 = RequestId;
  ndisExpandStack(ndisFCancelDirectOidRequestInternal, v2);
}
