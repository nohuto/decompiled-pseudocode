/*
 * XREFs of ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0014E18
 * Callers:
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062E54 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::EvictRootPageTable(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  VIDMM_PAGE_DIRECTORY *v3; // r10

  v3 = *(VIDMM_PAGE_DIRECTORY **)(32LL * a2 + *((_QWORD *)this + 12));
  if ( v3 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v3, this, 0LL, 1u, a3);
}
