/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C9CC
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     Template_pppxxq @ 0x1C000F590 (Template_pppxxq.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001014C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004E848 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00551A8 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  D3DGPU_VIRTUAL_ADDRESS v7; // rax
  __int64 v8; // rcx
  unsigned __int8 IsPagingOperationPending; // al
  ADAPTER_RENDER *v10; // rcx
  int v11; // r14d
  ADAPTER_RENDER *v12; // rcx
  ADAPTER_RENDER *v13; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+48h] [rbp-C0h]
  _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+58h] [rbp-B0h] BYREF

  v4 = *((_DWORD *)a2 + 19) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 19) & 0x3F, a3, &v19);
  v19.Transfer.TransferOffset = 0;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v4, a2, &v19);
    v6 = *((_QWORD *)a2 + 5);
    v19.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 16);
    else
      v7 = *((_QWORD *)a2 + 6);
    v8 = *((_QWORD *)a2 + 16);
    v19.UpdateContextAllocation.ContextAllocation = v7;
    if ( (*(_DWORD *)(v8 + 56) & 0x1000) != 0 )
      v19.DiscardContent.SegmentId = 0;
    else
      v19.DiscardContent.SegmentId = *(_DWORD *)(v8 + 16) + 1;
    v19.Transfer.TransferSize = *((_QWORD *)a2 + 17) + *(_QWORD *)(v8 + 24);
    IsPagingOperationPending = VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, a2, 0);
    v10 = this[2];
    v19.Transfer.TransferOffset ^= (LOBYTE(v19.SpecialLockTransfer.TransferOffset) ^ (IsPagingOperationPending == 0)) & 1;
    v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v10, &v19);
    if ( v11 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v12 = this[2];
      v19.Transfer.TransferOffset |= 1u;
      v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v12, &v19);
    }
    if ( bTracingEnabled )
    {
      v13 = this[v4 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v18) = 5;
        Template_pppxxq(v16, v15, v17, CurrentProcessId, a2, v13, 0LL, 0LL, v18);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v4, a2, &v19, v11, 0, 0LL);
  }
  while ( v11 < 0 );
}
