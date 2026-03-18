/*
 * XREFs of ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801608D8
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18015CB68 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180110874 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801607C4 (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161544 (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1801625D8 (-SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CDeviceAlignedIntermediateRealizer::Realize(
        const struct CMILMatrix **this,
        struct IRenderTargetBitmap **a2,
        struct CDrawingContext **a3,
        struct CMILMatrix *a4,
        int *a5)
{
  const struct CMILMatrix *v5; // rdx
  unsigned int v6; // ebx
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float *v14; // rax
  CDeviceAlignedIntermediateRealizer *v15; // rcx
  int SurfaceAndContext; // eax
  int v17; // eax
  unsigned int v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v20[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v21[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+88h] [rbp-80h]
  _BYTE v23[64]; // [rsp+98h] [rbp-70h] BYREF
  int v24; // [rsp+D8h] [rbp-30h]
  _BYTE v25[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v26; // [rsp+128h] [rbp+20h]
  float v27; // [rsp+138h] [rbp+30h] BYREF
  float v28; // [rsp+13Ch] [rbp+34h]
  float v29; // [rsp+140h] [rbp+38h]
  float v30; // [rsp+144h] [rbp+3Ch]
  float v31; // [rsp+148h] [rbp+40h] BYREF
  float v32; // [rsp+14Ch] [rbp+44h]
  float v33; // [rsp+150h] [rbp+48h]
  float v34; // [rsp+154h] [rbp+4Ch]

  v5 = *this;
  v6 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  CMILMatrix::Multiply(this[2], (const struct CMILMatrix *)((char *)v5 + 4), (struct CMILMatrix *)v21);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)*this + 4, (__int64)*this + 160, &v31);
  v10 = v31;
  v11 = v32;
  v12 = v33;
  v13 = v34;
  v27 = v31;
  v28 = v32;
  v29 = v33;
  v30 = v34;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    goto LABEL_27;
  v14 = (float *)((char *)*this + 176);
  if ( *v14 > v10 )
  {
    v10 = *v14;
    v27 = *v14;
  }
  if ( v14[1] > v11 )
  {
    v11 = v14[1];
    v28 = v11;
  }
  if ( v12 > v14[2] )
  {
    v12 = v14[2];
    v29 = v12;
  }
  if ( v13 > v14[3] )
  {
    v13 = v14[3];
    v30 = v13;
  }
  if ( v12 <= v10 || v13 <= v11 )
    goto LABEL_27;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, (__int64)(this + 3), &v31);
  if ( v31 > v10 )
  {
    v10 = v31;
    v27 = v31;
  }
  if ( v32 > v11 )
  {
    v11 = v32;
    v28 = v32;
  }
  if ( v12 > v33 )
  {
    v12 = v33;
    v29 = v33;
  }
  if ( v13 > v34 )
  {
    v13 = v34;
    v30 = v34;
  }
  if ( v12 > v10 && v13 > v11 )
  {
    CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
      v15,
      (struct MilRectF *)&v27,
      v20,
      &v19,
      (struct CMILMatrix *)v23);
    CMILMatrix::SetToInverseOf2DTranslateOrScale(a4, (const struct CMILMatrix *)v23);
    CMILMatrix::Multiply(this[1], (const struct CMILMatrix *)v21, (struct CMILMatrix *)v25);
    CMILMatrix::Multiply((CMILMatrix *)v25, (const struct CMILMatrix *)v23);
    SurfaceAndContext = CBrushIntermediateRealizer::CreateSurfaceAndContext(this, v20[0], v19);
    v6 = SurfaceAndContext;
    if ( SurfaceAndContext < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0x9Bu);
    }
    else
    {
      v17 = CDrawingContext::PushTransformInternal(*a3, 0LL, (const struct CMILMatrix *)v25, 1, 1);
      v6 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x9Du);
    }
  }
  else
  {
LABEL_27:
    *a5 = 1;
  }
  return v6;
}
