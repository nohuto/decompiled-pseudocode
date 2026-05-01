/*
 * XREFs of Srv_ResSet_GetProperty @ 0x18004BE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z @ 0x18004D1C4 (-Handle_ResSet_GetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 */

__int64 __fastcall Srv_ResSet_GetProperty(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_GetProperty(a1, a2, a2, a3, a4);
  else
    return 2147549183LL;
}
