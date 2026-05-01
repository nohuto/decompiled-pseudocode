/*
 * XREFs of ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEBGPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007218
 * Callers:
 *     ?CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResourcePolicyEngine@ExecutionModel@@@Z @ 0x1800072B0 (-CreateResourcePolicyEngineClient@@YAJPEAUIExecutionServicesProvider@Execution@@PEAPEAUIResource.c)
 * Callees:
 *     ?Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJPEBGPEAX@Z @ 0x180006DD0 (-Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJPEBGPEAX@Z.c)
 *     ??0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x180006ED4 (--0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::CreateResourcePolicyEngineClientProxyWorker(
        const unsigned __int16 *a1,
        RPC_BINDING_HANDLE **a2)
{
  ExecutionModel::ResourcePolicyEngineProxy *v3; // rax
  const unsigned __int16 *v4; // rdx
  const unsigned __int16 *v5; // r8
  RPC_BINDING_HANDLE *v6; // rdi
  RPC_BINDING_HANDLE *v7; // rbx
  int v8; // esi

  if ( a2 )
  {
    *a2 = 0LL;
    v3 = (ExecutionModel::ResourcePolicyEngineProxy *)malloc(0xE0uLL);
    if ( v3 )
      v6 = (RPC_BINDING_HANDLE *)ExecutionModel::ResourcePolicyEngineProxy::ResourcePolicyEngineProxy(v3);
    else
      v6 = 0LL;
    v7 = v6;
    if ( v6 )
    {
      v8 = ExecutionModel::ResourcePolicyEngineProxy::Init(v6, v4, v5);
      if ( v8 >= 0 )
      {
        v7 = 0LL;
        *a2 = v6;
      }
    }
    else
    {
      v8 = -2147024882;
    }
    if ( v7 )
      (*((void (__fastcall **)(RPC_BINDING_HANDLE *))*v7 + 2))(v7);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
