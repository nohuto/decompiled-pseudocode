/*
 * XREFs of ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C004AE68
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093500 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093730 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093948 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_DIRECTORY::SetPageTableInPde(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r11

  v3 = 2LL * a3;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a3)
                                                                          + 8LL)
                                                              + 144LL) >> 12;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 8 * v3) ^ (32
                                                                                               * *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 12) + 28))) & 0x3E0;
  if ( (**(_DWORD **)(*((_QWORD *)this + 4) + 8LL * a3) & 0x40) != 0 )
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a3) = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a3) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
  else
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a3) &= 0xFFFFFFFFFFF9FFFFuLL;
}
