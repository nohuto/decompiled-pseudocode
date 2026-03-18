/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079840 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180124460 (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        __int64 a1,
        CDirtyRegion *a2,
        float *a3,
        __int64 a4,
        float *a5)
{
  bool v7; // si
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // r13
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
  __int64 *v23; // rax
  unsigned int v24; // r8d
  char v25; // dl
  unsigned int i; // ecx
  int v27; // eax
  bool v28; // zf
  CGeometry *v30; // rcx
  int ShapeDataNoRef; // eax
  float *v32; // rax
  __int64 v33; // rcx
  float v34; // xmm0_4
  __int64 v35; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+40h] [rbp-99h] BYREF
  CDirtyRegion *v37; // [rsp+48h] [rbp-91h] BYREF
  __int64 v38; // [rsp+50h] [rbp-89h]
  __int64 v39; // [rsp+58h] [rbp-81h]
  __int128 v40; // [rsp+60h] [rbp-79h] BYREF
  float v41; // [rsp+70h] [rbp-69h] BYREF
  float v42; // [rsp+74h] [rbp-65h]
  float v43; // [rsp+78h] [rbp-61h]
  float v44; // [rsp+7Ch] [rbp-5Dh]
  __int64 v45; // [rsp+80h] [rbp-59h] BYREF
  char v46; // [rsp+8Ch] [rbp-4Dh] BYREF

  v7 = *(_DWORD *)(a1 + 816) != 0;
  LODWORD(v38) = a4;
  v37 = a2;
  v8 = CVisual::CollectAdditionalDirtyRegion(a1, (__int64)a2, (CBaseMatrix *)a3, a4, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5DAu);
  }
  else if ( v7 && (CMergedRectBase<4>::GetRects(a1 + 744, &v35, &v36), v10 = 0, (_DWORD)v35) )
  {
    v11 = v36;
    v12 = *((float *)&v40 + 3);
    v13 = *((float *)&v40 + 2);
    v14 = *((float *)&v40 + 1);
    LODWORD(v15) = v40;
    while ( 1 )
    {
      v16 = *(float *)(v11 + 16LL * v10);
      v17 = *(float *)(v11 + 16LL * v10 + 4);
      v18 = *(float *)(v11 + 16LL * v10 + 8);
      v19 = *(float *)(v11 + 16LL * v10 + 12);
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
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)a3) )
      {
        v23 = (__int64 *)&v40;
        v15 = a3[12] + v16;
        v14 = a3[13] + v21;
        v24 = 4;
        v13 = a3[12] + v22;
        v25 = 1;
        v12 = a3[13] + v19;
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
        v23 = (__int64 *)((char *)v23 + 4);
      if ( !v25 )
      {
        v32 = (float *)&v46;
        v39 = v45;
        v33 = 3LL;
        v12 = *((float *)&v45 + 1);
        LODWORD(v13) = v45;
        v36 = v45;
        v14 = *((float *)&v45 + 1);
        LODWORD(v15) = v45;
        do
        {
          v34 = *(v32 - 1);
          if ( v15 > v34 )
            v15 = *(v32 - 1);
          if ( v14 > *v32 )
            v14 = *v32;
          if ( v34 > v13 )
            v13 = *(v32 - 1);
          if ( *v32 > v12 )
            v12 = *v32;
          v32 += 2;
          --v33;
        }
        while ( v33 );
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
      v27 = CDirtyRegion::Add(v37);
      v9 = v27;
      if ( v27 < 0 )
        break;
      if ( ++v10 >= (unsigned int)v35 )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x613u);
  }
  else
  {
LABEL_15:
    *(_BYTE *)(a1 + 73) |= 0x80u;
    v28 = *(_BYTE *)(a1 + 1196) == 0;
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 352LL);
    if ( !v28 )
    {
      v30 = *(CGeometry **)(a1 + 1032);
      if ( v30 )
      {
        ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v30, (const struct D2D_SIZE_F *)(a1 + 132), &v37);
        v9 = ShapeDataNoRef;
        if ( ShapeDataNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x623u);
        }
        else if ( !(unsigned __int8)CShape::IsEmpty(v37) )
        {
          CWindowNode::SubmitComposeTopContent(a1, a3);
        }
      }
    }
  }
  return v9;
}
