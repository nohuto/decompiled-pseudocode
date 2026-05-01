/*
 * XREFs of RmpClientDisconnectContextHandle @ 0x18000E474
 * Callers:
 *     RmDisconnectFromResourceManager @ 0x18000DFB0 (RmDisconnectFromResourceManager.c)
 *     RmpClientConnectToResourceManager @ 0x18000E2B8 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpClientDisconnectContextHandle(void *a1)
{
  void *ContextHandle; // [rsp+30h] [rbp+8h] BYREF
  CLIENT_CALL_RETURN v2; // [rsp+38h] [rbp+10h]

  ContextHandle = a1;
  v2.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016C30, 1u, 0LL, &ContextHandle).Pointer;
  if ( ContextHandle )
    RpcSsDestroyClientContext(&ContextHandle);
}
