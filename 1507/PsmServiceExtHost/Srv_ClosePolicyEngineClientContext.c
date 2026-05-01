/*
 * XREFs of Srv_ClosePolicyEngineClientContext @ 0x1800196D0
 * Callers:
 *     PRPE_CALLBACK_HANDLE_TYPE_rundown @ 0x1800196F0 (PRPE_CALLBACK_HANDLE_TYPE_rundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ClosePolicyEngineClientContext(void **a1)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ClosePolicyEngineClientContext(
             (ExecutionModel::ResourcePolicyEngineServerProxy *)a1,
             (ExecutionModel::HostResourceInfo **)a1);
  else
    return 2147549183LL;
}
