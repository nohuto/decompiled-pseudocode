/*
 * XREFs of ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18002C698
 * Callers:
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002C728 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetProcessMemoryCaps(
        ExecutionModel::ResourceManager *this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v8; // rsi
  __int64 ProcessResourceSet; // rax

  v8 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(*((_QWORD *)this + 28), a2);
  if ( ProcessResourceSet )
    v8 = *(_QWORD *)(ProcessResourceSet + 1488);
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = v8;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
