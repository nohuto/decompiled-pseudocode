/*
 * XREFs of ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140025E3C
 * Callers:
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x14000CF1C (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXXZ @ 0x14000D1C0 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@.c)
 *     ?RemoveAll@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXXZ @ 0x14000D5E0 (-RemoveAll@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementT.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140010EFC (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140026594 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140026608 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x140026638 (--1-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlPlex::FreeDataChain(ATL::CAtlPlex **this)
{
  ATL::CAtlPlex *v1; // rbx

  if ( this )
  {
    do
    {
      v1 = *this;
      free(this);
      this = (ATL::CAtlPlex **)v1;
    }
    while ( v1 );
  }
}
