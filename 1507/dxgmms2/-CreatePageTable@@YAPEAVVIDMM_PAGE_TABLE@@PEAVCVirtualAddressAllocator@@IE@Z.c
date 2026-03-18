/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z @ 0x1C005E828
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z @ 0x1C0060824 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z.c)
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
  __int64 v12; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
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
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = 3610LL;
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
  v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 8) + 39992LL) + 456 * v4 + 60);
  if ( a3 )
    v14 >>= 4;
  if ( (int)VIDMM_PAGE_TABLE::InitializePageTable(v11, a1, v14, a3) < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 3625LL;
    WdLogEvent5_WdAssertion(v19);
    VIDMM_PAGE_TABLE::DestroyPageTable(v11, a1, 0LL);
    return 0LL;
  }
  return v11;
}
