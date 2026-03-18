/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C0063D48
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0060C90 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  struct VIDMM_GLOBAL *v8; // r15
  VIDMM_PAGE_TABLE *v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r10
  char v13; // r11
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int updated; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v4 = a3;
  if ( (a3 & 0xFFF) != 0 || (a3 >> 12) + a4 <= a3 >> 12 )
    return 3221225485LL;
  v8 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
    return 0LL;
  v14 = *(_DWORD *)(v12 + 56) & (v11 - 1);
  v15 = v10 & *(_DWORD *)(v12 + 56);
  if ( (v13 & 0x40) != 0 )
  {
    v15 >>= 4;
    v14 >>= 4;
    v4 &= 0xFFFFFFFFFFFF0000uLL;
  }
  v16 = v14 - v15;
  VIDMM_PAGE_TABLE::InvalidatePageTable(v9, v8, v15, v16 + 1);
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)a2 + 30) & 4) == 0 )
    return 0LL;
  updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v15,
              v16 + 1,
              v4 >> 12,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)((8 * ((*(_BYTE *)this & 0x40) != 0)) & 8));
  if ( updated >= 0 )
    return 0LL;
  v22 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
  *(_QWORD *)(v22 + 24) = 4881LL;
  WdLogEvent5_WdAssertion(v22);
  return (unsigned int)updated;
}
