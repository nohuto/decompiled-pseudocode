/*
 * XREFs of Srv_ResourcePolicy_GetProcessGroupCount @ 0x18004C050
 * Callers:
 *     <none>
 * Callees:
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

int __fastcall Srv_ResourcePolicy_GetProcessGroupCount(__int64 a1, DevPlat::Shared *a2, unsigned __int64 *a3)
{
  int result; // eax
  int v5; // esi
  __int64 v6; // rdi
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    return -2147467261;
  result = DevPlat::Shared::GetHostIdFromProcessHandle(a2, &v9, a3);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = *((_QWORD *)g_pResourcePolicyEngineServerProxy + 12);
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 40));
    HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                  *(ExecutionModel::HostResources **)(v6 + 80),
                                  v9);
    v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 40);
    LODWORD(v6) = HostResourceInfoForHostId != 0LL;
    LeaveCriticalSection(v8);
    if ( (_DWORD)v6 )
    {
      *(_DWORD *)a3 = 1;
      return v5;
    }
    else
    {
      return -2147024894;
    }
  }
  return result;
}
