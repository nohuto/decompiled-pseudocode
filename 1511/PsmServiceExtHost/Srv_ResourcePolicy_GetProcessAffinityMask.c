/*
 * XREFs of Srv_ResourcePolicy_GetProcessAffinityMask @ 0x18004BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_KPEA_K@Z @ 0x18004CABC (-GetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_KPEA_K@Z.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

int __fastcall Srv_ResourcePolicy_GetProcessAffinityMask(
        __int64 a1,
        DevPlat::Shared *a2,
        unsigned __int64 *a3,
        _WORD *a4,
        unsigned __int64 *a5)
{
  int result; // eax
  unsigned __int64 *v8; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
    return -2147467261;
  if ( !a4 )
    return -2147467261;
  v8 = a5;
  if ( !a5 )
    return -2147467261;
  if ( !*(_DWORD *)a3 )
    return -2147024809;
  result = DevPlat::Shared::GetHostIdFromProcessHandle(a2, &v12, a3);
  if ( result >= 0 )
  {
    result = ExecutionModel::ResourcePolicyEngine::GetProcessAffinityMask(
               *((ExecutionModel::ResourcePolicyEngine **)g_pResourcePolicyEngineServerProxy + 12),
               v12,
               v11);
    v9 = result;
    if ( result >= 0 )
    {
      v10 = v11[0];
      *(_DWORD *)a3 = 1;
      *a4 = 0;
      *v8 = v10;
      return v9;
    }
  }
  return result;
}
