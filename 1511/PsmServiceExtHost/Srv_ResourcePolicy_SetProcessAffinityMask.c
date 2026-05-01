/*
 * XREFs of Srv_ResourcePolicy_SetProcessAffinityMask @ 0x18004C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z @ 0x18004D02C (-SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

int __fastcall Srv_ResourcePolicy_SetProcessAffinityMask(
        __int64 a1,
        DevPlat::Shared *a2,
        unsigned __int64 *a3,
        _WORD *a4,
        unsigned __int64 *a5)
{
  int result; // eax
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !a4 )
    return -2147467261;
  v6 = a5;
  if ( !a5 )
    return -2147467261;
  if ( (_DWORD)a3 != 1 || *a4 )
    return -2147024809;
  result = DevPlat::Shared::GetHostIdFromProcessHandle(a2, &v7, a3);
  if ( result >= 0 )
    return ExecutionModel::ResourcePolicyEngine::SetProcessAffinityMask(
             *((ExecutionModel::ResourcePolicyEngine **)g_pResourcePolicyEngineServerProxy + 12),
             v7,
             *v6);
  return result;
}
