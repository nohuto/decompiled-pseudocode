/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0048A3C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007B854 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001345C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001CFB4 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C003CB54 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C003FAE0 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0042278 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0053FE8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
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
  unsigned int v20; // r8d
  char *v21; // rax
  VIDMM_PAGING_PROCESS *v22; // r10
  SIZE_T v23; // rbx
  unsigned int v24; // edx
  unsigned __int64 v25; // rbx
  SIZE_T v26; // r14
  __int64 v27; // r8
  char *v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  _QWORD *p_QuadPart; // rcx
  unsigned int v32; // r12d
  struct VIDMM_MAPPED_VA_RANGE *v33; // rax
  struct VIDMM_MAPPED_VA_RANGE *v34; // rbx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r8
  struct _VIDMM_GLOBAL_ALLOC *v37; // r8
  D3DGPU_VIRTUAL_ADDRESS v38; // rax
  D3DGPU_VIRTUAL_ADDRESS v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  CVirtualAddressAllocator *v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ebx
  int v46; // ebx
  __int64 v47; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r11
  __int64 v52; // rcx
  _QWORD *v53; // rax
  char *v54; // rdx
  LARGE_INTEGER *v55; // rcx
  LARGE_INTEGER v56; // rdx
  LARGE_INTEGER **v57; // rax
  unsigned int v58; // ecx
  SIZE_T v59; // r9
  unsigned __int8 *v60; // [rsp+40h] [rbp-C0h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  struct VIDMM_MAPPED_VA_RANGE *v62; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER *v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+68h] [rbp-98h] BYREF
  int v65; // [rsp+6Ch] [rbp-94h]
  unsigned int v66; // [rsp+70h] [rbp-90h]
  unsigned int v67; // [rsp+74h] [rbp-8Ch]
  int v68; // [rsp+78h] [rbp-88h]
  SIZE_T v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  _DXGKARG_BUILDPAGINGBUFFER v71; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v72; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v73; // [rsp+228h] [rbp+128h]

  v14 = a6;
  v16 = a2;
  v69 = a4;
  if ( !a6 || (*((_DWORD *)a6 + 14) & 0x1000) != 0 )
    v18 = 0;
  else
    v18 = *((_DWORD *)a6 + 4) + 1;
  v19 = a9;
  v61 = v18;
  if ( !a9 || (*((_DWORD *)a9 + 14) & 0x1000) != 0 )
    v73 = 0;
  else
    v73 = *((_DWORD *)a9 + 4) + 1;
  v20 = *((_DWORD *)this + 10162);
  v66 = v20;
  v72 = 0;
  *(_BYTE *)&a13.0 = 0;
  if ( a4 )
  {
    v21 = a5;
    v22 = (VIDMM_GLOBAL *)((char *)this + 40056);
    v23 = v20;
    v70 = 456LL * a2;
    do
    {
      v24 = a4;
      if ( a4 > v23 )
        v24 = v20;
      v67 = v24;
      if ( a8 )
        v25 = (unsigned __int64)a12 << 12;
      else
        v25 = a7;
      v26 = v24;
      v62 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
              v22,
              v16,
              v24,
              (struct _VIDMM_GLOBAL_ALLOC *)a3,
              (unsigned __int64)v21,
              v18,
              v25,
              a8,
              (struct VIDMM_ALLOC *)&v72,
              a14);
      if ( !v62 )
      {
        v28 = a5;
        do
        {
          LOBYTE(v27) = 1;
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v16, v27, 0LL, 0LL, 0);
          VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v16);
          v62 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_GLOBAL *)((char *)this + 40056),
                  v16,
                  v26,
                  (struct _VIDMM_GLOBAL_ALLOC *)a3,
                  (unsigned __int64)v28,
                  v61,
                  v25,
                  a8,
                  (struct VIDMM_ALLOC *)&v72,
                  a14);
        }
        while ( !v62 );
        v19 = a9;
        v14 = a6;
      }
      if ( a11 )
        v29 = (unsigned __int64)a12 << 12;
      else
        v29 = a10;
      v63 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                               (VIDMM_GLOBAL *)((char *)this + 40056),
                               v16,
                               v26,
                               (struct _VIDMM_GLOBAL_ALLOC *)a3,
                               (unsigned __int64)a5,
                               v73,
                               v29,
                               a11,
                               (struct VIDMM_ALLOC *)&a13,
                               a14);
      p_QuadPart = &v63->QuadPart;
      if ( !v63 )
      {
        v32 = v73;
        do
        {
          LOBYTE(v30) = 1;
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v16, v30, 0LL, 0LL, 0);
          VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v16);
          v33 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_GLOBAL *)((char *)this + 40056),
                  v16,
                  v26,
                  (struct _VIDMM_GLOBAL_ALLOC *)a3,
                  (unsigned __int64)a5,
                  v32,
                  v29,
                  a11,
                  (struct VIDMM_ALLOC *)&a13,
                  a14);
          v63 = (LARGE_INTEGER *)v33;
        }
        while ( !v33 );
        v19 = a9;
        p_QuadPart = v33;
        v14 = a6;
      }
      v34 = v62;
      v35 = p_QuadPart[13];
      v36 = p_QuadPart[12];
      if ( *((_QWORD *)v62 + 13) > v35 )
        v35 = *((_QWORD *)v62 + 13);
      if ( *((_QWORD *)v62 + 12) < v36 )
        v36 = *((_QWORD *)v62 + 12);
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v16 + 5011), v16, v36, v35);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v16, v37, &v71);
      if ( a8 )
        v71.Transfer.Destination.SegmentAddress.LowPart = 1;
      else
        v71.Transfer.Destination.SegmentAddress.LowPart = a11 == 0LL ? 2 : 0;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v16,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v71);
        if ( a3 )
        {
          v39 = a3[5];
          if ( v39 )
            v38 = *(_QWORD *)(v39 + 16);
          else
            v38 = a3[6];
        }
        else
        {
          v38 = 0LL;
        }
        v71.UpdateContextAllocation.ContextAllocation = v38;
        v71.Fill.FillSize = (SIZE_T)a5;
        v71.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v71.Transfer.TransferSize = v26;
        v71.MapApertureSegment.OffsetInPages = *((_QWORD *)v34 + 12);
        v71.Transfer.Source.SegmentAddress = v63[12];
        v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 904LL);
        if ( v40 )
          v41 = v40 + 144 * v16;
        else
          v41 = 0LL;
        if ( (*(_DWORD *)(v41 + 20) & 1) != 0 )
        {
          v42 = (CVirtualAddressAllocator *)*((_QWORD *)this + v16 + 5011);
          v71.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v42,
                                                                        v16,
                                                                        *((_QWORD *)v62 + 12),
                                                                        v72);
          v71.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v42,
                                                                     v16,
                                                                     v63[12].QuadPart,
                                                                     *(_BYTE *)&a13.0);
          v71.Transfer.Destination.SegmentAddress.HighPart = v71.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v72 & 1 | (2 * (*(_BYTE *)&a13.0 & 1));
        }
        if ( *((_QWORD *)this + 5082) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v71, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v43 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v71);
        v44 = *((_QWORD *)this + 805);
        v45 = v43;
        v68 = v43;
        if ( v44 && (!v19 || (*((_DWORD *)v19 + 14) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v44 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
            v26);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 974, v26);
        if ( bTracingEnabled )
        {
          if ( !v14 || (v46 = 2, (*((_DWORD *)v14 + 14) & 0x1001) != 0) )
            v46 = 1;
          v47 = *((_QWORD *)this + v16 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v60) = v46;
            Template_pppxxq((__int64)a5, v49, v50, CurrentProcessId, a3, v47, a5, v26, v60);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v26, v46);
          v14 = a6;
          v45 = v68;
        }
        v64 = v14 ? *((_DWORD *)v14 + 4) + 1 : 0;
        v65 = v19 ? *((_DWORD *)v19 + 4) + 1 : 0;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v16,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v71,
          v45,
          0,
          &v64);
        if ( v45 >= 0 )
          break;
        v34 = v62;
      }
      v51 = v70;
      v52 = v70 + *((_QWORD *)this + 5006) + 440LL;
      v53 = *(_QWORD **)(v52 + 8);
      v54 = (char *)v62 + 24;
      *((_QWORD *)v62 + 3) = v52;
      *((_QWORD *)v62 + 4) = v53;
      if ( *v53 != v52 )
        __fastfail(3u);
      *v53 = v54;
      *(_QWORD *)(v52 + 8) = v54;
      v55 = v63 + 3;
      v56.QuadPart = v51 + *((_QWORD *)this + 5006) + 440LL;
      v57 = *(LARGE_INTEGER ***)(v56.QuadPart + 8);
      v63[3] = v56;
      v63[4].QuadPart = (LONGLONG)v57;
      if ( *v57 != (LARGE_INTEGER *)v56.QuadPart )
        __fastfail(3u);
      a7 += v26;
      v22 = (VIDMM_GLOBAL *)((char *)this + 40056);
      a10 += v26;
      *v57 = v55;
      *(_QWORD *)(v56.QuadPart + 8) = v55;
      v58 = v67;
      *((_QWORD *)v62 + 5) = a3[21];
      v59 = v69;
      v63[5].QuadPart = a3[21];
      a4 = v59 - v26;
      v20 = v66;
      v21 = &a5[v26];
      v23 = v66;
      a12 += v58 >> 12;
      v18 = v61;
      v69 = a4;
      a5 += v26;
    }
    while ( a4 );
  }
}
