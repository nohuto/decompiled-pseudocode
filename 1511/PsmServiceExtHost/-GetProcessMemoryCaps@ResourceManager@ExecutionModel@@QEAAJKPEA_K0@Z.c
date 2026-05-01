/*
 * XREFs of ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18003CB54
 * Callers:
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z @ 0x18003CBD0 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z.c)
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetProcessMemoryCaps(
        ExecutionModel::ResourceManager *this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rdi
  __int64 ProcessResourceSet; // rax

  v7 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  if ( ProcessResourceSet )
    v7 = *(_QWORD *)(ProcessResourceSet + 1464);
  if ( a3 )
    *a3 = v7;
  if ( a4 )
    *a4 = v7;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
