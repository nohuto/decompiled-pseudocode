/*
 * XREFs of ?Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800076B0
 * Callers:
 *     ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007B70 (-CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEAPEA.c)
 * Callees:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180007718 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::Init(
        RPC_BINDING_HANDLE *this,
        __int64 a2,
        const unsigned __int16 *a3)
{
  RPC_BINDING_HANDLE *v3; // rbx
  int v5; // edi
  void **v7; // [rsp+20h] [rbp-18h]

  v3 = this + 2;
  LODWORD(v7) = 2;
  v5 = DevPlat::Shared::BindToRPCServerInSession(&unk_180017480, L"ResourcePolicyEngineRpc", a3, this + 2, v7);
  if ( v5 < 0
    || (v5 = ExecutionModel::ResourcePolicyEngineProxy::InitialzeClientCallbackContext((ExecutionModel::ResourcePolicyEngineProxy *)this),
        v5 < 0) )
  {
    if ( *v3 )
    {
      RpcBindingFree(v3);
      *v3 = 0LL;
    }
  }
  return (unsigned int)v5;
}
