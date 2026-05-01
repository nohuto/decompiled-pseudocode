/*
 * XREFs of ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010690
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800050C8 (RmpEnforcementArmWorkerForActivityHost.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResources(ExecutionModel::ResourceSet *this)
{
  volatile signed __int32 *v2; // rbx
  __int64 (__fastcall *v3)(ExecutionModel::ResourceSet *); // rsi
  int v4; // eax
  unsigned int v5; // edi

  v2 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((_QWORD *)this + 4) && !*((_BYTE *)this - 1356) )
  {
    v2 = (volatile signed __int32 *)*((_QWORD *)this + 4);
    _InterlockedIncrement(v2 + 4);
  }
  v3 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*((_QWORD *)this - 171) + 32LL);
  if ( v3 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
    v4 = ExecutionModel::ResourceSet::ReleaseResourcesInternal((ExecutionModel::ResourceSet *)((char *)this - 1368));
  else
    v4 = v3((ExecutionModel::ResourceSet *)((char *)this - 1368));
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v2 )
      RmpEnforcementArmWorkerForActivityHost((__int64)v2);
    v5 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v2 )
    RmpObjectRelease(v2);
  return v5;
}
