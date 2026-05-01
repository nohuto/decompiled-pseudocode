/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x18004BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z @ 0x18004D0A8 (-TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z.c)
 *     ?GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x180054140 (-GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(__int64 a1, DevPlat::Shared *a2, unsigned __int64 *a3, int *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v8; // rcx
  unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !g_pResourcePolicyEngineServerProxy )
    return 2147549183LL;
  v9[0] = -1LL;
  result = DevPlat::Shared::GetHostIdFromProcessToken(a2, v9, a3);
  if ( (int)result >= 0 )
  {
    v7 = v9[0];
    v8 = g_pResourcePolicyEngineServerProxy;
    if ( v9[0] != -1LL )
    {
      if ( a4 )
      {
        *a4 = 0;
        ExecutionModel::ResourcePolicyEngine::TrySetAppMemoryUsageLimit(
          *((ExecutionModel::ResourcePolicyEngine **)v8 + 12),
          v7,
          (unsigned __int64)a3,
          a4);
      }
    }
    return 0LL;
  }
  return result;
}
