/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C007C3C0
 * Callers:
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C007C378 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        union _LARGE_INTEGER **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  SIZE_T QuadPart; // rax
  union _LARGE_INTEGER *v13; // rax
  DXGFASTMUTEX *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+40h] [rbp-C0h] BYREF

  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v19);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v19);
    v19.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v13 = a3[5];
      if ( v13 )
        QuadPart = v13[2].QuadPart;
      else
        QuadPart = (SIZE_T)a3[6];
    }
    else
    {
      QuadPart = 0LL;
    }
    v19.UpdateContextAllocation.ContextAllocation = 0LL;
    v19.Fill.FillSize = QuadPart;
    v19.UnmapApertureSegment.DummyPage = a7;
    v19.Fill.FillPattern = a4;
    v19.MapApertureSegment.OffsetInPages = a6;
    v19.Transfer.Source.SegmentAddress.QuadPart = a5;
    if ( a3 && a3[12] && (a3[59]->LowPart & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[39]);
      v14 = (DXGFASTMUTEX *)a3[39];
      v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[12][5].QuadPart - 32) + 24LL)
                                                                + 360LL);
      DXGFASTMUTEX::Release(v14, v15, v16, v17);
    }
    v18 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v19);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      a2,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      &v19,
      v18,
      a8,
      0LL);
  }
  while ( v18 == -1071775743 );
}
