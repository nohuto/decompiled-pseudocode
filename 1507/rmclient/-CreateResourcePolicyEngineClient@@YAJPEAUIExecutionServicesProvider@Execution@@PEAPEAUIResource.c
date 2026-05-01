/*
 * XREFs of ?CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResourcePolicyEngine@ExecutionModel@@@Z @ 0x1800072B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEBGPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007218 (-CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEBGPE.c)
 */

__int64 __fastcall CreateResourcePolicyEngineClient(
        struct Execution::IExecutionServicesProvider *a1,
        RPC_BINDING_HANDLE **a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = ExecutionModel::ResourcePolicyEngineProxy::CreateResourcePolicyEngineClientProxyWorker(
             (const unsigned __int16 *)a1,
             a2);
  if ( !*a2 )
    return 2147500037LL;
  return result;
}
