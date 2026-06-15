/*
 * XREFs of ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x14000CF1C
 * Callers:
 *     ??1CpuManager@@UEAA@XZ @ 0x140017078 (--1CpuManager@@UEAA@XZ.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140027988 (-FreeNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@P.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140025E3C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::FreePlexes(
        __int64 a1)
{
  ATL::CAtlPlex *v2; // rcx

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(ATL::CAtlPlex **)(a1 + 56);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
