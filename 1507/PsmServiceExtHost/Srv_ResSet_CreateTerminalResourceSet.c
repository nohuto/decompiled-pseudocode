/*
 * XREFs of Srv_ResSet_CreateTerminalResourceSet @ 0x1800053E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ResSet_CreateTerminalResourceSet(
        ExecutionModel::ResourcePolicyEngineServerProxy *a1,
        void *a2,
        unsigned __int64 *a3)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_CreateTerminalResourceSet(
             a1,
             a2,
             (unsigned __int64)a2,
             a3);
  else
    return 2147549183LL;
}
