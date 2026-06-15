/*
 * XREFs of ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x140026638
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$1 @ 0x14001B5EC (_PublishDeviceGraphWnfState_--_1_--dtor$1.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$2 @ 0x14001B5F8 (_PublishDeviceGraphWnfState_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140025E3C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140026594 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140026608 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14002A1EC (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14002A3B4 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14002A5B4 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::~CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>(
        __int64 a1)
{
  __int64 i; // rbp
  __int64 v3; // r14
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // eax
  ATL::CAtlPlex **v9; // rcx

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v3 )
      {
        v4 = v3;
        v5 = (_QWORD *)(v3 + 56);
        v3 = *(_QWORD *)(v3 + 56);
        ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v4 + 8);
        *v5 = *(_QWORD *)(a1 + 64);
        v6 = --*(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 64) = v4;
        if ( v6 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
        {
          v7 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
          ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
            a1,
            v7);
        }
        if ( !*(_QWORD *)(a1 + 8) )
          ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(a1);
      }
    }
  }
  operator delete[](*(void **)a1);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v8 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      a1,
      v8,
      0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = *(ATL::CAtlPlex ***)(a1 + 56);
  if ( v9 )
  {
    ATL::CAtlPlex::FreeDataChain(v9);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
}
