/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0046AA0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C004B970 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-18h]

  v18 = v4;
  v8 = a3;
  if ( *((_QWORD *)a2 + 5119) && a3 < a3 + a4 )
  {
    v9 = 16LL * a3;
    v10 = a4;
    do
    {
      v11 = *((_QWORD *)this + 3);
      v12 = *(_QWORD *)(v11 + v9);
      if ( (v12 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v12 >> 5) & 0x1F, *(_QWORD *)(v11 + v9 + 8), 1LL, 1, 0LL, v18);
      v9 += 16LL;
      --v10;
    }
    while ( v10 );
  }
  v13 = 0;
  if ( (unsigned int)v8 < (unsigned int)v8 + a4 )
  {
    v14 = 16 * v8;
    v15 = a4;
    do
    {
      v16 = (_QWORD *)(v14 + *((_QWORD *)this + 3));
      if ( (*(_BYTE *)v16 & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v13 = 1;
        *v16 = 0LL;
        *(_QWORD *)(v14 + *((_QWORD *)this + 3) + 8) = 0LL;
      }
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
  }
  return v13;
}
