/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0053FC0
 * Callers:
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C0053F78 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C006D010 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000E02C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00537E8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  SIZE_T v12; // rax
  DXGFASTMUTEX *v13; // rax
  struct _KTHREAD **v14; // rcx
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
        v12 = *((_QWORD *)v13 + 2);
      else
        v12 = (SIZE_T)a3[6];
    }
    else
    {
      v12 = 0LL;
    }
    v19.UpdateContextAllocation.ContextAllocation = 0LL;
    v19.Fill.FillSize = v12;
    v19.UnmapApertureSegment.DummyPage = a7;
    v19.Fill.FillPattern = a4;
    v19.MapApertureSegment.OffsetInPages = a6;
    v19.Transfer.Source.SegmentAddress.QuadPart = a5;
    if ( a3 && a3[12] && (*(_DWORD *)a3[59] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[39]);
      v14 = (struct _KTHREAD **)a3[39];
      v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[12] + 5) - 32LL)
                                                                            + 24LL)
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
