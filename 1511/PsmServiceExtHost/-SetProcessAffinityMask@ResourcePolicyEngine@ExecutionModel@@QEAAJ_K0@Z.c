/*
 * XREFs of ?SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z @ 0x18004D02C
 * Callers:
 *     Srv_ResourcePolicy_SetProcessAffinityMask @ 0x18004C1D0 (Srv_ResourcePolicy_SetProcessAffinityMask.c)
 * Callees:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::SetProcessAffinityMask(
        ExecutionModel::ResourcePolicyEngine *this,
        __int64 a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  unsigned int v8; // edi

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                *((ExecutionModel::HostResources **)this + 10),
                                a2);
  if ( HostResourceInfoForHostId )
    v8 = ExecutionModel::HostResourceInfo::SetAffinityMask((__int64)HostResourceInfoForHostId, a3, 1);
  else
    v8 = -2147024894;
  LeaveCriticalSection(v3);
  return v8;
}
