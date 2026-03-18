/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050EB8
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00112E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001E328 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050F58 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        __int64 a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  UINT v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  D3DGPU_VIRTUAL_ADDRESS v22; // rax
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  bool v24; // zf
  ADAPTER_RENDER *v25; // rcx
  ADAPTER_RENDER *v26; // r13
  HANDLE CurrentProcessId; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v32; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+1D0h] [rbp+C8h]

  v8 = (unsigned int)a2;
  if ( (*((_BYTE *)this[5017] + 456 * (unsigned int)a2 + 420) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, a4, a5, a6, a7);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a3;
      v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      v16 = a5;
      *(_QWORD *)(v15 + 24) = a4;
      *(_QWORD *)(v15 + 32) = a5;
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v21[3] = a6;
      v21[4] = a7->HighPart;
      v21[5] = a7->LowPart;
    }
    else
    {
      v16 = a5;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v32);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v32);
      v32.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v23 = a3[5];
        if ( v23 )
          v22 = *(_QWORD *)(v23 + 16);
        else
          v22 = a3[6];
      }
      else
      {
        v22 = 0LL;
      }
      v24 = (*((_DWORD *)a6 + 14) & 0x1000) == 0;
      v32.UpdateContextAllocation.ContextAllocation = v22;
      v32.Fill.FillSize = a4;
      v32.Fill.FillPattern = v16;
      if ( v24 )
        v32.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
      else
        v32.Transfer.Source.SegmentId = 0;
      v25 = this[2];
      v32.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v33 = ADAPTER_RENDER::DdiBuildPagingBuffer(v25, &v32);
      if ( bTracingEnabled )
      {
        v26 = this[v8 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          LODWORD(v31) = 0;
          Template_pppxxq(v29, v28, v30, CurrentProcessId, a3, v26, 0LL, a4, v31);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v32,
        v33,
        0,
        0LL);
      v16 = a5;
    }
    while ( v33 < 0 );
  }
}
