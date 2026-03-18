/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063E68 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0052098 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00628E4 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UP.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        DXGK_UPDATEPAGETABLEFLAGS a17)
{
  struct _DXGK_PTE *v17; // r14
  SIZE_T v19; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v20; // rsi
  unsigned int NumPageTableEntries; // r10d
  char v23; // al
  UINT SegmentId; // r9d
  __int64 v25; // r8
  struct _DXGK_PTE *pPageTableEntries64KB; // rcx
  __int64 v27; // rcx
  SIZE_T v28; // rcx
  struct _EPROCESS *v29; // rdx
  unsigned int v30; // esi
  int v31; // ebx
  unsigned int v32; // r14d
  unsigned __int64 v33; // rcx
  int v34; // ebx
  bool v35; // zf
  struct _DXGKARG_BUILDPAGINGBUFFER v39; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v41; // [rsp+298h] [rbp+198h]

  v17 = a10;
  v19 = a14;
  v20 = a4;
  if ( !*((_DWORD *)this + 1616) )
  {
    if ( (*((_BYTE *)this + 40552) & 8) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a12, a3, &v39);
    v41 = a16 << 12;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a12, 0LL, &v39);
      NumPageTableEntries = a9;
      v40[0] = 0LL;
      v40[1] = 0LL;
      v23 = (char)a17;
      v39.UpdatePageTable.Flags = a17;
      v39.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v39.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( (unsigned int)a15 > DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v39.Fill.FillPattern = a13;
        v39.MapApertureSegment.OffsetInPages = v19;
      }
      else
      {
        v39.Transfer.TransferSize = v19;
      }
      SegmentId = a2;
      v39.ReadPhysical.SegmentId = a2;
      v39.Transfer.Destination.SegmentId = a8;
      if ( v17 )
      {
        pPageTableEntries64KB = a11;
        v39.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v17;
      }
      else
      {
        v25 = *((_QWORD *)this + 4999);
        v39.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v40;
        pPageTableEntries64KB = (struct _DXGK_PTE *)v40;
        if ( **(char **)(456LL * a12 + v25 + 424) >= 0 )
          pPageTableEntries64KB = v39.UpdatePageTable.pPageTableEntries64KB;
        v23 = *(_BYTE *)&a17 | 1;
        v39.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v39.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
      v39.UpdatePageTable.FirstPteVirtualAddress = v41;
      v39.Reserved.Reserved[20] = a15;
      if ( v20 )
        v39.TransferVirtual.DestinationPageTable = *((_QWORD *)v20 + 10);
      if ( a6 )
      {
        v27 = *((_QWORD *)a6 + 5);
        if ( v27 )
          v28 = *(_QWORD *)(v27 + 16);
        else
          v28 = *((_QWORD *)a6 + 6);
        v39.Fill.FillSize = v28;
        v39.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v39.UpdatePageTable.hProcess = a3;
      if ( *((_QWORD *)this + 5075) )
      {
        if ( a5 )
          v29 = **(struct _EPROCESS ***)(*(_QWORD *)a5 + 8LL);
        else
          v29 = 0LL;
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v29, &v39.UpdatePageTable, a5, a6, a12);
        v23 = v39.Reserved.Reserved[13];
        NumPageTableEntries = v39.UpdatePageTable.NumPageTableEntries;
        SegmentId = v39.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5079) && !SegmentId && (v23 & 1) == 0 )
      {
        v30 = 0;
        v31 = (v39.Reserved.Reserved[13] & 8) != 0 ? 0x10000 : 4096;
        if ( NumPageTableEntries )
        {
          v32 = 0;
          do
          {
            v33 = *(_QWORD *)(v39.Transfer.Source.SegmentAddress.QuadPart + 16LL * v30);
            if ( (v33 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                (__int64)this,
                (v33 >> 5) & 0x1F,
                *(_QWORD *)(v39.Transfer.Source.SegmentAddress.QuadPart + 16LL * v30 + 8),
                1LL,
                1,
                v39.UpdatePageTable.FirstPteVirtualAddress + v32);
              NumPageTableEntries = v39.UpdatePageTable.NumPageTableEntries;
            }
            ++v30;
            v32 += v31;
          }
          while ( v30 < NumPageTableEntries );
          v17 = a10;
        }
        v20 = a4;
      }
      v34 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v39);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a12, 0LL, &v39, v34, 0, 0LL);
      v35 = v34 == -1071775743;
      v19 = a14;
    }
    while ( v35 );
  }
}
