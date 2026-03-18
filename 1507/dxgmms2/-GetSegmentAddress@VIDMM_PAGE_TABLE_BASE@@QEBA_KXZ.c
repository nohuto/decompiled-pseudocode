/*
 * XREFs of ?GetSegmentAddress@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C000EDC4
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C0060328 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentAddress(VIDMM_PAGE_TABLE_BASE *this)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v1[16] + 56LL) & 0x1000) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v1[12] + 8LL) + 24LL) + 88LL))(
             *(_QWORD *)(*(_QWORD *)(v1[12] + 8LL) + 24LL),
             *(_QWORD *)(v1[12] + 24LL));
  else
    return v1[17];
}
