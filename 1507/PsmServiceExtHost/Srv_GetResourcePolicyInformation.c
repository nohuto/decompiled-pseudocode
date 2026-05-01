/*
 * XREFs of Srv_GetResourcePolicyInformation @ 0x180017240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x1800170F0 (-GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_GetResourcePolicyInformation(__int64 a1, unsigned int a2, _OWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, int, _OWORD *); // rdi

  v3 = *(__int64 (__fastcall **)(__int64, int, _OWORD *))(**((_QWORD **)g_pResourcePolicyEngineServerProxy + 13) + 32LL);
  if ( v3 == ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation )
    return ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation(
             *((_QWORD *)g_pResourcePolicyEngineServerProxy + 13),
             a2,
             a3);
  else
    return v3(*((_QWORD *)g_pResourcePolicyEngineServerProxy + 13), a2, a3);
}
