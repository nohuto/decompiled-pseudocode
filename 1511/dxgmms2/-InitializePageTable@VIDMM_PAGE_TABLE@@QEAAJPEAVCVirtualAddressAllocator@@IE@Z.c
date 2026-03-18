/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003D644
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003CAA4 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C003DBCC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  int v10; // ecx
  SIZE_T v11; // rax
  PVOID v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int VidMmObjects; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // rax

  v6 = a3;
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 40048LL) + 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v9 = *((_QWORD *)a2 + 12) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v10 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v10;
  *(_DWORD *)this = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v8 + 408) << 13)) & 0xE000;
  v11 = 16LL * a3;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v11 = -1LL;
  v12 = operator new(v11, 0x34356956u, PagedPool);
  *((_QWORD *)this + 3) = v12;
  if ( v12 )
  {
    memset(v12, 0, 16 * v6);
    if ( a4 )
      v14 = *(_DWORD *)(*(_QWORD *)(v8 + 424) + 12LL);
    else
      v14 = *(_DWORD *)(v8 + 16);
    VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v14, *(_DWORD *)(v9 + 28));
    if ( VidMmObjects < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      *(_QWORD *)(v22 + 24) = 3558LL;
      WdLogEvent5_WdAssertion(v22);
      return (unsigned int)VidMmObjects;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C002F608);
    v21 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v21 + 24) = 3537LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
