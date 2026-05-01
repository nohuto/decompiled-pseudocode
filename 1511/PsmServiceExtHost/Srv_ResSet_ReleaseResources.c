/*
 * XREFs of Srv_ResSet_ReleaseResources @ 0x180018A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ResSet_ReleaseResources(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_ReleaseResources(a1, a2, a2, a3);
  else
    return 2147549183LL;
}
