/*
 * XREFs of ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C001C358
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0015134 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C00113FC (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 */

struct _VIDMM_GLOBAL_ALLOC *__fastcall VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(VIDMM_MAPPED_VA_RANGE *this)
{
  struct _VIDMM_GLOBAL_ALLOC *result; // rax

  if ( (*((_BYTE *)this + 64) & 0xF) == 3 )
    return (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 7);
  result = VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(this);
  if ( result )
    return **(struct _VIDMM_GLOBAL_ALLOC ***)result;
  return result;
}
