/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D744
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C005875C (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C0061A48 (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLU.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct _EPROCESS **a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v9; // rsi
  bool v11; // zf
  __int128 v12; // xmm0
  int v13; // ebx
  __int64 v14; // r8
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _DXGKARG_BUILDPAGINGBUFFER v18; // [rsp+40h] [rbp-168h] BYREF

  v9 = a2;
  if ( !*((_DWORD *)this + 1616) && ((_BYTE)this[5069] & 8) == 0 )
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v18);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, 0LL, &v18);
      v11 = this[5075] == 0LL;
      v12 = (__int128)*a3;
      v18.Operation = DXGK_OPERATION_FLUSH_TLB;
      *(_OWORD *)&v18.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      *(_OWORD *)&v18.Transfer.hAllocation = v12;
      v18.Transfer.Source.SegmentAddress.QuadPart = a7;
      if ( !v11 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb((VIDMM_GLOBAL *)this, *a4, &v18.FlushTlb, v9);
      v13 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v18);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v9, 0LL, &v18, v13, 0, 0LL);
    }
    while ( v13 == -1071775743 );
    v15 = (_DWORD *)*((_QWORD *)this[4999] + 57 * v9 + 53);
    if ( (*v15 & 0x20) != 0 && ((_DWORD)a4[6] & 2) == 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((__int64)v15, &EventPerformanceWarning, v14, 23);
      if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q((__int64)v15, &EventProfilerEnter, v14, 8010);
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v9, 0, 0LL, 0LL, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, v9);
      LOBYTE(v17) = 1;
      if ( ((_DWORD)a4[6] & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcess((VIDMM_PROCESS *)a4, *((_DWORD *)this[3] + 46), 1);
        VIDMM_PROCESS::SuspendResumeProcess((VIDMM_PROCESS *)a4, *((_DWORD *)this[3] + 46), 0);
      }
      if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v16, &EventProfilerExit, v17, 8010);
    }
  }
}
