/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063E68 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 * Callees:
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C004DD74 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C005FA20 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        struct _MDL *a5)
{
  struct VIDMM_GLOBAL *v5; // r10
  unsigned int v7; // edx
  int v8; // eax
  unsigned __int64 GpuVirtualAddress; // rax
  CVirtualAddressAllocator *v10; // r9

  v5 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( (*((_BYTE *)v5 + 40552) & 8) != 0 || (v7 = *(_DWORD *)this, (v8 = (int)(*(_DWORD *)this << 16) >> 29) == 0) )
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress((SIZE_T **)this, v5, a4, a5);
  }
  else if ( v8 == 1 && *((struct CVirtualAddressAllocator **)v5 + ((v7 >> 7) & 0x1F) + 5004) != a2 )
  {
    GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 2), (v7 >> 7) & 0x1F);
    if ( GpuVirtualAddress )
      CVirtualAddressAllocator::FreeVirtualAddressRange(v10, GpuVirtualAddress);
  }
}
