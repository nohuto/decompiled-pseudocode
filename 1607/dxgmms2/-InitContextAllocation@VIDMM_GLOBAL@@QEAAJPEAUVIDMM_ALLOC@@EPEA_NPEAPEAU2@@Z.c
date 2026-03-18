/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0050B90
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EE44 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00112E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pppxxq @ 0x1C001E328 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C006751C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  D3DGPU_VIRTUAL_ADDRESS v21; // rax
  __int64 v22; // rcx
  LARGE_INTEGER v23; // rax
  ADAPTER_RENDER *v24; // rcx
  int v25; // r15d
  __int64 v26; // rdx
  __int64 v28; // rax
  ADAPTER_RENDER *v29; // rdi
  HANDLE CurrentProcessId; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+30h] [rbp-D8h]
  __int64 v35; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v36; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 76) & 0x3F;
  memset(&v36, 0, sizeof(v36));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v9;
  if ( a3 && (v15 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, a2, 0LL, 0LL, a4, a5), v19 = v15, v15 < 0) )
  {
    v28 = WdLogNewEntry5_WdEvent(v17, v16, v13, v18);
    *(_QWORD *)(v28 + 24) = a2;
    *(_QWORD *)(v28 + 32) = v19;
    WdLogEvent5_WdEvent(v28);
    return (unsigned int)v19;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v13, &v36);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v36);
      v36.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v20 = *(_QWORD *)(v9 + 40);
      if ( v20 )
        v21 = *(_QWORD *)(v20 + 16);
      else
        v21 = *(_QWORD *)(v9 + 48);
      v36.UpdateContextAllocation.ContextAllocation = v21;
      v22 = *(_QWORD *)(v9 + 136);
      if ( (*(_DWORD *)(v22 + 56) & 0x1000) != 0 )
        v36.Transfer.TransferOffset = 0;
      else
        v36.Transfer.TransferOffset = *(_DWORD *)(v22 + 16) + 1;
      v36.Transfer.TransferSize = *(_QWORD *)(v9 + 144) + *(_QWORD *)(*(_QWORD *)(v9 + 136) + 24LL);
      if ( (*(_DWORD *)(v9 + 80) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 504) & 8) != 0 )
          v36.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 376);
        else
          v36.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 16LL);
      }
      v23.QuadPart = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v24 = this[2];
      v36.Transfer.Source.SegmentAddress = v23;
      v25 = ADAPTER_RENDER::DdiBuildPagingBuffer(v24, &v36);
      if ( bTracingEnabled )
      {
        v29 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v35 = 0LL;
          v34 = (int)v29;
          Template_pppxxq(v32, v31, v33, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v36,
        v25,
        v26 & v34,
        (void *)(v26 & v35));
    }
    while ( v25 < 0 );
    return 0LL;
  }
}
