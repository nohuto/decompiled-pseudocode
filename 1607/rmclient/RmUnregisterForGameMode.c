/*
 * XREFs of RmUnregisterForGameMode @ 0x1800084B0
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 */

int RmUnregisterForGameMode()
{
  int result; // eax
  CLIENT_CALL_RETURN v1; // rax
  RPC_BINDING_HANDLE v2; // [rsp+40h] [rbp+8h] BYREF
  CLIENT_CALL_RETURN v3; // [rsp+48h] [rbp+10h]

  result = RmpBindToRmRpcServer(&unk_18000F430, &v2);
  if ( result >= 0 )
  {
    v1.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000EA90, 1u, 0LL, v2).Pointer;
    v3.Pointer = v1.Pointer;
    if ( SLODWORD(v1.Simple) >= 0 )
      return 0;
    else
      return LODWORD(v1.Pointer) | 0x10000000;
  }
  return result;
}
