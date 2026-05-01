/*
 * XREFs of ?ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x1800454E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18003E654 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ForceReleaseResources(unsigned __int64 this)
{
  __int64 v1; // rdx
  struct ExecutionModel::ResourceSet *v2; // rbx
  ExecutionModel::ResourceManager *v3; // rcx
  unsigned int v4; // ebx

  v1 = this & ((unsigned __int128)-(__int128)(this - 1368) >> 64);
  if ( v1 )
    v2 = (struct ExecutionModel::ResourceSet *)(v1 - 1368);
  else
    v2 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = ExecutionModel::ResourceManager::UnapplyResourceSet_Modern(v3, v2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v4;
}
