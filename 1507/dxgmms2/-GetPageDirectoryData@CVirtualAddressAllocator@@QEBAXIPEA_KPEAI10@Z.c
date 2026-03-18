/*
 * XREFs of ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C0060328
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetSegmentAddress@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C000EDC4 (-GetSegmentAddress@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 */

void __fastcall CVirtualAddressAllocator::GetPageDirectoryData(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r10
  CVirtualAddressAllocator *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax

  v6 = 0LL;
  v7 = this;
  v8 = (unsigned int)a2;
  v9 = *((_QWORD *)this + 12) + 32LL * (unsigned int)a2;
  if ( v9 && (this = *(CVirtualAddressAllocator **)v9) != 0LL && VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    *a3 = *(_QWORD *)(v9 + 8);
    *a4 = *(_DWORD *)(v9 + 16);
    *a6 = VIDMM_PAGE_TABLE_BASE::GetSegmentAddress(this);
    *a5 = *(_DWORD *)(v9 + 24);
  }
  else
  {
    *a4 = v6;
    *a6 = v6;
    *a5 = v6;
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = v7;
    *(_QWORD *)(v10 + 32) = v8;
    WdLogEvent5_WdAssertion(v10);
  }
}
