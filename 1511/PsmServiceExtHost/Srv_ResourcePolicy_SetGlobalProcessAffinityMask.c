/*
 * XREFs of Srv_ResourcePolicy_SetGlobalProcessAffinityMask @ 0x18004C190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Srv_ResourcePolicy_SetGlobalProcessAffinityMask(__int64 a1, int a2, _WORD *a3, unsigned __int64 *a4)
{
  if ( !a3 || !a4 )
    return 2147500035LL;
  if ( a2 != 1 || *a3 )
    return 2147942487LL;
  return ExecutionModel::ResourcePolicyEngine::SetGlobalAffinityMask(
           *((ExecutionModel::ResourcePolicyEngine **)g_pResourcePolicyEngineServerProxy + 12),
           *a4);
}
