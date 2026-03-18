/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180029590
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18002CF74 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070FBC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180140D24 (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        __int64 a1,
        struct CShape *a2,
        __int64 a3,
        int a4,
        float *a5)
{
  bool v7; // si
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // r15
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  int v16; // eax
  bool v17; // zf
  CGeometry *v19; // rcx
  int ShapeDataNoRef; // eax
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  unsigned int v25; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+34h] [rbp-3Ch]
  struct CShape *v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  float v29; // [rsp+48h] [rbp-28h]
  float v30; // [rsp+4Ch] [rbp-24h]
  float v31; // [rsp+50h] [rbp-20h] BYREF
  float v32; // [rsp+54h] [rbp-1Ch]
  float v33; // [rsp+58h] [rbp-18h]
  float v34; // [rsp+5Ch] [rbp-14h]

  v7 = *(_DWORD *)(a1 + 624) != 0;
  v26 = a4;
  v27 = a2;
  v8 = CVisual::CollectAdditionalDirtyRegion(a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5DAu);
  }
  else if ( v7 && (CMergedRectBase<4>::GetRects(a1 + 552, &v25, &v28), v10 = 0, v25) )
  {
    v11 = v28;
    while ( 1 )
    {
      v12 = *(float *)(v11 + 16LL * v10);
      v13 = *(float *)(v11 + 16LL * v10 + 4);
      v14 = *(float *)(v11 + 16LL * v10 + 8);
      v15 = *(float *)(v11 + 16LL * v10 + 12);
      v31 = v12;
      v32 = v13;
      v33 = v14;
      v34 = v15;
      if ( v26 == 1 || v26 == 6 )
      {
        v31 = v12 + -0.5;
        v32 = v13 + -0.5;
        v33 = v14 + 0.5;
        v34 = v15 + 0.5;
      }
      CMILMatrix::Transform2DBoundsHelper<1>(a3, &v31, &v28);
      if ( a5 )
      {
        v21 = *(float *)&v28;
        if ( *a5 > *(float *)&v28 )
        {
          v21 = *a5;
          *(float *)&v28 = *a5;
        }
        v22 = *((float *)&v28 + 1);
        if ( a5[1] > *((float *)&v28 + 1) )
        {
          v22 = a5[1];
          *((float *)&v28 + 1) = v22;
        }
        v23 = v29;
        if ( v29 > a5[2] )
        {
          v23 = a5[2];
          v29 = v23;
        }
        v24 = v30;
        if ( v30 > a5[3] )
        {
          v24 = a5[3];
          v30 = v24;
        }
        if ( v23 <= v21 || v24 <= v22 )
        {
          v30 = 0.0;
          v29 = 0.0;
          v28 = 0LL;
        }
      }
      v16 = CDirtyRegion::Add(v27);
      v9 = v16;
      if ( v16 < 0 )
        break;
      if ( ++v10 >= v25 )
        goto LABEL_10;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x613u);
  }
  else
  {
LABEL_10:
    *(_BYTE *)(a1 + 153) |= 0x80u;
    v17 = *(_BYTE *)(a1 + 1004) == 0;
    *(_QWORD *)(a1 + 280) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 352LL);
    if ( !v17 )
    {
      v19 = *(CGeometry **)(a1 + 840);
      if ( v19 )
      {
        ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v19, (const struct D2D_SIZE_F *)(a1 + 192), &v27);
        v9 = ShapeDataNoRef;
        if ( ShapeDataNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x623u);
        }
        else if ( !CShape::IsEmpty(v27) )
        {
          CWindowNode::SubmitComposeTopContent(a1, a3);
        }
      }
    }
  }
  return v9;
}
