/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050870
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003EF20 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006BDF0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0061FE0 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  char v3; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  D3DGPU_VIRTUAL_ADDRESS v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v11; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (char)a3;
  if ( ((_BYTE)this[5069] & 8) == 0 )
  {
    v6 = *((_DWORD *)a2 + 19) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v6, a3, &v11);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v11);
      v7 = *((_QWORD *)a2 + 5);
      v11.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      if ( v7 )
        v8 = *(_QWORD *)(v7 + 16);
      else
        v8 = *((_QWORD *)a2 + 6);
      v11.UpdateContextAllocation.ContextAllocation = v8;
      if ( v3 )
      {
        v9 = *((_QWORD *)a2 + 16);
        v11.Transfer.Source.SegmentId |= 1u;
        if ( (*(_DWORD *)(v9 + 56) & 0x1000) != 0 )
          v11.Transfer.TransferOffset = 0;
        else
          v11.Transfer.TransferOffset = *(_DWORD *)(v9 + 16) + 1;
        v11.Transfer.TransferSize = *((_QWORD *)a2 + 17);
      }
      else
      {
        v11.Transfer.Source.SegmentId &= ~1u;
        v11.Transfer.TransferOffset = 0;
        v11.Transfer.TransferSize = 0LL;
      }
      v10 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v11);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v11, v10, 0, 0LL);
    }
    while ( v10 < 0 );
    if ( this[5075] )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency((VIDMM_GLOBAL *)this, &v11, a2);
  }
}
