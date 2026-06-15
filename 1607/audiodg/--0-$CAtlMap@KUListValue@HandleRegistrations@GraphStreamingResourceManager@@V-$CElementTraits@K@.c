/*
 * XREFs of ??0?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x140004A74
 * Callers:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003930 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140004790 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5)
{
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 16) = 17;
  *(_DWORD *)(a1 + 52) = 10;
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds(a1);
  return v5;
}
