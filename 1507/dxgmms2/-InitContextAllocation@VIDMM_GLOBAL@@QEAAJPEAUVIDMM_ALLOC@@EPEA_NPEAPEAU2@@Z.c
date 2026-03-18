/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C004DE74
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0050FD8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     Template_pppxxq @ 0x1C000F590 (Template_pppxxq.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001014C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C004DD74 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  struct _VIDMM_GLOBAL_ALLOC *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rax
  D3DGPU_VIRTUAL_ADDRESS v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v23; // rcx
  int v24; // r15d
  ADAPTER_RENDER *v25; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v33; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 76) & 0x3F;
  memset(&v33, 0, sizeof(v33));
  if ( a3
    && (v12 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)a2, 0, 0, (char *)a4, a5),
        v15 = v12,
        v12 < 0) )
  {
    v16 = WdLogNewEntry5_WdEvent(v14, v13);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdEvent(v16);
    return (unsigned int)v15;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v11, &v33);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v33);
      v33.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v18 = *(_QWORD *)(v9 + 40);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 16);
      else
        v19 = *(_QWORD *)(v9 + 48);
      v33.UpdateContextAllocation.ContextAllocation = v19;
      v20 = *(_QWORD *)(v9 + 128);
      if ( (*(_DWORD *)(v20 + 56) & 0x1000) != 0 )
        v33.Transfer.TransferOffset = 0;
      else
        v33.Transfer.TransferOffset = *(_DWORD *)(v20 + 16) + 1;
      v33.Transfer.TransferSize = *(_QWORD *)(v9 + 136) + *(_QWORD *)(*(_QWORD *)(v9 + 128) + 24LL);
      v21 = **(_DWORD **)(v9 + 472);
      if ( (v21 & 1) != 0 )
      {
        if ( (v21 & 8) != 0 )
          v33.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 360);
        else
          v33.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 16LL);
      }
      GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v23 = this[2];
      v33.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
      v24 = ADAPTER_RENDER::DdiBuildPagingBuffer(v23, &v33);
      if ( bTracingEnabled )
      {
        v25 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          v32 = 0LL;
          v31 = (int)v25;
          Template_pppxxq(v28, v27, v29, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v33,
        v24,
        v30 & v31,
        (void *)(v30 & v32));
    }
    while ( v24 < 0 );
    return 0LL;
  }
}
