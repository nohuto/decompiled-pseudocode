/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006CCF0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0096360 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099070 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A360 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        D3DGPU_VIRTUAL_ADDRESS *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4)
{
  unsigned __int8 v4; // r15
  __int64 v7; // rax
  unsigned int v8; // r14d
  D3DGPU_VIRTUAL_ADDRESS v9; // rax
  D3DGPU_VIRTUAL_ADDRESS v10; // rax
  D3DGPU_VIRTUAL_ADDRESS v11; // rcx
  int v12; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v13; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int8)a3;
  if ( ((_BYTE)this[5109] & 8) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(v7 + 24) = a2;
      *(_QWORD *)(v7 + 32) = v4;
    }
    v8 = *((_DWORD *)a2 + 19) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, a3, &v13);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, (struct _VIDMM_GLOBAL_ALLOC *)a2, &v13);
      v9 = a2[5];
      v13.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 16);
      else
        v10 = a2[6];
      v13.UpdateContextAllocation.ContextAllocation = v10;
      if ( v4 )
      {
        v11 = a2[17];
        v13.Transfer.Source.SegmentId |= 1u;
        if ( (*(_DWORD *)(v11 + 56) & 0x1000) != 0 )
          v13.Transfer.TransferOffset = 0;
        else
          v13.Transfer.TransferOffset = *(_DWORD *)(v11 + 16) + 1;
        v13.Transfer.TransferSize = a2[18];
      }
      else
      {
        v13.Transfer.Source.SegmentId &= ~1u;
        v13.Transfer.TransferOffset = 0;
        v13.Transfer.TransferSize = 0LL;
      }
      v12 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v13);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v8,
        (struct _VIDMM_GLOBAL_ALLOC *)a2,
        &v13,
        v12,
        0,
        0LL);
    }
    while ( v12 < 0 );
    if ( this[5115] )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency((VIDMM_GLOBAL *)this, &v13, (struct _VIDMM_GLOBAL_ALLOC *)a2);
  }
}
