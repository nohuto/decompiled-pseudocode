/*
 * XREFs of ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00934B0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093730 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000F898 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0046DC8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::EnsureResident(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        struct VIDMM_ALLOC **a4)
{
  VIDMM_PAGE_TABLE *v5; // rcx
  struct VIDMM_ALLOC **v6; // r9
  struct CVirtualAddressAllocator *v7; // r10
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax

  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v9 = VIDMM_PAGE_TABLE::CommitPageTable(v5, v7, v6);
    if ( v9 < 0 )
    {
      v10 = WdLogNewEntry5_WdWarning(v8);
      WdLogEvent5_WdWarning(v10);
      return (unsigned int)v9;
    }
    *(_DWORD *)this &= ~0x10000u;
  }
  return 0LL;
}
