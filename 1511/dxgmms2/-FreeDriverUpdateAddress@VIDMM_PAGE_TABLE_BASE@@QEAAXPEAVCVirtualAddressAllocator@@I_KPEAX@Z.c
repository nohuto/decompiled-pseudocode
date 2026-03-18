/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4
 * Callers:
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0079F8C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        void *a5)
{
  __int64 v5; // r10
  int v6; // r8d
  __int128 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8

  v5 = *((_QWORD *)a2 + 8);
  if ( (*(_BYTE *)(v5 + 40608) & 8) != 0 || (v6 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, *((struct VIDMM_GLOBAL **)a2 + 8), a4, a5);
  }
  else if ( v6 == 1
         && *(struct CVirtualAddressAllocator **)(v5
                                                + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                + 40088) != a2 )
  {
    *(_QWORD *)&v7 = *((_QWORD *)this + 2) + 128LL;
    *((_QWORD *)&v7 + 1) = *(_QWORD *)v7;
    v8 = **(_QWORD **)v7;
    if ( __PAIR128__(*(_QWORD *)(v8 + 8), *(_QWORD *)(*(_QWORD *)v7 + 8LL)) != v7 )
      __fastfail(3u);
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    *(_QWORD *)(*((_QWORD *)&v7 + 1) + 16LL) = *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
    v9 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v5 + 40048) + 440LL;
    *(_QWORD *)&v7 = *(_QWORD *)(v9 + 8);
    **((_QWORD **)&v7 + 1) = v9;
    *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL) = v7;
    if ( *(_QWORD *)v7 != v9 )
      __fastfail(3u);
    *(_QWORD *)v7 = *((_QWORD *)&v7 + 1);
    *(_QWORD *)(v9 + 8) = *((_QWORD *)&v7 + 1);
  }
}
