/*
 * XREFs of ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C000EE00
 * Callers:
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C000EE34 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005C514 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_ALLOC *__fastcall VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(VIDMM_MAPPED_VA_RANGE *this)
{
  switch ( (int)(*((_DWORD *)this + 16) << 28) >> 28 )
  {
    case 1:
      return (struct VIDMM_ALLOC *)*((_QWORD *)this + 7);
    case 4:
      return *(struct VIDMM_ALLOC **)(*((_QWORD *)this + 7) + 64LL);
    case 5:
      return *(struct VIDMM_ALLOC **)(*((_QWORD *)this + 7) + 16LL);
  }
  return 0LL;
}
