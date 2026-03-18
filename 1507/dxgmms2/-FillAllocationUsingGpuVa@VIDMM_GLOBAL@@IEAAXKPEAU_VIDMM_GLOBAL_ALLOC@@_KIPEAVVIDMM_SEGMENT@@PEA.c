/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D1D8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
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
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_ALLOC@@_KI1PEAU_MDL@@PEAE1@Z @ 0x1C0060F88 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0062AE0 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        char a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  unsigned int v7; // eax
  unsigned __int64 v9; // rcx
  SIZE_T v10; // r12
  __int64 v11; // r14
  LONGLONG QuadPart; // rbx
  SIZE_T v14; // r8
  VIDMM_PAGING_PROCESS *v15; // r10
  bool v16; // cc
  SIZE_T v17; // r15
  struct VIDMM_SEGMENT *v18; // r12
  unsigned int v19; // eax
  struct VIDMM_MAPPED_VA_RANGE *v20; // rax
  LARGE_INTEGER *v21; // r13
  struct _VIDMM_GLOBAL_ALLOC *v22; // r8
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  D3DGPU_VIRTUAL_ADDRESS v24; // rax
  bool v25; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  LARGE_INTEGER *v29; // rcx
  __int64 v30; // rdx
  LARGE_INTEGER **v31; // rax
  unsigned __int8 *v32; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h]
  LONGLONG v34; // [rsp+58h] [rbp-A8h]
  SIZE_T v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_BUILDPAGINGBUFFER v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v39; // [rsp+208h] [rbp+108h]

  v7 = *((_DWORD *)this + 10148);
  v9 = 0LL;
  v35 = a4;
  v10 = a4;
  v11 = a2;
  v39 = v7;
  QuadPart = a7->QuadPart;
  v34 = a7->QuadPart;
  v33 = 0LL;
  a5 = 0;
  if ( a4 )
  {
    v14 = v7;
    v15 = (VIDMM_GLOBAL *)((char *)this + 40000);
    v36 = 456LL * a2;
    do
    {
      v16 = v10 <= v14;
      v17 = (unsigned int)v10;
      v18 = a6;
      if ( !v16 )
        v17 = v7;
      while ( 1 )
      {
        v19 = (*((_DWORD *)v18 + 14) & 0x1000) != 0 ? 0 : *((_DWORD *)v18 + 4) + 1;
        v20 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                v15,
                v11,
                v17,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v9,
                v19,
                QuadPart,
                0LL,
                (unsigned __int8 *)&a5,
                0LL);
        v21 = (LARGE_INTEGER *)v20;
        if ( v20 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v11, 1, 0LL, 0LL, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v11);
        v9 = v33;
        v15 = (VIDMM_GLOBAL *)((char *)this + 40000);
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(
        *((CVirtualAddressAllocator **)this + v11 + 5004),
        v11,
        *((_QWORD *)v20 + 12),
        *((_QWORD *)v20 + 13));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v11, v22, &v37);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v11, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v37);
        v37.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v24 = a3[5];
          if ( v24 )
            v23 = *(_QWORD *)(v24 + 16);
          else
            v23 = a3[6];
        }
        else
        {
          v23 = 0LL;
        }
        v37.Transfer.Source.SegmentId = 0;
        v25 = *((_QWORD *)this + 5075) == 0LL;
        v37.UpdateContextAllocation.ContextAllocation = v23;
        v37.Transfer.TransferSize = v17;
        v37.Transfer.Source.SegmentAddress = v21[12];
        if ( !v25 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v37, v11, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        LODWORD(a7) = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v37);
        if ( bTracingEnabled )
        {
          v38 = *((_QWORD *)this + v11 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v32) = 0;
            Template_pppxxq(v38, v27, v28, CurrentProcessId, a3, v38, 0LL, v17, v32);
          }
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v17, 0);
        LODWORD(v38) = *((_DWORD *)v18 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v11,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v37,
          (int)a7,
          0,
          &v38);
      }
      while ( (int)a7 < 0 );
      v29 = v21 + 3;
      v30 = *((_QWORD *)this + 4999) + v36 + 440;
      v31 = *(LARGE_INTEGER ***)(v30 + 8);
      v21[3].QuadPart = v30;
      v21[4].QuadPart = (LONGLONG)v31;
      if ( *v31 != (LARGE_INTEGER *)v30 )
        __fastfail(3u);
      *v31 = v29;
      v15 = (VIDMM_GLOBAL *)((char *)this + 40000);
      *(_QWORD *)(v30 + 8) = v29;
      v10 = v35 - v17;
      QuadPart = v17 + v34;
      v9 = v17 + v33;
      v21[5].QuadPart = a3[21];
      v7 = v39;
      v35 = v10;
      v14 = v39;
      v34 += v17;
      v33 += v17;
    }
    while ( v10 );
  }
}
