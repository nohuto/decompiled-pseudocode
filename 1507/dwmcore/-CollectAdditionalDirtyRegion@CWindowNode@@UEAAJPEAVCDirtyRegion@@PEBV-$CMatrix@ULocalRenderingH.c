/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007CB50
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368 (-GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18010695C (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CBitmapOfDeviceBitmaps *a1,
        CDirtyRegion *this,
        CBaseMatrix *a3,
        __int64 a4,
        float *a5)
{
  bool v7; // bl
  int ShapeDataNoRef; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm10_4
  CBaseMatrix *v20; // rcx
  float v21; // xmm4_4
  float v22; // xmm5_4
  struct MilRectF **v23; // rax
  unsigned int v24; // r8d
  char v25; // dl
  unsigned int i; // ecx
  int v27; // eax
  bool v28; // zf
  CGeometry *v30; // rcx
  float *v31; // rax
  __int64 v32; // rcx
  float v33; // xmm0_4
  int v34; // ebx
  unsigned int v35; // [rsp+28h] [rbp-B1h]
  unsigned int v36; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-9Dh]
  __int64 v38; // [rsp+40h] [rbp-99h]
  struct MilRectF *v39[3]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v40; // [rsp+60h] [rbp-79h] BYREF
  float v41; // [rsp+70h] [rbp-69h] BYREF
  float v42; // [rsp+74h] [rbp-65h]
  float v43; // [rsp+78h] [rbp-61h]
  float v44; // [rsp+7Ch] [rbp-5Dh]
  struct MilRectF *v45; // [rsp+80h] [rbp-59h] BYREF
  char v46; // [rsp+8Ch] [rbp-4Dh] BYREF

  v7 = *((_DWORD *)a1 + 216) != 0;
  LODWORD(v38) = a4;
  ShapeDataNoRef = CVisual::CollectAdditionalDirtyRegion(a1, this, a3, a4, 0LL);
  v10 = ShapeDataNoRef;
  if ( ShapeDataNoRef < 0 )
  {
    v35 = 1497;
    goto LABEL_58;
  }
  if ( !v7 || (CMergedRect::GetRects((__m128i *)((char *)a1 + 792), &v36, (__m128i **)v39), v11 = 0, v37 = 0, !v36) )
  {
LABEL_21:
    *((_BYTE *)a1 + 90) |= 2u;
    v28 = *((_BYTE *)a1 + 1244) == 0;
    *((_QWORD *)a1 + 29) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 352LL);
    if ( v28 )
      return v10;
    v30 = (CGeometry *)*((_QWORD *)a1 + 135);
    if ( !v30 )
      return v10;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v30, (const struct D2D_SIZE_F *)((char *)a1 + 148), v39);
    v10 = ShapeDataNoRef;
    if ( ShapeDataNoRef >= 0 )
    {
      if ( !CShape::IsEmpty(v39[0]) )
        CWindowNode::SubmitComposeTopContent(a1, a3);
      return v10;
    }
    v35 = 1570;
LABEL_58:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, v35);
    return v10;
  }
  v12 = *((float *)&v40 + 3);
  v13 = *((float *)&v40 + 2);
  v14 = *((float *)&v40 + 1);
  LODWORD(v15) = v40;
  while ( 1 )
  {
    v16 = *((float *)v39[0] + 4 * v11);
    v17 = *((float *)v39[0] + 4 * v11 + 1);
    v18 = *((float *)v39[0] + 4 * v11 + 2);
    v19 = *((float *)v39[0] + 4 * v11 + 3);
    v41 = v16;
    v42 = v17;
    v43 = v18;
    v44 = v19;
    if ( (_DWORD)v38 == 1 || (_DWORD)v38 == 6 )
    {
      v16 = v16 + -0.5;
      v19 = v19 + 0.5;
      v41 = v16;
      v42 = v17 + -0.5;
      v43 = v18 + 0.5;
      v44 = v19;
    }
    if ( CBaseMatrix::IsExactlyPureTranslate(a3) )
    {
      v23 = (struct MilRectF **)&v40;
      v15 = *((float *)a3 + 12) + v16;
      v14 = *((float *)a3 + 13) + v21;
      v24 = 4;
      v13 = *((float *)a3 + 12) + v22;
      v25 = 1;
      v12 = *((float *)a3 + 13) + v19;
      *(float *)&v40 = v15;
      *(_QWORD *)((char *)&v40 + 4) = __PAIR64__(LODWORD(v13), LODWORD(v14));
      *((float *)&v40 + 3) = v12;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(v20, (const struct MilRectF *)&v41, (struct MilPoint2F *const)&v45);
      v25 = 0;
      v23 = &v45;
      v24 = 8;
    }
    for ( i = 0; i < v24; ++i )
      v23 = (struct MilRectF **)((char *)v23 + 4);
    if ( !v25 )
    {
      v31 = (float *)&v46;
      v39[2] = v45;
      v32 = 3LL;
      v12 = *((float *)&v45 + 1);
      LODWORD(v13) = (_DWORD)v45;
      v39[1] = v45;
      v14 = *((float *)&v45 + 1);
      LODWORD(v15) = (_DWORD)v45;
      do
      {
        v33 = *(v31 - 1);
        if ( v15 > v33 )
          v15 = *(v31 - 1);
        if ( v14 > *v31 )
          v14 = *v31;
        if ( v33 > v13 )
          v13 = *(v31 - 1);
        if ( *v31 > v12 )
          v12 = *v31;
        v31 += 2;
        --v32;
      }
      while ( v32 );
      *(_QWORD *)&v40 = __PAIR64__(LODWORD(v14), LODWORD(v15));
      *((_QWORD *)&v40 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v13));
    }
    if ( a5 )
    {
      if ( *a5 > v15 )
      {
        v15 = *a5;
        *(float *)&v40 = *a5;
      }
      if ( a5[1] > v14 )
      {
        v14 = a5[1];
        *((float *)&v40 + 1) = v14;
      }
      if ( v13 > a5[2] )
      {
        v13 = a5[2];
        *((float *)&v40 + 2) = v13;
      }
      if ( v12 > a5[3] )
      {
        v12 = a5[3];
        *((float *)&v40 + 3) = v12;
      }
      if ( v13 <= v15 || v12 <= v14 )
      {
        v12 = 0.0;
        v13 = 0.0;
        v14 = 0.0;
        v15 = 0.0;
        v40 = 0uLL;
      }
    }
    v10 = 0;
    if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v15
      && v13 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v14
      && v12 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      v34 = *((_DWORD *)this + 248);
      CDirtyRegion::Initialize(this, *((_QWORD *)this + 2), (CDirtyRegion *)((char *)this + 996), 1);
      *((_DWORD *)this + 248) = v34;
      v11 = v37;
    }
    if ( !*((_BYTE *)this + 1012) && !*((_DWORD *)this + 248) )
    {
      v27 = CDirtyRegion::_Add(this, a1, 0, &v40);
      v10 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1C3u);
      if ( (v10 & 0x80000000) != 0 )
        break;
    }
    v37 = ++v11;
    if ( v11 >= v36 )
      goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x612u);
  return v10;
}
