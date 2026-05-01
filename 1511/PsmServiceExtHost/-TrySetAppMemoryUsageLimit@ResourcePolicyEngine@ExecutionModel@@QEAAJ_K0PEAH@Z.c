/*
 * XREFs of ?TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z @ 0x18004D0A8
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18004BB70 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::TrySetAppMemoryUsageLimit(
        ExecutionModel::ResourcePolicyEngine *this,
        __int64 a2,
        unsigned __int64 a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  unsigned int v10; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                *((ExecutionModel::HostResources **)this + 10),
                                a2);
  if ( HostResourceInfoForHostId )
    v10 = ExecutionModel::HostResourceInfo::HostTrySetCustomMemoryLimit(HostResourceInfoForHostId, a3, a4);
  else
    v10 = -2147024894;
  LeaveCriticalSection(v4);
  return v10;
}
