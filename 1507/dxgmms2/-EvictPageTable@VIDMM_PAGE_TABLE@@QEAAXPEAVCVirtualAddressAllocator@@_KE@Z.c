/*
 * XREFs of ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005F5EC
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

void __fastcall VIDMM_PAGE_TABLE::EvictPageTable(__int64 ***this, struct CVirtualAddressAllocator *a2)
{
  _DWORD *v3; // rcx
  unsigned __int64 v4; // r8
  char v5; // r9
  struct CVirtualAddressAllocator *v6; // r11
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // rdx
  int v9; // r10d
  unsigned int v10; // r9d

  if ( VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
  {
    v7 = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 8);
    v8 = *((_QWORD *)v7 + 4999) + 456LL * ((*v3 >> 7) & 0x1F);
    if ( (**(_DWORD **)(v8 + 424) & 8) != 0 && v5 )
    {
      v9 = (*v3 >> 6) & 1;
      if ( v9 )
        v10 = *(_DWORD *)(v8 + 64);
      else
        v10 = *(_DWORD *)(v8 + 60);
      VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        (VIDMM_PAGE_TABLE *)this,
        v6,
        0,
        v10,
        v4,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)(((unsigned __int8)(8 * (v9 != 0)) ^ 4) & 8 ^ 4));
    }
    *((_DWORD *)this[1] + 19) |= 0x80000u;
    *((_BYTE *)this[1] + 94) = 1;
    VIDMM_GLOBAL::EvictOneAllocation(v7, this[2], 0LL);
    *((_DWORD *)this[1] + 19) &= ~0x80000u;
  }
}
