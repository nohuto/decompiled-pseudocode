/*
 * XREFs of ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180003A74 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetCurrentNodeWorldTransform@CGraphIterator@@QEAAJPEAVCMILMatrix@@PEA_N0@Z @ 0x18000A6A8 (-GetCurrentNodeWorldTransform@CGraphIterator@@QEAAJPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C (-GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BF08 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800569B4 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x180103AC8 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180104290 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z @ 0x18012F604 (-BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edi
  __int64 v7; // rsi
  struct CTreeData *TreeData; // rax
  __int128 v9; // xmm0
  struct CTreeData *v10; // r15
  __int64 v11; // xmm1_8
  int CurrentNodeWorldTransform; // eax
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  __int128 *v17; // rax
  float v18; // xmm9_4
  float v19; // xmm8_4
  unsigned int v20; // r8d
  float v21; // xmm7_4
  char v22; // dl
  float v23; // xmm6_4
  unsigned int i; // ecx
  float v25; // xmm0_4
  float v26; // xmm0_4
  CGeometry *v27; // rcx
  float v29; // xmm2_4
  float v30; // xmm3_4
  __int128 *v31; // rax
  unsigned int v32; // r8d
  char v33; // dl
  unsigned int j; // ecx
  float *v35; // rax
  float v36; // xmm1_4
  __int64 v37; // rdx
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  int ShapeDataNoRef; // eax
  int v42; // eax
  int PointInVisualSpace; // eax
  int v44; // eax
  bool v45; // al
  float *v46; // rax
  __int64 v47; // rcx
  float v48; // xmm0_4
  int v49; // eax
  float v50; // xmm2_4
  __int64 v51; // rcx
  unsigned int BspPolygonListCount; // ebx
  int v53; // eax
  bool v54[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v58[4]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v59[64]; // [rsp+A8h] [rbp-60h] BYREF
  char v60; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v61; // [rsp+128h] [rbp+20h] BYREF
  float v62[4]; // [rsp+138h] [rbp+30h]
  __int128 v63; // [rsp+148h] [rbp+40h] BYREF
  __int128 v64; // [rsp+158h] [rbp+50h]
  __int128 v65; // [rsp+168h] [rbp+60h]
  float v66[12]; // [rsp+178h] [rbp+70h]

  v3 = *((_QWORD *)this + 3);
  v56 = 0LL;
  v6 = 0;
  if ( v3 )
    v7 = v3 - 64;
  else
    v7 = 0LL;
  TreeData = CVisual::FindTreeData((CVisual *)v7, a2);
  v9 = *(_OWORD *)(v7 + 156);
  v10 = TreeData;
  *(_BYTE *)(v7 + 89) &= ~0x40u;
  v11 = *(_QWORD *)(v7 + 172);
  *((_BYTE *)TreeData + 264) &= 0xCFu;
  *a3 = 1;
  *((_BYTE *)TreeData + 264) &= ~8u;
  LODWORD(TreeData) = *(_DWORD *)(v7 + 216);
  *(_QWORD *)v62 = v11;
  LODWORD(v55) = (_DWORD)TreeData;
  v61 = v9;
  if ( (_DWORD)TreeData != -1 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 184, &v55);
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v61)
    || (*(_BYTE *)(v7 + 90) & 4) != 0 )
  {
    *a3 = 0;
    goto LABEL_39;
  }
  CurrentNodeWorldTransform = CGraphIterator::GetCurrentNodeWorldTransform(
                                (CHitTestContext *)((char *)this + 16),
                                (struct CMILMatrix *)v59,
                                &v54[1],
                                (struct CMILMatrix *)((unsigned __int64)&v60 & -(__int64)(*(_QWORD *)(v7 + 368) != 0LL)));
  v6 = CurrentNodeWorldTransform;
  if ( CurrentNodeWorldTransform < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentNodeWorldTransform, 0x60u);
    goto LABEL_39;
  }
  CBaseMatrixStack::Top((CHitTestContext *)((char *)this + 120), (struct CBaseMatrix *)&v63);
  v58[1] = v64;
  v58[3] = *(_OWORD *)v66;
  v58[0] = v63;
  v58[2] = v65;
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v63 + 2)) & _xmm);
  if ( v13 < 0.00012207031 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v64 + 2)) & _xmm) < 0.00012207031
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v66[2]) & _xmm) < 0.00012207031 )
    {
LABEL_11:
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v64 + 3)) & _xmm);
      v15 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v63 + 3)) & _xmm) * 40960.0)
          + (float)(v14 * 40960.0);
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v66[3]) & _xmm);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v15 + v16) - 1.0)) & _xmm) < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v62[1]) & _xmm) < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v62[0]) & _xmm) < 0.00012207031 )
      {
        v57 = v61;
        if ( *(float *)&v63 == 1.0
          && *((float *)&v63 + 1) == 0.0
          && *((float *)&v63 + 2) == 0.0
          && *((float *)&v63 + 3) == 0.0
          && *(float *)&v64 == 0.0
          && *((float *)&v64 + 1) == 1.0
          && *((float *)&v64 + 2) == 0.0
          && *((float *)&v64 + 3) == 0.0
          && *(float *)&v65 == 0.0
          && *((float *)&v65 + 1) == 0.0
          && *((float *)&v65 + 2) == 1.0
          && *((float *)&v65 + 3) == 0.0 )
        {
          v17 = &v57;
          v18 = v66[0] + *(float *)&v61;
          v19 = v66[1] + *((float *)&v61 + 1);
          v20 = 4;
          v21 = v66[0] + *((float *)&v61 + 2);
          v22 = 1;
          v23 = v66[1] + *((float *)&v61 + 3);
          *(float *)&v57 = v66[0] + *(float *)&v61;
          *((float *)&v57 + 1) = v66[1] + *((float *)&v61 + 1);
          *((float *)&v57 + 2) = v66[0] + *((float *)&v61 + 2);
          *((float *)&v57 + 3) = v66[1] + *((float *)&v61 + 3);
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)v58,
            (const struct MilRectF *)&v57,
            (struct MilPoint2F *const)&v61);
          v23 = *((float *)&v57 + 3);
          v17 = &v61;
          v21 = *((float *)&v57 + 2);
          v20 = 8;
          v19 = *((float *)&v57 + 1);
          v22 = 0;
          v18 = *(float *)&v57;
        }
        for ( i = 0; i < v20; ++i )
          v17 = (__int128 *)((char *)v17 + 4);
        if ( !v22 )
        {
          v46 = (float *)&v61 + 3;
          v55 = v61;
          v47 = 3LL;
          v23 = *((float *)&v61 + 1);
          v21 = *(float *)&v61;
          *(_QWORD *)&v57 = v61;
          v19 = *((float *)&v61 + 1);
          v18 = *(float *)&v61;
          do
          {
            v48 = *(v46 - 1);
            if ( v18 > v48 )
              v18 = *(v46 - 1);
            if ( v19 > *v46 )
              v19 = *v46;
            if ( v48 > v21 )
              v21 = *(v46 - 1);
            if ( *v46 > v23 )
              v23 = *v46;
            v46 += 2;
            --v47;
          }
          while ( v47 );
        }
        goto LABEL_30;
      }
      goto LABEL_42;
    }
    if ( v13 < 0.00012207031 )
    {
      v29 = *((float *)&v65 + 1);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v64 + 2)) & _xmm) >= 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v65) & _xmm) >= 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v65 + 1)) & _xmm) >= 0.00012207031 )
      {
        goto LABEL_43;
      }
      v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v65 + 2) - 1.0)) & _xmm);
      if ( v50 < 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v65 + 2)) & _xmm) < 0.00012207031 )
      {
        v30 = *((float *)&v65 + 3);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v65 + 3)) & _xmm) >= 0.00012207031
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v66[2]) & _xmm) >= 0.00012207031 )
        {
          v29 = *((float *)&v65 + 1);
          goto LABEL_44;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_42:
  v29 = *((float *)&v65 + 1);
LABEL_43:
  v30 = *((float *)&v65 + 3);
LABEL_44:
  if ( *(float *)&v63 == 1.0
    && *((float *)&v63 + 1) == 0.0
    && *((float *)&v63 + 2) == 0.0
    && *((float *)&v63 + 3) == 0.0
    && *(float *)&v64 == 0.0
    && *((float *)&v64 + 1) == 1.0
    && *((float *)&v64 + 2) == 0.0
    && *((float *)&v64 + 3) == 0.0
    && *(float *)&v65 == 0.0
    && v29 == 0.0
    && *((float *)&v65 + 2) == 1.0
    && v30 == 0.0 )
  {
    v31 = &v61;
    v32 = 6;
    v33 = 1;
    v18 = *(float *)&v61 + v66[0];
    v19 = *((float *)&v61 + 1) + v66[1];
    v21 = *((float *)&v61 + 2) + v66[0];
    v23 = *((float *)&v61 + 3) + v66[1];
    *(float *)&v61 = *(float *)&v61 + v66[0];
    *((float *)&v61 + 1) = *((float *)&v61 + 1) + v66[1];
    *((float *)&v61 + 2) = *((float *)&v61 + 2) + v66[0];
    *((float *)&v61 + 3) = *((float *)&v61 + 3) + v66[1];
    v62[0] = v62[0] + v66[2];
    v62[1] = v62[1] + v66[2];
  }
  else
  {
    CBaseMatrix::Transform3DRectToPerspective((float *)v58, (float *)&v61, (float *)&v63);
    v23 = *((float *)&v61 + 3);
    v31 = &v63;
    v21 = *((float *)&v61 + 2);
    v33 = 0;
    v19 = *((float *)&v61 + 1);
    v32 = 24;
    v18 = *(float *)&v61;
  }
  for ( j = 0; j < v32; ++j )
    v31 = (__int128 *)((char *)v31 + 4);
  if ( !v33 )
  {
    v35 = (float *)&v63 + 1;
    v36 = FLOAT_3_4028235e38;
    v37 = 8LL;
    v38 = FLOAT_N3_4028235e38;
    v61 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v23 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
    v21 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
    v19 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
    v18 = *(float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    do
    {
      v39 = *(v35 - 1);
      if ( v18 > v39 )
        v18 = *(v35 - 1);
      if ( v39 > v21 )
        v21 = *(v35 - 1);
      if ( v19 > *v35 )
        v19 = *v35;
      if ( *v35 > v23 )
        v23 = *v35;
      v40 = v35[1];
      if ( v36 > v40 )
        v36 = v35[1];
      if ( v40 > v38 )
        v38 = v35[1];
      v35 += 3;
      --v37;
    }
    while ( v37 );
  }
LABEL_30:
  if ( v54[1] )
  {
    v49 = CBaseMatrixStack::Push((CHitTestContext *)((char *)this + 120), (const struct CMILMatrix *)v59, 0);
    v6 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x69u);
      goto LABEL_39;
    }
    *((_BYTE *)v10 + 264) |= 8u;
  }
  v25 = *((float *)this + 25);
  if ( v25 >= v19 && v23 > v25 )
  {
    v26 = *((float *)this + 24);
    if ( v26 >= v18 && v21 > v26 )
    {
      *(_BYTE *)(v7 + 89) |= 0x40u;
      v27 = *(CGeometry **)(v7 + 368);
      if ( v27 )
      {
        *(_QWORD *)&v57 = 0LL;
        ShapeDataNoRef = CGeometry::GetShapeDataNoRef(
                           v27,
                           (const struct D2D_SIZE_F *)(v7 + 148),
                           (struct CShape **)&v57);
        v6 = ShapeDataNoRef;
        if ( ShapeDataNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x79u);
          goto LABEL_39;
        }
        v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v57 + 16LL))(v57, 0LL, &v56);
        v6 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x7Au);
          goto LABEL_39;
        }
      }
      if ( v56 )
      {
        LODWORD(v55) = 0;
        v54[0] = 0;
        PointInVisualSpace = CHitTestContext::GetPointInVisualSpace(
                               this,
                               (struct CVisual *)v7,
                               v10,
                               (struct D2D_POINT_2F *)&v57,
                               v54,
                               1);
        v6 = PointInVisualSpace;
        if ( PointInVisualSpace < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, PointInVisualSpace, 0x88u);
          goto LABEL_39;
        }
        if ( v54[0] )
        {
          v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v56 + 56LL))(v56, v57, 0LL);
          v6 = v44;
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x8Cu);
            goto LABEL_39;
          }
        }
        v45 = (_DWORD)v55 != 0;
        *(_BYTE *)(v7 + 89) &= ~0x40u;
        *(_BYTE *)(v7 + 89) |= v45 << 6;
      }
      if ( *(_DWORD *)(v7 + 100) != 2 )
      {
LABEL_38:
        *a3 = (*(_BYTE *)(v7 + 89) & 0x40) != 0;
        goto LABEL_39;
      }
      if ( CVisual::HasBspPolygonList((CVisual *)v7) && (*(_BYTE *)(v7 + 89) & 0x40) != 0 )
      {
        v54[0] = 0;
        ((void (__fastcall *)(__int64, __int64, _QWORD, bool *, _OWORD *, _QWORD))CVisual::CalcEffectiveTransform)(
          v51,
          4LL,
          0LL,
          v54,
          v58,
          0LL);
        CBaseMatrixStack::Push((CHitTestContext *)((char *)this + 216), (const struct CMILMatrix *)v58, 0);
        *((_BYTE *)v10 + 264) |= 0x20u;
        BspPolygonListCount = CVisual::GetBspPolygonListCount((CVisual *)v7);
        if ( BspPolygonListCount )
        {
          while ( !*((_QWORD *)this + 14) )
          {
            v53 = CHitTestContext::BspHitTest(
                    this,
                    *(struct CPolygon **)(**(_QWORD **)(v7 + 424) + 8LL * --BspPolygonListCount));
            v6 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xA5u);
              goto LABEL_39;
            }
            if ( !BspPolygonListCount )
              break;
          }
        }
      }
      *a3 = 0;
    }
  }
  if ( *(_DWORD *)(v7 + 100) != 2 )
    goto LABEL_38;
LABEL_39:
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  return v6;
}
