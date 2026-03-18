/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C007B6DC
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C007B684 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        union _LARGE_INTEGER **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        struct _MDL *a7,
        unsigned int a8,
        char a9,
        int a10)
{
  SIZE_T QuadPart; // rax
  union _LARGE_INTEGER *v15; // rax
  DXGFASTMUTEX *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v21; // [rsp+40h] [rbp-C0h] BYREF

  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v21);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v21);
    v21.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v15 = a3[5];
      if ( v15 )
        QuadPart = v15[2].QuadPart;
      else
        QuadPart = (SIZE_T)a3[6];
    }
    else
    {
      QuadPart = 0LL;
    }
    v21.UpdateContextAllocation.ContextAllocation = 0LL;
    v21.Fill.FillSize = QuadPart;
    v21.MapApertureSegment.OffsetInPages = a6;
    v21.Transfer.Source.SegmentAddress.QuadPart = a5;
    v21.Fill.FillPattern = a4;
    v21.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)a7;
    v21.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v21.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    if ( a3 && a3[12] && (a3[59]->LowPart & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[39]);
      v16 = (DXGFASTMUTEX *)a3[39];
      v21.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[12][5].QuadPart - 32) + 24LL)
                                                                + 360LL);
      DXGFASTMUTEX::Release(v16, v17, v18, v19);
    }
    v20 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v21);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      a2,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      &v21,
      v20,
      a10,
      0LL);
  }
  while ( v20 == -1071775743 );
}
