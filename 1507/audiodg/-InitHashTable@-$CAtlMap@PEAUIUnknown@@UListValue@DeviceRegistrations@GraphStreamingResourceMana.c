/*
 * XREFs of ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14000CFA0
 * Callers:
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXXZ @ 0x14000D1C0 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000D2E0 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXI@Z @ 0x140028FA0 (-Rehash@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x14000CEA0 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??_U@YAPEAX_K@Z @ 0x140018AC4 (--_U@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
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
