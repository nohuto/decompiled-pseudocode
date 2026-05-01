/*
 * XREFs of RmRegisterForGameMode @ 0x180008400
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 */

__int64 __fastcall RmRegisterForGameMode(__int64 a1)
{
  char v2; // di
  int v3; // ebx
  CLIENT_CALL_RETURN v4; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v7; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v3 = RmpBindToRmRpcServer(&unk_18000F430, &Binding);
  if ( v3 >= 0 )
  {
    v2 = 1;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000EA90, 0, 0LL, Binding, a1).Pointer;
    v7.Pointer = v4.Pointer;
    if ( SLODWORD(v4.Simple) >= 0 )
      v3 = 0;
    else
      v3 = LODWORD(v4.Pointer) | 0x10000000;
  }
  if ( v2 )
    RpcBindingFree(&Binding);
  return (unsigned int)v3;
}
