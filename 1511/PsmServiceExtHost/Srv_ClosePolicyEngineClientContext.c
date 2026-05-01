/*
 * XREFs of Srv_ClosePolicyEngineClientContext @ 0x1800208F0
 * Callers:
 *     PRPE_CALLBACK_HANDLE_TYPE_rundown @ 0x1800208C0 (PRPE_CALLBACK_HANDLE_TYPE_rundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ClosePolicyEngineClientContext(void **a1)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ClosePolicyEngineClientContext(
             (ExecutionModel::ResourcePolicyEngineServerProxy *)a1,
             a1);
  else
    return 2147549183LL;
}
