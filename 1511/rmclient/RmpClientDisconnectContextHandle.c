/*
 * XREFs of RmpClientDisconnectContextHandle @ 0x18000EE8C
 * Callers:
 *     RmDisconnectFromResourceManager @ 0x18000E9E0 (RmDisconnectFromResourceManager.c)
 *     RmpClientConnectToResourceManager @ 0x18000ECD0 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpClientDisconnectContextHandle(void *a1)
{
  void *ContextHandle; // [rsp+30h] [rbp+8h] BYREF
  CLIENT_CALL_RETURN v2; // [rsp+38h] [rbp+10h]

  ContextHandle = a1;
  v2.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017D40, 1u, 0LL, &ContextHandle).Pointer;
  if ( ContextHandle )
    RpcSsDestroyClientContext(&ContextHandle);
}
