/*
 * XREFs of ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D100
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  struct VIDMM_ALLOC **v5; // r8
  __int64 v6; // r10
  unsigned int v7; // eax
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    *(_BYTE *)(*(_QWORD *)(v4 + 8) + 94LL) = 0;
    v7 = VIDMM_GLOBAL::PageInOneAllocation(v6, *(struct VIDMM_ALLOC **)(v4 + 16), 0, 0, &v9, v5);
    if ( v9 )
      return (unsigned int)-1073741267;
    return v7;
  }
  return v3;
}
