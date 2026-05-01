/*
 * XREFs of ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000E760
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800201A0 (RmpEnforcementArmWorkerForActivityHost.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResources(ExecutionModel::ResourceSet *this)
{
  volatile signed __int32 *v2; // rbx
  __int64 (__fastcall *v3)(ExecutionModel::ResourceSet *, char); // rsi
  int v4; // eax
  unsigned int v5; // edi

  v2 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((_QWORD *)this + 4) && !*((_BYTE *)this - 1356) )
  {
    v2 = (volatile signed __int32 *)*((_QWORD *)this + 4);
    _InterlockedIncrement(v2 + 4);
  }
  v3 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, char))(*((_QWORD *)this - 171) + 32LL);
  if ( v3 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
    v4 = ExecutionModel::ResourceSet::ReleaseResourcesInternal((ExecutionModel::ResourceSet *)((char *)this - 1368), 0);
  else
    v4 = v3((ExecutionModel::ResourceSet *)((char *)this - 1368), 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v2 )
      RmpEnforcementArmWorkerForActivityHost(v2);
    v5 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v2 )
    RmpObjectRelease((PVOID)v2);
  return v5;
}
