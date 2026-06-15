/*
 * XREFs of ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140027124
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004240 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140027940 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition(
        __int64 *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( !a1[1] )
    return 0LL;
  v2 = *((_DWORD *)a1 + 4);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  v4 = *a1;
  while ( !*(_QWORD *)(v4 + 8 * v3) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)(v4 + 8 * v3);
}
