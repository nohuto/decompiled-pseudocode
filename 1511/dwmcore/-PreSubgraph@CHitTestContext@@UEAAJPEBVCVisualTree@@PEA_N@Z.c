/*
 * XREFs of ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x18000631C (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18000801C (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800095FC (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180048F10 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A9264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1800F7A20 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x18012027C (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801433C8 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rsi
  const struct CVisual *v5; // rdi
  unsigned int v6; // r14d
  struct CTreeData *TreeData; // rax
  __int128 v10; // xmm0
  struct CTreeData *v11; // r13
  __int64 v12; // xmm1_8
  bool IsPreserve3DRoot; // al
  __int64 v14; // rcx
  int WorldTransform; // eax
  int v16; // eax
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __int128 *v21; // rax
  float v22; // xmm4_4
  unsigned int v23; // r8d
  float v24; // xmm2_4
  float v25; // xmm3_4
  char v26; // dl
  float v27; // xmm1_4
  unsigned int i; // ecx
  float v29; // xmm0_4
  float v30; // xmm0_4
  CGeometry *v31; // rcx
  __int64 v32; // rdi
  bool v33; // di
  float v35; // xmm2_4
  float v36; // xmm3_4
  __int128 *v37; // rax
  unsigned int v38; // r8d
  char v39; // dl
  unsigned int j; // ecx
  float *v41; // rax
  float v42; // xmm5_4
  __int64 v43; // rcx
  float v44; // xmm6_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  int ShapeDataNoRef; // eax
  int v48; // eax
  int v49; // eax
  char v50; // al
  float *v51; // rax
  __int64 v52; // rcx
  float v53; // xmm0_4
  float v54; // xmm2_4
  __int64 v55; // rcx
  unsigned int BspPolygonListCount; // ebx
  int v57; // eax
  bool v58; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v59[7]; // [rsp+39h] [rbp-CFh] BYREF
  __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v62; // [rsp+50h] [rbp-B8h] BYREF
  float v63; // [rsp+68h] [rbp-A0h] BYREF
  float v64; // [rsp+6Ch] [rbp-9Ch]
  float v65; // [rsp+70h] [rbp-98h]
  float v66; // [rsp+74h] [rbp-94h]
  float v67; // [rsp+78h] [rbp-90h]
  float v68; // [rsp+7Ch] [rbp-8Ch]
  float v69; // [rsp+80h] [rbp-88h]
  float v70; // [rsp+84h] [rbp-84h]
  float v71; // [rsp+88h] [rbp-80h]
  float v72; // [rsp+8Ch] [rbp-7Ch]
  float v73; // [rsp+90h] [rbp-78h]
  float v74; // [rsp+94h] [rbp-74h]
  float v75; // [rsp+98h] [rbp-70h]
  float v76; // [rsp+9Ch] [rbp-6Ch]
  float v77; // [rsp+A0h] [rbp-68h]
  float v78; // [rsp+A4h] [rbp-64h]
  _BYTE v79[64]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v80[64]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v81; // [rsp+128h] [rbp+20h] BYREF
  __int64 v82; // [rsp+138h] [rbp+30h]
  _BYTE v83[4]; // [rsp+148h] [rbp+40h] BYREF
  char v84; // [rsp+14Ch] [rbp+44h] BYREF

  v3 = *((_QWORD *)this + 3);
  v5 = (const struct CVisual *)*((_QWORD *)this + 4);
  v6 = 0;
  v61 = 0LL;
  TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
  v10 = *(_OWORD *)(v3 + 140);
  v11 = TreeData;
  *(_BYTE *)(v3 + 73) &= ~0x10u;
  v12 = *(_QWORD *)(v3 + 156);
  *((_BYTE *)TreeData + 264) &= ~8u;
  *a3 = 1;
  LODWORD(TreeData) = *(_DWORD *)(v3 + 200);
  v82 = v12;
  LODWORD(v60) = (_DWORD)TreeData;
  v81 = v10;
  if ( (_DWORD)TreeData != -1 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 30, &v60);
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v81)
    || (*(_BYTE *)(v3 + 74) & 1) != 0
    || !*(_DWORD *)(v3 + 84) && CVisual::GetTransform3DEffectNoRef((CVisual *)v3) )
  {
    *a3 = 0;
    goto LABEL_40;
  }
  IsPreserve3DRoot = CVisual::IsPreserve3DRoot((CVisual *)v3, v5);
  v14 = *((_QWORD *)this + 3);
  v58 = IsPreserve3DRoot;
  WorldTransform = CVisual::GetWorldTransform(
                     v14,
                     a2,
                     4LL,
                     v80,
                     v59,
                     (unsigned __int64)v79 & -(__int64)(*(_QWORD *)(v3 + 352) != 0LL));
  v6 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x64u);
    goto LABEL_40;
  }
  if ( v3 == *((_QWORD *)a2 + 3) )
  {
    v27 = *((float *)&v81 + 3);
    v24 = *((float *)&v81 + 2);
    v25 = *((float *)&v81 + 1);
    v22 = *(float *)&v81;
    goto LABEL_32;
  }
  v16 = CVisual::GetWorldTransform(*(_QWORD *)(v3 + 64), a2, 4LL, &v63, 0LL, 0LL);
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x6Bu);
    goto LABEL_40;
  }
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v65) & _xmm);
  if ( v17 < 0.00012207031 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v69) & _xmm) < 0.00012207031
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v77) & _xmm) < 0.00012207031 )
    {
LABEL_13:
      v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v66) & _xmm);
      v19 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v70) & _xmm) * 40960.0) + (float)(v18 * 40960.0);
      v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v78) & _xmm);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v19 + v20) - 1.0)) & _xmm) < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v82 + 1)) & _xmm) < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v82) & _xmm) < 0.00012207031 )
      {
        v62 = v81;
        if ( v63 == 1.0
          && v64 == 0.0
          && v65 == 0.0
          && v66 == 0.0
          && v67 == 0.0
          && v68 == 1.0
          && v69 == 0.0
          && v70 == 0.0
          && v71 == 0.0
          && v72 == 0.0
          && v73 == 1.0
          && v74 == 0.0 )
        {
          v21 = &v62;
          v22 = v75 + *(float *)&v81;
          v23 = 4;
          v24 = v75 + *((float *)&v81 + 2);
          v25 = v76 + *((float *)&v81 + 1);
          v26 = 1;
          v27 = v76 + *((float *)&v81 + 3);
          *(float *)&v62 = v75 + *(float *)&v81;
          *((float *)&v62 + 2) = v75 + *((float *)&v81 + 2);
          *((float *)&v62 + 1) = v76 + *((float *)&v81 + 1);
          *((float *)&v62 + 3) = v76 + *((float *)&v81 + 3);
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)&v63,
            (const struct MilRectF *)&v62,
            (struct MilPoint2F *const)&v81);
          v27 = *((float *)&v62 + 3);
          v21 = &v81;
          v24 = *((float *)&v62 + 2);
          v26 = 0;
          v25 = *((float *)&v62 + 1);
          v23 = 8;
          v22 = *(float *)&v62;
        }
        for ( i = 0; i < v23; ++i )
          v21 = (__int128 *)((char *)v21 + 4);
        if ( !v26 )
        {
          v51 = (float *)&v81 + 3;
          v60 = v81;
          v52 = 3LL;
          v27 = *((float *)&v81 + 1);
          v24 = *(float *)&v81;
          *(_QWORD *)&v62 = v81;
          v25 = *((float *)&v81 + 1);
          v22 = *(float *)&v81;
          do
          {
            v53 = *(v51 - 1);
            if ( v22 > v53 )
              v22 = *(v51 - 1);
            if ( v25 > *v51 )
              v25 = *v51;
            if ( v53 > v24 )
              v24 = *(v51 - 1);
            if ( *v51 > v27 )
              v27 = *v51;
            v51 += 2;
            --v52;
          }
          while ( v52 );
        }
        goto LABEL_32;
      }
      goto LABEL_43;
    }
    if ( v17 < 0.00012207031 )
    {
      v35 = v72;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v69) & _xmm) >= 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v71) & _xmm) >= 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v72) & _xmm) >= 0.00012207031 )
      {
        goto LABEL_44;
      }
      v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v73 - 1.0)) & _xmm);
      if ( v54 < 0.00012207031 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v73) & _xmm) < 0.00012207031 )
      {
        v36 = v74;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v74) & _xmm) >= 0.00012207031
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v77) & _xmm) >= 0.00012207031 )
        {
          v35 = v72;
          goto LABEL_45;
        }
        goto LABEL_13;
      }
    }
  }
LABEL_43:
  v35 = v72;
LABEL_44:
  v36 = v74;
LABEL_45:
  if ( v63 == 1.0
    && v64 == 0.0
    && v65 == 0.0
    && v66 == 0.0
    && v67 == 0.0
    && v68 == 1.0
    && v69 == 0.0
    && v70 == 0.0
    && v71 == 0.0
    && v35 == 0.0
    && v73 == 1.0
    && v36 == 0.0 )
  {
    v37 = &v81;
    v38 = 6;
    v39 = 1;
    v22 = *(float *)&v81 + v75;
    v25 = *((float *)&v81 + 1) + v76;
    v24 = *((float *)&v81 + 2) + v75;
    v27 = *((float *)&v81 + 3) + v76;
    *(float *)&v81 = *(float *)&v81 + v75;
    *((float *)&v81 + 1) = *((float *)&v81 + 1) + v76;
    *((float *)&v81 + 2) = *((float *)&v81 + 2) + v75;
    *((float *)&v81 + 3) = *((float *)&v81 + 3) + v76;
    *(float *)&v82 = *(float *)&v82 + v77;
    *((float *)&v82 + 1) = *((float *)&v82 + 1) + v77;
  }
  else
  {
    CBaseMatrix::Transform3DRectToPerspective(&v63, &v81, v83);
    v27 = *((float *)&v81 + 3);
    v37 = (__int128 *)v83;
    v24 = *((float *)&v81 + 2);
    v39 = 0;
    v25 = *((float *)&v81 + 1);
    v38 = 24;
    v22 = *(float *)&v81;
  }
  for ( j = 0; j < v38; ++j )
    v37 = (__int128 *)((char *)v37 + 4);
  if ( !v39 )
  {
    v41 = (float *)&v84;
    v42 = FLOAT_3_4028235e38;
    v43 = 8LL;
    v44 = FLOAT_N3_4028235e38;
    v81 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v27 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
    v24 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
    v25 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
    v22 = *(float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    do
    {
      v45 = *(v41 - 1);
      if ( v22 > v45 )
        v22 = *(v41 - 1);
      if ( v45 > v24 )
        v24 = *(v41 - 1);
      if ( v25 > *v41 )
        v25 = *v41;
      if ( *v41 > v27 )
        v27 = *v41;
      v46 = v41[1];
      if ( v42 > v46 )
        v42 = v41[1];
      if ( v46 > v44 )
        v44 = v41[1];
      v41 += 3;
      --v43;
    }
    while ( v43 );
  }
LABEL_32:
  v29 = *((float *)this + 25);
  if ( v29 < v25 || v27 <= v29 || (v30 = *((float *)this + 24), v30 < v22) || v24 <= v30 )
  {
    v33 = v58;
  }
  else
  {
    *(_BYTE *)(v3 + 73) |= 0x10u;
    v31 = *(CGeometry **)(v3 + 352);
    if ( v31 )
    {
      *(_QWORD *)&v62 = 0LL;
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v31, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShape **)&v62);
      v6 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x81u);
        goto LABEL_40;
      }
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v62 + 16LL))(v62, 0LL, &v61);
      v6 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x83u);
        goto LABEL_40;
      }
    }
    v32 = v61;
    if ( v61 )
    {
      LODWORD(v60) = 0;
      if ( !CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v79, (struct D2D_POINT_2F *)&v62) )
        goto LABEL_100;
      v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 56LL))(v32, v62, 0LL);
      v6 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x8Fu);
        goto LABEL_40;
      }
      if ( (_DWORD)v60 )
        v50 = 1;
      else
LABEL_100:
        v50 = 0;
      *(_BYTE *)(v3 + 73) &= ~0x10u;
      *(_BYTE *)(v3 + 73) |= 16 * (v50 & 1);
    }
    v33 = v58;
    if ( !v58 )
    {
LABEL_39:
      *a3 = (*(_BYTE *)(v3 + 73) & 0x10) != 0;
      goto LABEL_40;
    }
    if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 73) & 0x10) != 0 )
    {
      v58 = 0;
      ((void (__fastcall *)(__int64, __int64, _QWORD, bool *, _BYTE *, _QWORD))CVisual::CalcEffectiveTransform)(
        v55,
        5LL,
        0LL,
        &v58,
        v79,
        0LL);
      CBaseMatrixStack::Push((CHitTestContext *)((char *)this + 152), (const struct CMILMatrix *)v79, 0);
      *((_BYTE *)v11 + 264) |= 8u;
      BspPolygonListCount = CVisual::GetBspPolygonListCount((CVisual *)v3);
      if ( BspPolygonListCount )
      {
        while ( !*((_QWORD *)this + 14) )
        {
          v57 = CHitTestContext::BspHitTest(
                  this,
                  (const struct CMILMatrix *)v80,
                  *(struct CPolygon **)(**(_QWORD **)(v3 + 408) + 8LL * --BspPolygonListCount));
          v6 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0xA9u);
            goto LABEL_40;
          }
          if ( !BspPolygonListCount )
            break;
        }
      }
    }
    *a3 = 0;
  }
  if ( !v33 )
    goto LABEL_39;
LABEL_40:
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  return v6;
}
