/*
 * XREFs of RmpShutdownRpcServer @ 0x180036EE4
 * Callers:
 *     RmpLaunchAllRpcServers @ 0x1800223D0 (RmpLaunchAllRpcServers.c)
 * Callees:
 *     <none>
 */

RPC_STATUS RmpShutdownRpcServer()
{
  __int64 v0; // rdi
  __int64 *v1; // rbx
  RPC_BINDING_VECTOR *v2; // rdx
  RPC_STATUS result; // eax

  v0 = 0LL;
  v1 = RmpRpcBindings;
  do
  {
    v2 = (RPC_BINDING_VECTOR *)v1[2];
    if ( v2 )
    {
      RpcEpUnregister((RPC_IF_HANDLE)*v1, v2, 0LL);
      RpcBindingVectorFree((RPC_BINDING_VECTOR **)&RmpRpcBindings[2 * v0 + 2 + v0]);
      result = RpcServerUnregisterIf((RPC_IF_HANDLE)*v1, 0LL, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    v1 += 3;
  }
  while ( (unsigned int)v0 < 4 );
  return result;
}
