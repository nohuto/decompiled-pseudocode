/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0
 * Callers:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180003900 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800032D0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  struct D2D_MATRIX_3X2_F *v4; // rcx
  CD2DContext *v5; // r10
  const struct ID2DContextOwner *v6; // rdx
  struct ID2D1Geometry *v7; // r9
  const __m128i *v8; // r8
  void (__fastcall *v9)(CD2DContext *, const struct ID2DContextOwner *, const __m128i *, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND); // rax
  float v11; // [rsp+28h] [rbp-30h]
  enum D2D1_ANTIALIAS_MODE v12; // [rsp+30h] [rbp-28h]
  enum D2D1_LAYER_OPTIONS1 v13; // [rsp+38h] [rbp-20h]
  enum D2D1_PRIMITIVE_BLEND v14; // [rsp+40h] [rbp-18h]

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
  v5 = (CD2DContext *)*((_QWORD *)a2 + 57);
  v6 = (struct CDrawingContext *)((char *)a2 + 128);
  v7 = (struct ID2D1Geometry *)*((_QWORD *)this + 3);
  v14 = *((_DWORD *)this + 18);
  v8 = (const __m128i *)((char *)this + 8);
  v9 = *(void (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *, const __m128i *, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v5 + 56LL);
  v13 = *((_DWORD *)this + 17);
  v12 = *((_DWORD *)this + 16);
  v11 = *((float *)this + 15);
  if ( v9 == CD2DContext::PushLayer )
    CD2DContext::PushLayer(v5, v6, v8, v7, v4, v11, v12, v13, v14);
  else
    ((void (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, const __m128i *, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))v9)(
      v5,
      v6,
      v8,
      v7,
      v4,
      LODWORD(v11),
      v12,
      v13,
      v14);
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
