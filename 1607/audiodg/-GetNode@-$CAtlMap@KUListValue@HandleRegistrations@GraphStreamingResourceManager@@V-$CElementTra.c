/*
 * XREFs of ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140004A40
 * Callers:
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140003F90 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400040C0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 result; // rax
  __int64 v7; // rdx

  *a4 = a2;
  *a3 = a2 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v7 = 0LL;
  *a5 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 40) != *a4 || *(_DWORD *)result != a2 )
  {
    v7 = result;
    result = *(_QWORD *)(result + 32);
    if ( !result )
      return 0LL;
  }
  *a5 = v7;
  return result;
}
