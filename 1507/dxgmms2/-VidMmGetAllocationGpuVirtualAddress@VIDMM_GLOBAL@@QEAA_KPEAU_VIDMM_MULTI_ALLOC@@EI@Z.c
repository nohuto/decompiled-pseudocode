/*
 * XREFs of ?VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z @ 0x1C005564C
 * Callers:
 *     VidMmGetAllocationGpuVirtualAddress @ 0x1C000E680 (VidMmGetAllocationGpuVirtualAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmGetAllocationGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        char a3,
        int a4)
{
  if ( a3 )
    return *((_QWORD *)a2 + 18);
  else
    return VIDMM_ALLOC::GetGpuVirtualAddress(a2, a4);
}
