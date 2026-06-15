/*
 * XREFs of ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x1400046E0
 * Callers:
 *     ?RemoveAll@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXXZ @ 0x1400049B0 (-RemoveAll@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementT.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140004B20 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140028398 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140004790 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

char __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
        void **a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rdi
  void **v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rax

  v4 = a2;
  v5 = a1;
  v6 = *a1;
  if ( v6 )
  {
    operator delete[](v6);
    *v5 = 0LL;
  }
  if ( !a3 )
    goto LABEL_10;
  try
  {
    v7 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v7 = -1LL;
    *v5 = operator new[](v7);
  }
  catch ( ... )
  {
    v5 = a1;
    LODWORD(v4) = a2;
  }
  if ( *v5 )
  {
    memset_0(*v5, 0, 8LL * (unsigned int)v4);
LABEL_10:
    *((_DWORD *)v5 + 4) = v4;
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds(v5);
    return 1;
  }
  return 0;
}
