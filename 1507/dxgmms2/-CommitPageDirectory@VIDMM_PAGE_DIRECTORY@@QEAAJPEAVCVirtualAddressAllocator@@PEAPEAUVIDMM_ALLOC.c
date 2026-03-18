/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D078
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rcx
  struct VIDMM_ALLOC **v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  char v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 8);
  *(_BYTE *)(v7 + 94) = 0;
  result = VIDMM_GLOBAL::PageInOneAllocation(v8, this[2], 0, 0, &v11, v6);
  if ( v11 )
    result = 3221226029LL;
  if ( (int)result >= 0 )
  {
    v10 = *(unsigned int *)this;
    if ( (v10 & 0x10) != 0 )
      ++*(_QWORD *)(32 * ((v10 >> 7) & 0x1F) + *((_QWORD *)a2 + 12) + 8);
    return 0LL;
  }
  return result;
}
