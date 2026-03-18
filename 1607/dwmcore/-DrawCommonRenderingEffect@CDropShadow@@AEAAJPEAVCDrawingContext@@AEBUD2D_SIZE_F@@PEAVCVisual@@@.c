/*
 * XREFs of ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC
 * Callers:
 *     ?Draw@CDropShadowContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801600F0 (-Draw@CDropShadowContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x180032ED0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180109E2C (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?SetForIntermediate@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x1801441CC (-SetForIntermediate@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 *     ?IsRectangular@CDropShadowContent@@QEBA_NXZ @ 0x18014FAE4 (-IsRectangular@CDropShadowContent@@QEBA_NXZ.c)
 */

__int64 __fastcall CDropShadow::DrawCommonRenderingEffect(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CVisual *a4)
{
  float v8; // xmm6_4
  float v9; // xmm7_4
  bool IsRectangular; // al
  float v11; // xmm1_4
  float v12; // xmm0_4
  float width; // xmm6_4
  float height; // xmm7_4
  float v15; // xmm1_4
  int v16; // eax
  unsigned int v17; // edi
  float v18; // xmm3_4
  struct D2D_SIZE_F v19; // xmm0_8
  float v20; // xmm2_4
  float v21; // xmm1_4
  int v22; // eax
  int v23; // eax
  unsigned int v25[4]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v26[64]; // [rsp+48h] [rbp-69h] BYREF
  int v27; // [rsp+88h] [rbp-29h]
  struct D2D_SIZE_F v28; // [rsp+98h] [rbp-19h] BYREF

  if ( this == CDropShadow::s_pFastShadow )
  {
    v8 = FLOAT_65_0;
    v9 = FLOAT_65_0;
  }
  else
  {
    IsRectangular = CDropShadowContent::IsRectangular(*((CDropShadowContent **)this + 24));
    v11 = *((float *)this + 38);
    if ( IsRectangular )
    {
      v12 = (float)(v11 * 2.0) + 1.0;
      width = fminf(a3->width, v12);
      height = fminf(a3->height, v12);
    }
    else
    {
      v28 = *a3;
      width = v28.width;
      height = v28.height;
    }
    v15 = v11 * 2.0;
    v9 = height + v15;
    v8 = width + v15;
  }
  CCachedVisualImage::GetCurrentSize(*((CCachedVisualImage **)this + 25), v25, (unsigned int *)&v28);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - (float)(int)v25[0])) & _xmm) > 0.015625
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - (float)SLODWORD(v28.width))) & _xmm) > 0.015625 )
  {
    CVisual::SetSize(*((CVisual **)this + 26), v8, v9);
    v16 = CCachedVisualImage::SetForIntermediate(
            *((CCachedVisualImage **)this + 25),
            *((struct CVisual **)this + 26),
            (int)v8,
            (int)v9);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1A4u);
      return v17;
    }
    CDropShadow::InvalidateShadow(this, 1);
  }
  CDrawingContext::UpdateNodeCVIRenderTarget(
    (__int64)a2,
    *((_QWORD *)this + 27),
    a4,
    *((_QWORD *)this + 25),
    1,
    (__int64)&v28);
  v18 = *((float *)this + 38);
  v19 = *a3;
  v27 = 0;
  v28 = v19;
  v20 = *((float *)this + 41) - v18;
  v28.height = v19.height + (float)(v18 * 2.0);
  v21 = *((float *)this + 40) - v18;
  v28.width = v19.width + (float)(v18 * 2.0);
  CMILMatrix::SetTranslation((CMILMatrix *)v26, v21, v20, *((float *)this + 42));
  v22 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v26, 1, 1);
  v17 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1BFu);
  }
  else
  {
    v23 = CDrawingContext::DrawCommonRenderingEffect(a2, a4, *((struct CSpriteVisualContent **)this + 24), &v28);
    v17 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1C5u);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v17;
}
