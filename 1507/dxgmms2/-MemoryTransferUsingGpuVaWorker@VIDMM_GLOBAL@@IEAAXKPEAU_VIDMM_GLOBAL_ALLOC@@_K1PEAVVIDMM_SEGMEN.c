/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F940 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004FDA8 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     Template_pppxxq @ 0x1C000F590 (Template_pppxxq.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001014C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0057FA4 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0060554 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_ALLOC@@_KI1PEAU_MDL@@PEAE1@Z @ 0x1C0060F88 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0062C54 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        char *a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned int a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  struct VIDMM_SEGMENT *v14; // r12
  __int64 v16; // r15
  unsigned int v18; // ecx
  struct VIDMM_SEGMENT *v19; // r13
  unsigned int v20; // edx
  SIZE_T v21; // r8
  VIDMM_PAGING_PROCESS *v22; // r10
  SIZE_T v23; // r14
  unsigned __int64 v24; // rbx
  char *v25; // r12
  unsigned __int64 v26; // rbx
  _QWORD *p_QuadPart; // rcx
  unsigned int v28; // r12d
  struct VIDMM_MAPPED_VA_RANGE *v29; // rax
  struct VIDMM_MAPPED_VA_RANGE *v30; // rbx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r8
  struct _VIDMM_GLOBAL_ALLOC *v33; // r8
  D3DGPU_VIRTUAL_ADDRESS v34; // rax
  D3DGPU_VIRTUAL_ADDRESS v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  CVirtualAddressAllocator *v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // ebx
  int v42; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r11
  __int64 v47; // rcx
  _QWORD *v48; // rax
  char *v49; // rdx
  LARGE_INTEGER *v50; // rcx
  LARGE_INTEGER v51; // rdx
  LARGE_INTEGER **v52; // rax
  SIZE_T v53; // r9
  unsigned __int8 *v54; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER *v56; // [rsp+58h] [rbp-A8h]
  struct VIDMM_MAPPED_VA_RANGE *v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h] BYREF
  int v59; // [rsp+6Ch] [rbp-94h]
  int v60; // [rsp+70h] [rbp-90h]
  unsigned int v61; // [rsp+74h] [rbp-8Ch]
  SIZE_T v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  int v64[2]; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v65; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v66; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v67; // [rsp+238h] [rbp+138h]

  v14 = a6;
  v16 = a2;
  v62 = a4;
  if ( !a6 || (*((_DWORD *)a6 + 14) & 0x1000) != 0 )
    v18 = 0;
  else
    v18 = *((_DWORD *)a6 + 4) + 1;
  v19 = a9;
  v55 = v18;
  if ( !a9 || (*((_DWORD *)a9 + 14) & 0x1000) != 0 )
    v67 = 0;
  else
    v67 = *((_DWORD *)a9 + 4) + 1;
  v20 = *((_DWORD *)this + 10148);
  v61 = v20;
  v66 = 0;
  *(_BYTE *)&a13.0 = 0;
  if ( a4 )
  {
    v21 = v20;
    v22 = (VIDMM_GLOBAL *)((char *)this + 40000);
    v63 = 456 * v16;
    do
    {
      v23 = (unsigned int)a4;
      if ( a4 > v21 )
        v23 = v20;
      if ( a8 )
        v24 = (unsigned __int64)a12 << 12;
      else
        v24 = a7;
      v57 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
              v22,
              v16,
              v23,
              (struct _VIDMM_GLOBAL_ALLOC *)a3,
              (unsigned __int64)a5,
              v18,
              v24,
              a8,
              &v66,
              a14);
      if ( !v57 )
      {
        v25 = a5;
        do
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v16, 1, 0LL, 0LL, 0);
          VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v16);
          v57 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_GLOBAL *)((char *)this + 40000),
                  v16,
                  v23,
                  (struct _VIDMM_GLOBAL_ALLOC *)a3,
                  (unsigned __int64)v25,
                  v55,
                  v24,
                  a8,
                  &v66,
                  a14);
        }
        while ( !v57 );
        v19 = a9;
        v14 = a6;
      }
      if ( a11 )
        v26 = (unsigned __int64)a12 << 12;
      else
        v26 = a10;
      v56 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                               (VIDMM_GLOBAL *)((char *)this + 40000),
                               v16,
                               v23,
                               (struct _VIDMM_GLOBAL_ALLOC *)a3,
                               (unsigned __int64)a5,
                               v67,
                               v26,
                               a11,
                               (unsigned __int8 *)&a13,
                               a14);
      p_QuadPart = &v56->QuadPart;
      if ( !v56 )
      {
        v28 = v67;
        do
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v16, 1, 0LL, 0LL, 0);
          VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v16);
          v29 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_GLOBAL *)((char *)this + 40000),
                  v16,
                  v23,
                  (struct _VIDMM_GLOBAL_ALLOC *)a3,
                  (unsigned __int64)a5,
                  v28,
                  v26,
                  a11,
                  (unsigned __int8 *)&a13,
                  a14);
          v56 = (LARGE_INTEGER *)v29;
        }
        while ( !v29 );
        v19 = a9;
        p_QuadPart = v29;
        v14 = a6;
      }
      v30 = v57;
      v31 = p_QuadPart[13];
      v32 = p_QuadPart[12];
      if ( *((_QWORD *)v57 + 13) > v31 )
        v31 = *((_QWORD *)v57 + 13);
      if ( *((_QWORD *)v57 + 12) < v32 )
        v32 = *((_QWORD *)v57 + 12);
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v16 + 5004), v16, v32, v31);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v16, v33, &v65);
      if ( a8 )
        v65.Transfer.Destination.SegmentAddress.LowPart = 1;
      else
        v65.Transfer.Destination.SegmentAddress.LowPart = a11 == 0LL ? 2 : 0;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v16, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v65);
        if ( a3 )
        {
          v35 = a3[5];
          if ( v35 )
            v34 = *(_QWORD *)(v35 + 16);
          else
            v34 = a3[6];
        }
        else
        {
          v34 = 0LL;
        }
        v65.UpdateContextAllocation.ContextAllocation = v34;
        v65.Fill.FillSize = (SIZE_T)a5;
        v65.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v65.Transfer.TransferSize = v23;
        v65.MapApertureSegment.OffsetInPages = *((_QWORD *)v30 + 12);
        v65.Transfer.Source.SegmentAddress = v56[12];
        v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
        if ( v36 )
          v37 = v36 + 144 * v16;
        else
          v37 = 0LL;
        if ( (*(_DWORD *)(v37 + 20) & 1) != 0 )
        {
          v38 = (CVirtualAddressAllocator *)*((_QWORD *)this + v16 + 5004);
          v65.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v38,
                                                                        v16,
                                                                        *((_QWORD *)v57 + 12),
                                                                        v66);
          v65.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v38,
                                                                     v16,
                                                                     v56[12].QuadPart,
                                                                     a13.Value);
          v65.Transfer.Destination.SegmentAddress.HighPart = v65.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v66 & 1 | (2 * (*(_BYTE *)&a13.0 & 1));
        }
        if ( *((_QWORD *)this + 5075) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v65, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v39 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v65);
        v40 = *((_QWORD *)this + 805);
        v41 = v39;
        v60 = v39;
        if ( v40 && (!v19 || (*((_DWORD *)v19 + 14) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v40 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
            v23);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 974, v23);
        if ( bTracingEnabled )
        {
          if ( !v14 || (v42 = 2, (*((_DWORD *)v14 + 14) & 0x1001) != 0) )
            v42 = 1;
          *(_QWORD *)v64 = *((_QWORD *)this + v16 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v54) = v42;
            Template_pppxxq(*(__int64 *)v64, v44, v45, CurrentProcessId, a3, *(_QWORD *)v64, a5, v23, v54);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v23, v42);
          v41 = v60;
        }
        v58 = v14 ? *((_DWORD *)v14 + 4) + 1 : 0;
        v59 = v19 ? *((_DWORD *)v19 + 4) + 1 : 0;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v16,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v65,
          v41,
          0,
          &v58);
        if ( v41 >= 0 )
          break;
        v30 = v57;
      }
      v46 = v63;
      v47 = v63 + *((_QWORD *)this + 4999) + 440LL;
      v48 = *(_QWORD **)(v47 + 8);
      v49 = (char *)v57 + 24;
      *((_QWORD *)v57 + 3) = v47;
      *((_QWORD *)v57 + 4) = v48;
      if ( *v48 != v47 )
        __fastfail(3u);
      *v48 = v49;
      *(_QWORD *)(v47 + 8) = v49;
      v50 = v56 + 3;
      v51.QuadPart = v46 + *((_QWORD *)this + 4999) + 440LL;
      v52 = *(LARGE_INTEGER ***)(v51.QuadPart + 8);
      v56[3] = v51;
      v56[4].QuadPart = (LONGLONG)v52;
      if ( *v52 != (LARGE_INTEGER *)v51.QuadPart )
        __fastfail(3u);
      a5 += v23;
      v22 = (VIDMM_GLOBAL *)((char *)this + 40000);
      a7 += v23;
      a10 += v23;
      *v52 = v50;
      *(_QWORD *)(v51.QuadPart + 8) = v50;
      v20 = v61;
      v18 = v55;
      *((_QWORD *)v57 + 5) = a3[21];
      v53 = v62;
      v56[5].QuadPart = a3[21];
      a4 = v53 - v23;
      v62 = a4;
      v21 = v20;
      a12 += (unsigned int)v23 >> 12;
    }
    while ( a4 );
  }
}
