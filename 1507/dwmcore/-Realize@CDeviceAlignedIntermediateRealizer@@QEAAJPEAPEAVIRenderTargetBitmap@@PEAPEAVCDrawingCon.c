/*
 * XREFs of ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180122290
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012164C (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV-$TMilRe.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800DE97C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801221C4 (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180122F40 (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 */

__int64 __fastcall CDeviceAlignedIntermediateRealizer::Realize(
        const struct D2DMatrix **this,
        struct IRenderTargetBitmap **a2,
        struct CDrawingContext **a3,
        struct CMILMatrix *a4)
{
  unsigned int v7; // ebx
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  _DWORD *v12; // r10
  float *v13; // rax
  CDeviceAlignedIntermediateRealizer *v14; // rcx
  float v15; // xmm0_4
  const struct D2DMatrix *v16; // rdx
  float v17; // xmm5_4
  float v18; // xmm1_4
  int SurfaceAndContext; // eax
  int v20; // eax
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  float v24; // [rsp+38h] [rbp-C8h] BYREF
  float v25; // [rsp+3Ch] [rbp-C4h]
  float v26; // [rsp+40h] [rbp-C0h]
  float v27; // [rsp+44h] [rbp-BCh]
  float v28; // [rsp+48h] [rbp-B8h] BYREF
  float v29; // [rsp+4Ch] [rbp-B4h]
  float v30; // [rsp+50h] [rbp-B0h]
  float v31; // [rsp+54h] [rbp-ACh]
  float v32[5]; // [rsp+60h] [rbp-A0h] BYREF
  float v33; // [rsp+74h] [rbp-8Ch]
  float v34; // [rsp+90h] [rbp-70h]
  float v35; // [rsp+94h] [rbp-6Ch]
  _BYTE v36[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v37[64]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = 0;
  D2DMatrixMultiply((struct D2DMatrix *)v37, this[2], (const struct D2DMatrix *)((char *)*this + 4));
  CBaseMatrix::Transform2DBounds(
    (const struct D2DMatrix *)((char *)*this + 4),
    (const struct D2DMatrix *)((char *)*this + 152),
    (struct MilRectF *)&v28);
  v8 = v28;
  v9 = v29;
  v10 = v30;
  v11 = v31;
  v24 = v28;
  v25 = v29;
  v26 = v30;
  v27 = v31;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    goto LABEL_27;
  v13 = (float *)((char *)*this + 168);
  if ( *v13 > v8 )
  {
    v8 = *v13;
    v24 = *v13;
  }
  if ( v13[1] > v9 )
  {
    v9 = v13[1];
    v25 = v9;
  }
  if ( v10 > v13[2] )
  {
    v10 = v13[2];
    v26 = v10;
  }
  if ( v11 > v13[3] )
  {
    v11 = v13[3];
    v27 = v11;
  }
  if ( v10 <= v8 || v11 <= v9 )
    goto LABEL_27;
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v37, (const struct MilRectF *)(this + 3), (struct MilRectF *)&v28);
  if ( v28 > v8 )
  {
    v8 = v28;
    v24 = v28;
  }
  if ( v29 > v9 )
  {
    v9 = v29;
    v25 = v29;
  }
  if ( v10 > v30 )
  {
    v10 = v30;
    v26 = v30;
  }
  if ( v11 > v31 )
  {
    v11 = v31;
    v27 = v31;
  }
  if ( v10 > v8 && v11 > v9 )
  {
    CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
      v14,
      (struct MilRectF *)&v24,
      &v22,
      &v23,
      (struct CMILMatrix *)v32);
    v15 = v35 / v33;
    v16 = this[1];
    *((_DWORD *)a4 + 1) = 0;
    *((_DWORD *)a4 + 2) = 0;
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 4) = 0;
    *((_DWORD *)a4 + 6) = 0;
    *((_DWORD *)a4 + 7) = 0;
    *((_DWORD *)a4 + 8) = 0;
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 11) = 0;
    *((_DWORD *)a4 + 14) = 0;
    *((_DWORD *)a4 + 10) = 1065353216;
    *((_DWORD *)a4 + 15) = 1065353216;
    v17 = v34 / v32[0];
    *((_DWORD *)a4 + 13) = LODWORD(v15) ^ _xmm;
    v18 = 1.0 / v33;
    *(float *)a4 = 1.0 / v32[0];
    *((_DWORD *)a4 + 12) = LODWORD(v17) ^ _xmm;
    *((float *)a4 + 5) = v18;
    D2DMatrixMultiply((struct D2DMatrix *)v36, v16, (const struct D2DMatrix *)v37);
    D2DMatrixMultiply((struct D2DMatrix *)v36, (const struct D2DMatrix *)v36, (const struct D2DMatrix *)v32);
    SurfaceAndContext = CBrushIntermediateRealizer::CreateSurfaceAndContext(this, v22, v23);
    v7 = SurfaceAndContext;
    if ( SurfaceAndContext >= 0 )
    {
      v20 = CDrawingContext::PushTransformInternal(*a3, 0LL, (const struct CMILMatrix *)v36, 1, 1);
      v7 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x9Fu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0x9Du);
    }
  }
  else
  {
LABEL_27:
    *v12 = 1;
  }
  return v7;
}
