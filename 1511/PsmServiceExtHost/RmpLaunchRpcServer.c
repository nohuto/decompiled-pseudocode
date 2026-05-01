/*
 * XREFs of RmpLaunchRpcServer @ 0x1800225F4
 * Callers:
 *     RmpLaunchAllRpcServers @ 0x1800223D0 (RmpLaunchAllRpcServers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpLaunchRpcServer(RPC_IF_HANDLE IfSpec, __int64 a2, RPC_BINDING_VECTOR **a3)
{
  unsigned int v5; // ebx

  *a3 = 0LL;
  if ( (unsigned int)RpcServerRegisterIf3(IfSpec, 0LL, 0LL, 41LL, 1234, 0, 0LL, a2) )
  {
    v5 = -1073741823;
  }
  else
  {
    if ( !RpcServerInqBindings(a3) && !RpcEpRegisterW(IfSpec, *a3, 0LL, 0LL) )
      return 0;
    v5 = -1073741823;
    RpcServerUnregisterIf(IfSpec, 0LL, 0);
  }
  if ( *a3 )
  {
    RpcBindingVectorFree(a3);
    *a3 = 0LL;
  }
  return v5;
}
