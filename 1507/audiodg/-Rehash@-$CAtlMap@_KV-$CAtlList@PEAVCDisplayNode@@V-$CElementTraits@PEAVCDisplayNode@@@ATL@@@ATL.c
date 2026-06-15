/*
 * XREFs of ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14002A5B4
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x140026638 (--1-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140033EB4 (-NewNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x14000CEA0 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??_U@YAPEAX_K@Z @ 0x140018AC4 (--_U@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x14002A1EC (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14002A3B4 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
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
            v7 = *(_QWORD *)(v6 + 56);
            v8 = *(_DWORD *)(v6 + 64) % v2;
            *(_QWORD *)(v6 + 56) = *((_QWORD *)v4 + v8);
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
      ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
