/*
 * XREFs of PRPE_CALLBACK_HANDLE_TYPE_rundown @ 0x1800208C0
 * Callers:
 *     <none>
 * Callees:
 *     Srv_ClosePolicyEngineClientContext @ 0x1800208F0 (Srv_ClosePolicyEngineClientContext.c)
 *     ?Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z @ 0x180020910 (-Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall PRPE_CALLBACK_HANDLE_TYPE_rundown(void *a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( g_pResourcePolicyEngineServerProxy )
    ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ClientRundown(
      (ExecutionModel::ResourcePolicyEngineServerProxy *)a1,
      a1);
  return Srv_ClosePolicyEngineClientContext(&v2);
}
