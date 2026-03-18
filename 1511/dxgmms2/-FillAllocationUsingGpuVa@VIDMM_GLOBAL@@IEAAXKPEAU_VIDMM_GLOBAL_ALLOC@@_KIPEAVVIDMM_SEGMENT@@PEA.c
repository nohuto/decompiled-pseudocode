/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0048744
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004858C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001345C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001CFB4 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C003CB54 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00423FC (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        unsigned __int8 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // r14
  SIZE_T v9; // r15
  unsigned int v10; // edx
  unsigned __int64 v12; // rcx
  LONGLONG QuadPart; // rbx
  SIZE_T v14; // r8
  VIDMM_PAGING_PROCESS *v15; // r10
  bool v16; // cc
  SIZE_T v17; // r12
  struct VIDMM_SEGMENT *v18; // r15
  unsigned int v19; // eax
  struct VIDMM_MAPPED_VA_RANGE *v20; // rax
  __int64 v21; // r8
  LARGE_INTEGER *v22; // r13
  struct _VIDMM_GLOBAL_ALLOC *v23; // r8
  D3DGPU_VIRTUAL_ADDRESS v24; // rax
  D3DGPU_VIRTUAL_ADDRESS v25; // rax
  bool v26; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  LARGE_INTEGER *v30; // rcx
  __int64 v31; // rdx
  LARGE_INTEGER **v32; // rax
  unsigned __int8 *v33; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h]
  LONGLONG v35; // [rsp+58h] [rbp-A8h]
  SIZE_T v36; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v39; // [rsp+208h] [rbp+108h]

  v8 = a2;
  v9 = a4;
  v10 = *((_DWORD *)this + 10162);
  v12 = 0LL;
  v36 = a4;
  QuadPart = a7->QuadPart;
  v35 = a7->QuadPart;
  v39 = v10;
  v34 = 0LL;
  a5 = 0;
  if ( a4 )
  {
    v14 = v10;
    v15 = (VIDMM_GLOBAL *)((char *)this + 40056);
    do
    {
      v16 = v9 <= v14;
      v17 = (unsigned int)v9;
      v18 = a6;
      if ( !v16 )
        v17 = v10;
      while ( 1 )
      {
        v19 = (*((_DWORD *)v18 + 14) & 0x1000) != 0 ? 0 : *((_DWORD *)v18 + 4) + 1;
        v20 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                v15,
                v8,
                v17,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v12,
                v19,
                QuadPart,
                0LL,
                (struct VIDMM_ALLOC *)&a5,
                0LL);
        v22 = (LARGE_INTEGER *)v20;
        if ( v20 )
          break;
        LOBYTE(v21) = 1;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, v21, 0LL, 0LL, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v8);
        v12 = v34;
        v15 = (VIDMM_GLOBAL *)((char *)this + 40056);
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(
        *((CVirtualAddressAllocator **)this + v8 + 5011),
        v8,
        *((_QWORD *)v20 + 12),
        *((_QWORD *)v20 + 13));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v8, v23, &v37);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, (unsigned int)v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v37);
        v37.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v25 = a3[5];
          if ( v25 )
            v24 = *(_QWORD *)(v25 + 16);
          else
            v24 = a3[6];
        }
        else
        {
          v24 = 0LL;
        }
        v37.Transfer.Source.SegmentId = 0;
        v26 = *((_QWORD *)this + 5082) == 0LL;
        v37.UpdateContextAllocation.ContextAllocation = v24;
        v37.Transfer.TransferSize = v17;
        v37.Transfer.Source.SegmentAddress = v22[12];
        if ( !v26 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(this, &v37, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        LODWORD(a7) = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v37);
        if ( bTracingEnabled )
        {
          v38 = *((_QWORD *)this + v8 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v33) = 0;
            Template_pppxxq(v38, v28, v29, CurrentProcessId, a3, v38, 0LL, v17, v33);
          }
        }
        VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v17, 0);
        LODWORD(v38) = *((_DWORD *)v18 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          (unsigned int)v8,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v37,
          (int)a7,
          0,
          &v38);
      }
      while ( (int)a7 < 0 );
      v30 = v22 + 3;
      v31 = *((_QWORD *)this + 5006) + 456 * v8 + 440;
      v32 = *(LARGE_INTEGER ***)(v31 + 8);
      v22[3].QuadPart = v31;
      v22[4].QuadPart = (LONGLONG)v32;
      if ( *v32 != (LARGE_INTEGER *)v31 )
        __fastfail(3u);
      *v32 = v30;
      v15 = (VIDMM_GLOBAL *)((char *)this + 40056);
      *(_QWORD *)(v31 + 8) = v30;
      v9 = v36 - v17;
      QuadPart = v17 + v35;
      v12 = v17 + v34;
      v10 = v39;
      v22[5].QuadPart = a3[21];
      v14 = v10;
      v36 = v9;
      v35 += v17;
      v34 += v17;
    }
    while ( v9 );
  }
}
