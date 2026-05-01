/*
 * XREFs of ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007B70
 * Callers:
 *     ?CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResourcePolicyEngine@ExecutionModel@@@Z @ 0x180007C00 (-CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResource.c)
 * Callees:
 *     ?Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800076B0 (-Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ??0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800077B4 (--0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::CreateResourcePolicyEngineClientProxyWorker(
        RPC_BINDING_HANDLE **a1)
{
  ExecutionModel::ResourcePolicyEngineProxy *v2; // rax
  __int64 v3; // rdx
  const unsigned __int16 *v4; // r8
  RPC_BINDING_HANDLE *v5; // rdi
  RPC_BINDING_HANDLE *v6; // rbx
  int v7; // esi

  if ( a1 )
  {
    *a1 = 0LL;
    v2 = (ExecutionModel::ResourcePolicyEngineProxy *)malloc(0xE0uLL);
    if ( v2 )
      v5 = (RPC_BINDING_HANDLE *)ExecutionModel::ResourcePolicyEngineProxy::ResourcePolicyEngineProxy(v2);
    else
      v5 = 0LL;
    v6 = v5;
    if ( v5 )
    {
      v7 = ExecutionModel::ResourcePolicyEngineProxy::Init(v5, v3, v4);
      if ( v7 >= 0 )
      {
        v6 = 0LL;
        *a1 = v5;
      }
    }
    else
    {
      v7 = -2147024882;
    }
    if ( v6 )
      (*((void (__fastcall **)(RPC_BINDING_HANDLE *))*v6 + 2))(v6);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
