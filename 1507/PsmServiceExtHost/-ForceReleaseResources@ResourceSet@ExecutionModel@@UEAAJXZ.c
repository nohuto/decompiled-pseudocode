/*
 * XREFs of ?ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180040500
 * Callers:
 *     <none>
 * Callees:
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ForceReleaseResources(unsigned __int64 this)
{
  ExecutionModel::ResourceManager *v1; // rdi
  __int64 v2; // rdx
  struct ExecutionModel::ResourceSet *v3; // rbx
  unsigned int v4; // ebx

  v1 = *(ExecutionModel::ResourceManager **)(this - 1344);
  v2 = this & ((unsigned __int128)-(__int128)(this - 1368) >> 64);
  if ( v2 )
    v3 = (struct ExecutionModel::ResourceSet *)(v2 - 1368);
  else
    v3 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = ExecutionModel::ResourceManager::UnapplyResourceSet_Modern(v1, v3);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v4;
}
