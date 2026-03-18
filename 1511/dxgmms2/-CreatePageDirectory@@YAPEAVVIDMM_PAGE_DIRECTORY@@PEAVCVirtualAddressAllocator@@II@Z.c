/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FBF0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C003F8B4 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C003FA38 (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        int a3)
{
  char v4; // si
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  VIDMM_PAGE_DIRECTORY *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // r9

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 8) + 40048LL) + 456LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new(0x28uLL, 0x36356956u, PagedPool);
  if ( v7 )
    v12 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, v4, *(_DWORD *)(v6 + 412), a3);
  else
    v12 = 0LL;
  if ( v12 )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v12, a1) >= 0 )
      return v12;
    v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 24) = 3734LL;
    WdLogEvent5_WdAssertion(v19);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v12, a1, 0LL, v20);
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v18 + 24) = 3728LL;
    WdLogEvent5_WdAssertion(v18);
  }
  return 0LL;
}
