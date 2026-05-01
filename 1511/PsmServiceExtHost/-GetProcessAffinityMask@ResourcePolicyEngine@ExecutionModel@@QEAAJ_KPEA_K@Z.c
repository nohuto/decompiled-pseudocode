/*
 * XREFs of ?GetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_KPEA_K@Z @ 0x18004CABC
 * Callers:
 *     Srv_ResourcePolicy_GetProcessAffinityMask @ 0x18004BFA0 (Srv_ResourcePolicy_GetProcessAffinityMask.c)
 * Callees:
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::GetProcessAffinityMask(
        ExecutionModel::ResourcePolicyEngine *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  unsigned int v7; // edi

  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                *((ExecutionModel::HostResources **)this + 10),
                                a2);
  v7 = 0;
  if ( HostResourceInfoForHostId )
  {
    if ( *((_DWORD *)HostResourceInfoForHostId + 44) == 1 )
      *a3 = *((_QWORD *)HostResourceInfoForHostId + 21);
    else
      *a3 = *((_QWORD *)this + 11);
  }
  else
  {
    v7 = -2147024894;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 1);
  return v7;
}
