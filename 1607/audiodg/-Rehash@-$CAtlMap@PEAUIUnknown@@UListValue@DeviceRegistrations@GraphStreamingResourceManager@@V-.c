/*
 * XREFs of ?Rehash@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXI@Z @ 0x1400285F0
 * Callers:
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400043B0 (-FreeNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140004420 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140001B9C (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140004308 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceMana.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140027CF0 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  void *v4; // rsi
  __int64 i; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v10; // [rsp+58h] [rbp+10h]
  void *v11; // [rsp+60h] [rbp+18h]

  v10 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
    v10 = v2;
  }
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      try
      {
        v4 = operator new[](saturated_mul(v2, 8uLL));
        v11 = v4;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v10;
        v4 = v11;
      }
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v4, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 16); i = (unsigned int)(i + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v6 )
        {
          do
          {
            v7 = *(_QWORD *)(v6 + 32);
            v8 = *(_DWORD *)(v6 + 40) % v2;
            *(_QWORD *)(v6 + 32) = *((_QWORD *)v4 + v8);
            *((_QWORD *)v4 + (unsigned int)v8) = v6;
            v6 = v7;
          }
          while ( v7 );
        }
      }
      operator delete[](*(void **)v3);
      *(_QWORD *)v3 = v4;
      *(_DWORD *)(v3 + 16) = v2;
      ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds(v3);
    }
    else
    {
      ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
