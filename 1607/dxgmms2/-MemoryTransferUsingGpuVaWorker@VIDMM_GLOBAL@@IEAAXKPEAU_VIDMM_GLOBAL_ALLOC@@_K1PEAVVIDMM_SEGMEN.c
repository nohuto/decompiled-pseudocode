/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0051250
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0089E38 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00112E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001E328 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00452DC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0047ECC (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A058 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0068D7C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        __int64 a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        unsigned __int64 a5,
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
  struct VIDMM_SEGMENT *v14; // r13
  __int64 v15; // r12
  SIZE_T v16; // rbx
  __int64 v19; // rcx
  struct VIDMM_SEGMENT *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  unsigned __int64 v31; // r8
  struct _MDL *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  _QWORD *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  struct _MDL *v38; // rdx
  SIZE_T v39; // r9
  SIZE_T v40; // r15
  VIDMM_PAGING_PROCESS *v41; // r10
  unsigned int v42; // eax
  unsigned __int64 v43; // rbx
  unsigned int v44; // r14d
  SIZE_T v45; // r15
  __int64 v46; // r8
  struct _MDL *v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r14
  struct VIDMM_MAPPED_VA_RANGE *v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r8
  struct VIDMM_MAPPED_VA_RANGE *v54; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v55; // r8
  struct VIDMM_SEGMENT *v56; // r14
  struct VIDMM_SEGMENT *v57; // r13
  D3DGPU_VIRTUAL_ADDRESS v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  CVirtualAddressAllocator *v61; // rbx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // r11
  struct VIDMM_MAPPED_VA_RANGE *v66; // r9
  __int64 v67; // rcx
  __int64 **v68; // rax
  __int64 *v69; // rdx
  LARGE_INTEGER *v70; // r8
  LARGE_INTEGER *v71; // rcx
  __int64 v72; // rdx
  LARGE_INTEGER **v73; // rax
  unsigned __int64 v74; // rcx
  D3DGPU_VIRTUAL_ADDRESS v75; // rax
  int v76; // ebx
  __int64 v77; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  unsigned __int8 *v81; // [rsp+40h] [rbp-C0h]
  int v82; // [rsp+50h] [rbp-B0h]
  int v83; // [rsp+58h] [rbp-A8h] BYREF
  int v84; // [rsp+5Ch] [rbp-A4h]
  struct VIDMM_MAPPED_VA_RANGE *v85; // [rsp+60h] [rbp-A0h]
  int v86; // [rsp+68h] [rbp-98h]
  unsigned int v87; // [rsp+6Ch] [rbp-94h]
  int v88; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER *v89; // [rsp+78h] [rbp-88h]
  SIZE_T v90; // [rsp+80h] [rbp-80h]
  __int64 v91; // [rsp+88h] [rbp-78h]
  __int64 v92; // [rsp+90h] [rbp-70h]
  SIZE_T v93; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_BUILDPAGINGBUFFER v94; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v95; // [rsp+220h] [rbp+120h] BYREF
  int v96; // [rsp+228h] [rbp+128h]
  unsigned int v97; // [rsp+238h] [rbp+138h]

  v96 = a2;
  v14 = a6;
  v15 = (unsigned int)a2;
  v16 = a4;
  v90 = a4;
  v19 = 4096LL;
  if ( !a6 || (*((_DWORD *)a6 + 14) & 0x1000) != 0 )
    v97 = 0;
  else
    v97 = *((_DWORD *)a6 + 4) + 1;
  v20 = a9;
  if ( !a9 || (*((_DWORD *)a9 + 14) & 0x1000) != 0 )
  {
    v82 = 0;
  }
  else
  {
    v19 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v82 = *((_DWORD *)a9 + 4) + 1;
  }
  v95 = 0;
  *(_BYTE *)&a13.0 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, a2, a3, a4) + 24) = a3;
    v25 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
    v26 = a5;
    *(_QWORD *)(v25 + 24) = v16;
    *(_QWORD *)(v25 + 32) = v26;
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v27, v28, v29);
    v31 = a7;
    v32 = a8;
    v30[3] = v14;
    v30[4] = v31;
    v30[5] = v32;
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v31, v34);
    v35[4] = a10;
    v35[5] = a11;
    v35[3] = v20;
  }
  v36 = a5;
  v37 = a7;
  v38 = a8;
  v39 = *((unsigned int *)this + 10228);
  v88 = *((_DWORD *)this + 10228);
  if ( v16 )
  {
    v40 = (unsigned int)v39;
    v93 = v39;
    v92 = 456 * v15;
    v91 = v15;
    while ( 1 )
    {
      v41 = (VIDMM_GLOBAL *)((char *)this + 40320);
      v42 = v16;
      if ( v16 > v40 )
        v42 = v39;
      v87 = v42;
      if ( v38 )
        v43 = (unsigned __int64)a12 << 12;
      else
        v43 = v37;
      v44 = v97;
      v45 = v42;
      while ( 1 )
      {
        v85 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                v41,
                v15,
                v45,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v36,
                v44,
                v43,
                v38,
                (struct VIDMM_ALLOC *)&v95,
                a14);
        if ( v85 )
          break;
        LOBYTE(v46) = 1;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v15, v46, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v15);
        v36 = a5;
        v41 = (VIDMM_GLOBAL *)((char *)this + 40320);
        v38 = a8;
      }
      v47 = a11;
      if ( a11 )
        v48 = (unsigned __int64)a12 << 12;
      else
        v48 = a10;
      v49 = a5;
      while ( 1 )
      {
        v50 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v15,
                v45,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v49,
                v82,
                v48,
                v47,
                (struct VIDMM_ALLOC *)&a13,
                a14);
        v89 = (LARGE_INTEGER *)v50;
        if ( v50 )
          break;
        LOBYTE(v51) = 1;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v15, v51, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v15);
        v47 = a11;
      }
      v52 = *((_QWORD *)v50 + 13);
      v53 = *((_QWORD *)v50 + 12);
      v54 = v85;
      if ( *((_QWORD *)v85 + 13) > v52 )
        v52 = *((_QWORD *)v85 + 13);
      if ( *((_QWORD *)v85 + 12) < v53 )
        v53 = *((_QWORD *)v85 + 12);
      CVirtualAddressAllocator::FlushGpuVaTlb(
        *((CVirtualAddressAllocator **)this + (unsigned int)v15 + 5044),
        v15,
        v53,
        v52);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v15, v55, &v94);
      v56 = a9;
      v57 = a6;
      v94.Transfer.Destination.SegmentAddress.LowPart = a8 ? 1 : a11 == 0LL ? 2 : 0;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v15,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v94);
        if ( a3 )
        {
          v75 = a3[5];
          if ( v75 )
            v58 = *(_QWORD *)(v75 + 16);
          else
            v58 = a3[6];
        }
        else
        {
          v58 = 0LL;
        }
        v94.UpdateContextAllocation.ContextAllocation = v58;
        v94.Fill.FillSize = a5;
        v94.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v94.Transfer.TransferSize = v45;
        v94.MapApertureSegment.OffsetInPages = *((_QWORD *)v54 + 12);
        v94.Transfer.Source.SegmentAddress = v89[12];
        v59 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
        if ( v59 )
          v60 = v59 + 144LL * (unsigned int)v15;
        else
          v60 = 0LL;
        if ( (*(_DWORD *)(v60 + 20) & 1) != 0 )
        {
          v61 = (CVirtualAddressAllocator *)*((_QWORD *)this + (unsigned int)v15 + 5044);
          v94.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v61,
                                                                        v15,
                                                                        *((_QWORD *)v85 + 12),
                                                                        v95);
          v94.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v61,
                                                                     v15,
                                                                     v89[12].QuadPart,
                                                                     *(_BYTE *)&a13.0);
          v94.Transfer.Destination.SegmentAddress.HighPart = v94.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v95 & 1 | (2 * (*(_BYTE *)&a13.0 & 1));
        }
        if ( *((_QWORD *)this + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v94, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v62 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v94);
        v63 = *((_QWORD *)this + 805);
        v64 = v62;
        v86 = v62;
        if ( v63 && (!v56 || (*((_DWORD *)v56 + 14) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v63 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
            v45);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 980, v45);
        if ( bTracingEnabled )
        {
          if ( !v57 || (v76 = 2, (*((_DWORD *)v57 + 14) & 0x1001) != 0) )
            v76 = 1;
          v77 = *((_QWORD *)this + v91 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v81) = v76;
            Template_pppxxq(a5, v79, v80, CurrentProcessId, a3, v77, a5, v45, v81);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v45, v76);
          LODWORD(v15) = v96;
          v64 = v86;
        }
        v83 = v57 ? *((_DWORD *)v57 + 4) + 1 : 0;
        v84 = v56 ? *((_DWORD *)v56 + 4) + 1 : 0;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v15,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v94,
          v64,
          0,
          &v83);
        if ( v64 >= 0 )
          break;
        v54 = v85;
      }
      v65 = v92;
      v66 = v85;
      v67 = v92 + *((_QWORD *)this + 5017) + 440LL;
      v68 = *(__int64 ***)(v67 + 8);
      v69 = (__int64 *)((char *)v85 + 24);
      if ( *v68 != (__int64 *)v67 )
        __fastfail(3u);
      v70 = v89;
      *v69 = v67;
      v69[1] = (__int64)v68;
      *v68 = v69;
      *(_QWORD *)(v67 + 8) = v69;
      v71 = v70 + 3;
      v72 = v65 + *((_QWORD *)this + 5017) + 440LL;
      v73 = *(LARGE_INTEGER ***)(v72 + 8);
      if ( *v73 != (LARGE_INTEGER *)v72 )
        __fastfail(3u);
      a10 += v45;
      v16 = v90 - v45;
      v70[4].QuadPart = (LONGLONG)v73;
      v71->QuadPart = v72;
      *v73 = v71;
      *(_QWORD *)(v72 + 8) = v71;
      v74 = a5;
      *((_QWORD *)v66 + 5) = a3[22];
      v36 = v45 + v74;
      v70[5].QuadPart = a3[22];
      v37 = v45 + a7;
      a12 += v87 >> 12;
      v90 = v16;
      a5 = v36;
      a7 += v45;
      if ( !v16 )
        break;
      v38 = a8;
      LODWORD(v39) = v88;
      v40 = v93;
    }
  }
}
