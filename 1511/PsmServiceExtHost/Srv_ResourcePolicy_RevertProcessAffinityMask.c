/*
 * XREFs of Srv_ResourcePolicy_RevertProcessAffinityMask @ 0x18004C100
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC (-GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

int __fastcall Srv_ResourcePolicy_RevertProcessAffinityMask(__int64 a1, DevPlat::Shared *a2, unsigned __int64 *a3)
{
  int result; // eax
  __int64 v4; // rdi
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v7; // rcx
  int v8; // edi
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  result = DevPlat::Shared::GetHostIdFromProcessHandle(a2, &v9, a3);
  if ( result >= 0 )
  {
    v4 = *((_QWORD *)g_pResourcePolicyEngineServerProxy + 12);
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 40));
    HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                  *(ExecutionModel::HostResources **)(v4 + 80),
                                  v9);
    if ( HostResourceInfoForHostId )
    {
      v6 = ExecutionModel::HostResourceInfo::SetAffinityMask(
             (__int64)HostResourceInfoForHostId,
             *(_QWORD *)(v4 + 88),
             0);
      v7 = (struct _RTL_CRITICAL_SECTION *)(v4 + 40);
      v8 = v6;
      LeaveCriticalSection(v7);
      return v8;
    }
    else
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 40));
      return -2147024894;
    }
  }
  return result;
}
