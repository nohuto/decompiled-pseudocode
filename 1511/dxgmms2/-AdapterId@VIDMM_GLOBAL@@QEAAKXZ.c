/*
 * XREFs of ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001D79C (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS.c)
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C001D8C8 (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C003CD00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::AdapterId(VIDMM_GLOBAL *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 3) + 184LL);
}
