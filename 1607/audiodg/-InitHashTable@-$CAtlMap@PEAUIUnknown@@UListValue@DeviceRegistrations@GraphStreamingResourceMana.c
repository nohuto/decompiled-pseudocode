/*
 * XREFs of ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140004308
 * Callers:
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXXZ @ 0x140004520 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x140004640 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXI@Z @ 0x1400285F0 (-Rehash@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140001B9C (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

char __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::InitHashTable(
        void **a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rax

  v4 = a2;
  v5 = (__int64)a1;
  v6 = *a1;
  if ( v6 )
  {
    operator delete[](v6);
    *(_QWORD *)v5 = 0LL;
  }
  if ( !a3 )
    goto LABEL_10;
  try
  {
    v7 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v7 = -1LL;
    *(_QWORD *)v5 = operator new[](v7);
  }
  catch ( ... )
  {
    v5 = (__int64)a1;
    LODWORD(v4) = a2;
  }
  if ( *(_QWORD *)v5 )
  {
    memset_0(*(void **)v5, 0, 8LL * (unsigned int)v4);
LABEL_10:
    *(_DWORD *)(v5 + 16) = v4;
    ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds(v5);
    return 1;
  }
  return 0;
}
