/*
 * XREFs of ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C0011778
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0022DB0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00115C0 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C00314A4 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  int v5; // r10d

  v5 = DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(this, 0x28uLL, a3, a4);
  if ( v5 >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPool::UseSpace(*a3, 0x28uLL);
    *((_BYTE *)*a3 + 64) = 0;
  }
  return (unsigned int)v5;
}
