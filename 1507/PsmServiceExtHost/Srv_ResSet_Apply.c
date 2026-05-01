/*
 * XREFs of Srv_ResSet_Apply @ 0x1800179C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180015500 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 */

__int64 __fastcall Srv_ResSet_Apply(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_Apply(a1, a2, a2, a3, a4);
  else
    return 2147549183LL;
}
