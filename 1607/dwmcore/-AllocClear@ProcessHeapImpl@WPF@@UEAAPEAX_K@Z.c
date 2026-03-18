/*
 * XREFs of ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18009DC48 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E1D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1800AB988 (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z @ 0x1800ACB94 (-AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z.c)
 *     ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1800B0628 (-Create@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x1800B186C (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 *     ?Create@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x1800B2160 (-Create@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compone.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800B24C4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800B25AC (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

void *__fastcall WPF::ProcessHeapImpl::AllocClear(WPF::ProcessHeapImpl *this, size_t a2)
{
  SIZE_T v2; // r8
  void *v4; // rax
  void *v5; // rbx

  v2 = a2;
  if ( !a2 )
    v2 = 1LL;
  v4 = HeapAlloc(g_hProcessHeap, 0, v2);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, a2);
  return v5;
}
