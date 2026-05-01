/*
 * XREFs of Srv_ResSet_SetExternalPriorities @ 0x1800203A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@2@@Z @ 0x180015588 (-Handle_ResSet_SetExternalPriorities@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_K.c)
 */

__int64 __fastcall Srv_ResSet_SetExternalPriorities(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        struct ExecutionModel::_ResourceInfo *a5)
{
  if ( !g_pResourcePolicyEngineServerProxy )
    return 2147549183LL;
  if ( !a4 )
    a5 = 0LL;
  return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_SetExternalPriorities(0LL, a2, a2, a3, a4, a5);
}
