/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180071290
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180027EDC (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180028088 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180072570 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qqqq @ 0x1800E1FC0 (Template_qqqq.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  struct D2D_MATRIX_3X2_F *v4; // rdi
  CD2DContext *v5; // r14
  const struct ID2DContextOwner *v6; // rdx
  enum D2D1_PRIMITIVE_BLEND v7; // r15d
  enum D2D1_LAYER_OPTIONS1 v8; // r12d
  enum D2D1_ANTIALIAS_MODE v9; // r13d
  float v10; // xmm6_4
  void (__usercall *v11)(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, struct ID2D1Geometry *@<r9>, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND); // rbp

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qqqq(
      (_DWORD)this,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      (int)*((float *)this + 2),
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  v4 = 0LL;
  if ( *((_BYTE *)this + 56) )
    v4 = (struct D2D_MATRIX_3X2_F *)((char *)this + 32);
  v5 = (CD2DContext *)*((_QWORD *)a2 + 47);
  v6 = (struct CDrawingContext *)((char *)a2 + 56);
  v7 = *((_DWORD *)this + 18);
  v8 = *((_DWORD *)this + 17);
  v9 = *((_DWORD *)this + 16);
  v10 = *((float *)this + 15);
  v11 = *(void (__usercall **)(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, struct ID2D1Geometry *@<r9>, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v5 + 56LL);
  if ( v11 == CD2DContext::PushLayer )
    CD2DContext::PushLayer(
      v5,
      v6,
      (const struct D2D_RECT_F *)((char *)this + 8),
      *((struct ID2D1Geometry **)this + 3),
      v4,
      v10,
      v9,
      v8,
      v7);
  else
    ((void (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, char *, _QWORD, struct D2D_MATRIX_3X2_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))v11)(
      v5,
      v6,
      (char *)this + 8,
      *((_QWORD *)this + 3),
      v4,
      LODWORD(v10),
      v9,
      v8,
      v7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qqqq(
      (int)*((float *)this + 4),
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      (int)*((float *)this + 2),
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  return 0LL;
}
