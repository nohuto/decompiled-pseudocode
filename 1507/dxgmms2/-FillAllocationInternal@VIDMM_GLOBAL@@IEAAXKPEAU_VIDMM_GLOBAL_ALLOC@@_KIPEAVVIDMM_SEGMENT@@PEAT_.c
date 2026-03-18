/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D1D8
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     Template_pppxxq @ 0x1C000F590 (Template_pppxxq.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001014C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // rsi
  D3DGPU_VIRTUAL_ADDRESS v11; // rax
  D3DGPU_VIRTUAL_ADDRESS v12; // rax
  bool v13; // zf
  ADAPTER_RENDER *v14; // rcx
  int v15; // r12d
  ADAPTER_RENDER *v16; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // [rsp+20h] [rbp-198h]
  __int64 v22; // [rsp+40h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v23; // [rsp+50h] [rbp-168h] BYREF

  v8 = a2;
  if ( (*((_BYTE *)this[4999] + 456 * a2 + 420) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, a4, v21, a6, a7);
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v23);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v23);
      v23.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v12 = a3[5];
        if ( v12 )
          v11 = *(_QWORD *)(v12 + 16);
        else
          v11 = a3[6];
      }
      else
      {
        v11 = 0LL;
      }
      v23.Fill.FillPattern = 0;
      v13 = (*((_DWORD *)a6 + 14) & 0x1000) == 0;
      v23.UpdateContextAllocation.ContextAllocation = v11;
      v23.Fill.FillSize = a4;
      if ( v13 )
        v23.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
      else
        v23.Transfer.Source.SegmentId = 0;
      v14 = this[2];
      v23.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v15 = ADAPTER_RENDER::DdiBuildPagingBuffer(v14, &v23);
      if ( bTracingEnabled )
      {
        v16 = this[v8 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v22) = 0;
          Template_pppxxq(v19, v18, v20, CurrentProcessId, a3, v16, 0LL, a4, v22);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a3,
        &v23,
        v15,
        0,
        0LL);
    }
    while ( v15 < 0 );
  }
}
