/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050F58
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050EB8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00112E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001E328 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00452DC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A1DC (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        ADAPTER_RENDER **this,
        __int64 a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        UINT a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  SIZE_T v7; // r14
  __int64 v9; // r15
  LONGLONG QuadPart; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  SIZE_T v22; // rdx
  unsigned __int64 v23; // rcx
  SIZE_T v24; // r8
  bool v25; // cc
  SIZE_T v26; // r12
  struct VIDMM_SEGMENT *v27; // r14
  unsigned int v28; // eax
  struct VIDMM_MAPPED_VA_RANGE *v29; // rax
  __int64 v30; // r8
  LARGE_INTEGER *v31; // r13
  struct _VIDMM_GLOBAL_ALLOC *v32; // r8
  UINT v33; // ebx
  D3DGPU_VIRTUAL_ADDRESS v34; // rax
  bool v35; // zf
  LARGE_INTEGER *v36; // rcx
  __int64 v37; // rdx
  LARGE_INTEGER **v38; // rax
  D3DGPU_VIRTUAL_ADDRESS v39; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int8 *v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h]
  SIZE_T v46; // [rsp+60h] [rbp-A0h]
  LONGLONG v47; // [rsp+68h] [rbp-98h]
  SIZE_T i; // [rsp+78h] [rbp-88h]
  struct _DXGKARG_BUILDPAGINGBUFFER v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+200h] [rbp+100h]
  ADAPTER_RENDER *v51; // [rsp+218h] [rbp+118h] BYREF

  v7 = a4;
  v46 = a4;
  v9 = (unsigned int)a2;
  QuadPart = a7->QuadPart;
  v47 = a7->QuadPart;
  a7 = (union _LARGE_INTEGER *)a7->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a3;
    v16 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17 = a5;
    *(_QWORD *)(v16 + 24) = v7;
    *(_QWORD *)(v16 + 32) = v17;
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v18, v19, v20);
    v21[3] = a6;
    v21[4] = SHIDWORD(a7);
    v21[5] = (unsigned int)QuadPart;
  }
  v22 = *((unsigned int *)this + 10228);
  v23 = 0LL;
  v44 = *((_DWORD *)this + 10228);
  v45 = 0LL;
  LOBYTE(a7) = 0;
  if ( v7 )
  {
    v24 = (unsigned int)v22;
    for ( i = v22; ; v24 = i )
    {
      v25 = v7 <= v24;
      v26 = (unsigned int)v7;
      v27 = a6;
      if ( !v25 )
        v26 = (unsigned int)v22;
      while ( 1 )
      {
        v28 = (*((_DWORD *)v27 + 14) & 0x1000) != 0 ? 0 : *((_DWORD *)v27 + 4) + 1;
        v29 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_PAGING_PROCESS *)(this + 5040),
                v9,
                v26,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v23,
                v28,
                QuadPart,
                0LL,
                (struct VIDMM_ALLOC *)&a7,
                0LL);
        v31 = (LARGE_INTEGER *)v29;
        if ( v29 )
          break;
        LOBYTE(v30) = 1;
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v9, v30, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)this, v9);
        v23 = v45;
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(this[v9 + 5044], v9, *((_QWORD *)v29 + 12), *((_QWORD *)v29 + 13));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v9, v32, &v49);
      v33 = a5;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v9,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v49);
        v49.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v39 = a3[5];
          if ( v39 )
            v34 = *(_QWORD *)(v39 + 16);
          else
            v34 = a3[6];
        }
        else
        {
          v34 = 0LL;
        }
        v35 = this[5115] == 0LL;
        v49.UpdateContextAllocation.ContextAllocation = v34;
        v49.Transfer.TransferSize = v26;
        v49.Transfer.Source.SegmentId = v33;
        v49.Transfer.Source.SegmentAddress = v31[12];
        if ( !v35 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
            (VIDMM_GLOBAL *)this,
            &v49,
            v9,
            (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v50 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v49);
        if ( bTracingEnabled )
        {
          v51 = this[v9 + 143];
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v43) = 0;
            Template_pppxxq((__int64)v51, v41, v42, CurrentProcessId, a3, v51, 0LL, v26, v43);
          }
        }
        VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), v26, 0);
        LODWORD(v51) = *((_DWORD *)v27 + 4) + 1;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v9,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v49,
          v50,
          0,
          &v51);
      }
      while ( v50 < 0 );
      v36 = v31 + 3;
      v37 = (__int64)this[5017] + 456 * v9 + 440;
      v38 = *(LARGE_INTEGER ***)(v37 + 8);
      if ( *v38 != (LARGE_INTEGER *)v37 )
        __fastfail(3u);
      v36->QuadPart = v37;
      v7 = v46 - v26;
      v31[4].QuadPart = (LONGLONG)v38;
      QuadPart = v26 + v47;
      *v38 = v36;
      *(_QWORD *)(v37 + 8) = v36;
      v23 = v26 + v45;
      v31[5].QuadPart = a3[22];
      v46 = v7;
      v47 += v26;
      v45 += v26;
      if ( !v7 )
        break;
      LODWORD(v22) = v44;
    }
  }
}
