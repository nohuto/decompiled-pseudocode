/*
 * XREFs of Srv_GetResourcePolicyInformation @ 0x180005760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x1800057E0 (-GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_GetResourcePolicyInformation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rdi

  v3 = *(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pResourcePolicyEngineServerProxy + 13) + 32LL);
  if ( v3 == ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation )
    return ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation(*((_QWORD *)g_pResourcePolicyEngineServerProxy
                                                                             + 13));
  else
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v3)(
             *((_QWORD *)g_pResourcePolicyEngineServerProxy + 13),
             a2,
             a3);
}
