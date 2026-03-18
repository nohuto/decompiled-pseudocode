/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0048244
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0062C40 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001345C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pppxxq @ 0x1C001CFB4 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C005FB7C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
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
  LARGE_INTEGER v21; // rax
  ADAPTER_RENDER *v22; // rcx
  int v23; // r15d
  ADAPTER_RENDER *v24; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v32; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 76) & 0x3F;
  memset(&v32, 0, sizeof(v32));
  if ( a3
    && (v12 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)a2, 0, 0, a4, a5),
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
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v11, &v32);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v32);
      v32.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v18 = *(_QWORD *)(v9 + 40);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 16);
      else
        v19 = *(_QWORD *)(v9 + 48);
      v32.UpdateContextAllocation.ContextAllocation = v19;
      v20 = *(_QWORD *)(v9 + 128);
      if ( (*(_DWORD *)(v20 + 56) & 0x1000) != 0 )
        v32.Transfer.TransferOffset = 0;
      else
        v32.Transfer.TransferOffset = *(_DWORD *)(v20 + 16) + 1;
      v32.Transfer.TransferSize = *(_QWORD *)(v9 + 136) + *(_QWORD *)(*(_QWORD *)(v9 + 128) + 24LL);
      if ( (*(_DWORD *)(v9 + 80) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 472) & 8) != 0 )
          v32.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 360);
        else
          v32.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 16LL);
      }
      v21.QuadPart = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v22 = this[2];
      v32.Transfer.Source.SegmentAddress = v21;
      v23 = ADAPTER_RENDER::DdiBuildPagingBuffer(v22, &v32);
      if ( bTracingEnabled )
      {
        v24 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          v31 = 0LL;
          v30 = (int)v24;
          Template_pppxxq(v27, v26, v28, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v32,
        v23,
        v29 & v30,
        (_DWORD *)(v29 & v31));
    }
    while ( v23 < 0 );
    return 0LL;
  }
}
