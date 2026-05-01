/*
 * XREFs of Srv_ResSet_NotifyPendingTransition @ 0x180046770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ResSet_NotifyPendingTransition(
        ExecutionModel::ResourcePolicyEngineServerProxy *a1,
        void *a2,
        unsigned int a3)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_NotifyPendingTransition(
             a1,
             a2,
             (unsigned __int64)a2,
             a3);
  else
    return 2147549183LL;
}
