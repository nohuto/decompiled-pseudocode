/*
 * XREFs of ?CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResourcePolicyEngine@ExecutionModel@@@Z @ 0x180007C00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007B70 (-CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEAPEA.c)
 */

__int64 __fastcall CreateResourcePolicyEngineClient(
        struct Execution::IExecutionServicesProvider *a1,
        RPC_BINDING_HANDLE **a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = ExecutionModel::ResourcePolicyEngineProxy::CreateResourcePolicyEngineClientProxyWorker(a2);
  if ( !*a2 )
    return 2147500037LL;
  return result;
}
