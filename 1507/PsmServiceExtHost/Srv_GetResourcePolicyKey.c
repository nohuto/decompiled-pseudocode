/*
 * XREFs of Srv_GetResourcePolicyKey @ 0x18001DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x18001DDA0 (-GetResourcePolicyKey@ResourcePolicyStore@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_GetResourcePolicyKey(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        enum RmResourceSetType *a4)
{
  __int64 (__fastcall *v4)(ExecutionModel::ResourcePolicyStore *, const unsigned __int16 *, __int64, enum RmResourceSetType *); // rdi

  v4 = *(__int64 (__fastcall **)(ExecutionModel::ResourcePolicyStore *, const unsigned __int16 *, __int64, enum RmResourceSetType *))(**((_QWORD **)g_pResourcePolicyEngineServerProxy + 13) + 24LL);
  if ( v4 == ExecutionModel::ResourcePolicyStore::GetResourcePolicyKey )
    return ExecutionModel::ResourcePolicyStore::GetResourcePolicyKey(
             *((ExecutionModel::ResourcePolicyStore **)g_pResourcePolicyEngineServerProxy + 13),
             a2,
             a3,
             a4);
  else
    return v4(
             *((ExecutionModel::ResourcePolicyStore **)g_pResourcePolicyEngineServerProxy + 13),
             a2,
             (unsigned int)a3,
             a4);
}
