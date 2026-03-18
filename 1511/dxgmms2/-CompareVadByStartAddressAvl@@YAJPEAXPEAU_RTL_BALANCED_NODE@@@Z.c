/*
 * XREFs of ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005FC88
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00460A8 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z @ 0x1C0063160 (-FindMappedVaRangeInternal@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadByStartAddressAvl(struct _RTL_BALANCED_NODE **a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rax
  struct _RTL_BALANCED_NODE *v3; // rcx

  v2 = *a1;
  v3 = a2[1].Children[0];
  if ( v2 == v3 )
    return 0LL;
  else
    return v2 < v3 ? -1 : 1;
}
