/*
 * XREFs of MergeAllocationPendingVaRangeList @ 0x1C008A0CC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

__int64 __fastcall MergeAllocationPendingVaRangeList(CVirtualAddressAllocator *this, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)(a2 + 144);
  while ( (_QWORD *)*v3 != v3 )
  {
    result = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               this,
               *(struct VIDMM_VAD **)(*v3 - 24LL),
               (*(_DWORD *)(*v3 - 24LL + 64) >> 4) & 0x3F,
               0LL,
               (struct VIDMM_MAPPED_VA_RANGE *)(*v3 - 24LL));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
