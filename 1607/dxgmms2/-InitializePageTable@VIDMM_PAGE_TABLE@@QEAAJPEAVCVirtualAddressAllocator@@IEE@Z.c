/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0046868
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0044424 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C004B450 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int VidMmObjects; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v7 = a3;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 40136LL) + 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v10 = *((_QWORD *)a2 + 12) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v11 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v11;
  *(_DWORD *)this = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v9 + 408) << 13)) & 0xE000;
  v12 = 16LL * a3;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new(v12, 0x34356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( v13 )
  {
    memset(v13, 0, 16 * v7);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v9 + 424) + 12LL);
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 16);
      if ( a5 )
      {
        v21 = *(_QWORD *)(v9 + 424);
        if ( *(_DWORD *)(v21 + 12) > v15 )
          v15 = *(_DWORD *)(v21 + 12);
      }
    }
    VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v15, *(_DWORD *)(v10 + 28));
    if ( VidMmObjects < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v22 + 24) = 4490LL;
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
    _InterlockedIncrement(&dword_1C0035688);
    v20 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v20 + 24) = 4457LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
