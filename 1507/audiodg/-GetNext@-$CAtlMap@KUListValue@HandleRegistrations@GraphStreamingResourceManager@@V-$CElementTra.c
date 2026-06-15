/*
 * XREFs of ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x140027A58
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x14000CE20 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140028260 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( !v5 )
    {
      v5 = 0LL;
      v6 = (unsigned int)(*(_DWORD *)(v2 + 40) % *(_DWORD *)(a1 + 16) + 1);
      do
      {
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 16) )
          break;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v6) )
          v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( !v5 );
    }
    v3 = v5;
  }
  result = v2;
  *a2 = v3;
  return result;
}
