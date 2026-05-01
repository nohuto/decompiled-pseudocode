/*
 * XREFs of Srv_CreatePolicyEngineClientContext @ 0x180020F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Srv_CreatePolicyEngineClientContext(
        ExecutionModel::ResourcePolicyEngineServerProxy *a1,
        struct _WNF_STATE_NAME *a2,
        void **a3)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_CreatePolicyEngineClientContext(a1, a2, a2, a3);
  else
    return -2147418113;
}
