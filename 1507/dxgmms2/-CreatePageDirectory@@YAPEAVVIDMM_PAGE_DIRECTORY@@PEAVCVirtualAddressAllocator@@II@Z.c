/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005E758
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C005C46C (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060648 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
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
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 8) + 39992LL) + 456LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new(0x28uLL, 0x36356956u, PagedPool);
  if ( v7 )
    v12 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, v4, *(_DWORD *)(v6 + 412), a3);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 3748LL;
    WdLogEvent5_WdAssertion(v13);
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v12, a1) < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 3754LL;
    WdLogEvent5_WdAssertion(v19);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v12, a1, 0LL);
    return 0LL;
  }
  return v12;
}
