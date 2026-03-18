/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0060C90
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C0063D48 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0052098 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

char __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  char v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx

  v5 = a3;
  if ( *((_QWORD *)a2 + 5079) && a3 < a3 + a4 )
  {
    v8 = 16LL * a3;
    v9 = a4;
    do
    {
      v10 = *((_QWORD *)this + 3);
      v11 = *(_QWORD *)(v8 + v10);
      if ( (v11 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory((__int64)a2, (v11 >> 5) & 0x1F, *(_QWORD *)(v8 + v10 + 8), 1LL, 1, 0LL);
      v8 += 16LL;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( (unsigned int)v5 < (unsigned int)v5 + a4 )
  {
    v13 = 16 * v5;
    v14 = a4;
    do
    {
      v15 = *((_QWORD *)this + 3);
      if ( (*(_BYTE *)(v13 + v15) & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v12 = 1;
        *(_QWORD *)(v13 + v15) = 0LL;
        *(_QWORD *)(v13 + *((_QWORD *)this + 3) + 8) = 0LL;
      }
      v13 += 16LL;
      --v14;
    }
    while ( v14 );
  }
  return v12;
}
