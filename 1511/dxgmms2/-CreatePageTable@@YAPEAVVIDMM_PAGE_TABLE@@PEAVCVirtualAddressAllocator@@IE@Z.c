/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003CAA4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003D644 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z.c)
 */

struct VIDMM_PAGE_TABLE *__fastcall CreatePageTable(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v4; // rsi
  VIDMM_PAGE_TABLE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  VIDMM_PAGE_TABLE *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = a2;
  v6 = (VIDMM_PAGE_TABLE *)operator new(0x20uLL, 0x33356956u, PagedPool);
  v11 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x20uLL);
    *(_DWORD *)v11 ^= (*(_DWORD *)v11 ^ ((_DWORD)v4 << 7)) & 0xF80;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 8) + 40048LL) + 456 * v4 + 60);
    if ( a3 )
      v12 >>= 4;
    if ( (int)VIDMM_PAGE_TABLE::InitializePageTable(v11, a1, v12, a3) >= 0 )
      return v11;
    v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 24) = 3605LL;
    WdLogEvent5_WdAssertion(v19);
    VIDMM_PAGE_TABLE::DestroyPageTable(v11, a1, 0LL);
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v18 + 24) = 3590LL;
    WdLogEvent5_WdAssertion(v18);
  }
  return 0LL;
}
