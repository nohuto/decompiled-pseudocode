/*
 * XREFs of ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C000EE34
 * Callers:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C000E958 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C000EE00 (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
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
