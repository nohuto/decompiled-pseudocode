/*
 * XREFs of Srv_ResSet_SetProperty @ 0x1800170A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 */

__int64 __fastcall Srv_ResSet_SetProperty(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_SetProperty(a1, a2, a2, a3, a4);
  else
    return 2147549183LL;
}
