/*
 * XREFs of ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800F36D0 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9210 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcClippedNodeWorldSpaceBounds(__int64 a1, __int64 a2, __int128 *a3)
{
  float *v4; // r9
  __int64 v5; // r10
  float *v6; // rdx
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  __int64 v11; // r9
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm7_4
  float v15; // xmm11_4
  __int128 *v16; // rax
  unsigned int v17; // r8d
  char v18; // dl
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned int v23; // ecx
  __int64 result; // rax
  float v25; // xmm2_4
  __int128 *v26; // rax
  unsigned int v27; // xmm3_4
  unsigned int v28; // r8d
  unsigned int v29; // xmm1_4
  float v30; // xmm2_4
  unsigned int v31; // xmm0_4
  unsigned int v32; // xmm7_4
  char v33; // dl
  unsigned int i; // ecx
  float *v35; // rax
  float v36; // xmm1_4
  __int64 v37; // r9
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float *v45; // rax
  __int64 v46; // rcx
  float v47; // xmm0_4
  float v48; // xmm2_4
  __int64 v49; // [rsp+30h] [rbp-D8h] BYREF
  float v50; // [rsp+38h] [rbp-D0h]
  float v51; // [rsp+3Ch] [rbp-CCh]
  _OWORD v52[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v53; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-70h]
  __int128 v55; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-50h]
  __int128 v57; // [rsp+C8h] [rbp-40h]
  float v58[12]; // [rsp+D8h] [rbp-30h]

  CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)&v55);
  v6 = v4 + 35;
  v52[1] = v56;
  v52[3] = *(_OWORD *)v58;
  v52[0] = v55;
  v52[2] = v57;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v55 + 2)) & _xmm);
  if ( v7 >= 0.00012207031 )
    goto LABEL_25;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v56 + 2)) & _xmm) < 0.00012207031
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v58[2]) & _xmm) < 0.00012207031 )
  {
LABEL_4:
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v56 + 3)) & _xmm);
    v9 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v55 + 3)) & _xmm) * 40960.0)
       + (float)(v8 * 40960.0);
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v58[3]) & _xmm);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v9 + v10) - 1.0)) & _xmm) < 0.00012207031
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[40]) & _xmm) < 0.00012207031
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[39]) & _xmm) < 0.00012207031 )
    {
      v11 = 8LL;
      v12 = *v6;
      v13 = v6[2];
      v14 = v6[1];
      v15 = v6[3];
      *(float *)&v49 = *v6;
      v50 = v13;
      *((float *)&v49 + 1) = v14;
      v51 = v15;
      if ( *(float *)&v55 == 1.0
        && *((float *)&v55 + 1) == 0.0
        && *((float *)&v55 + 2) == 0.0
        && *((float *)&v55 + 3) == 0.0
        && *(float *)&v56 == 0.0
        && *((float *)&v56 + 1) == 1.0
        && *((float *)&v56 + 2) == 0.0
        && *((float *)&v56 + 3) == 0.0
        && *(float *)&v57 == 0.0
        && *((float *)&v57 + 1) == 0.0
        && *((float *)&v57 + 2) == 1.0
        && *((float *)&v57 + 3) == 0.0 )
      {
        v16 = (__int128 *)&v49;
        v17 = 4;
        v18 = 1;
        v19 = v58[0] + v12;
        v20 = v58[1] + v14;
        v21 = v58[0] + v13;
        v22 = v58[1] + v15;
        *(float *)&v49 = v19;
        *((float *)&v49 + 1) = v58[1] + v14;
        v50 = v58[0] + v13;
        v51 = v58[1] + v15;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v52,
          (const struct MilRectF *)&v49,
          (struct MilPoint2F *const)&v53);
        v22 = v51;
        v16 = &v53;
        v21 = v50;
        v18 = 0;
        v20 = *((float *)&v49 + 1);
        v17 = v11;
        LODWORD(v19) = v49;
      }
      v23 = 0;
      do
      {
        ++v23;
        v16 = (__int128 *)((char *)v16 + 4);
      }
      while ( v23 < v17 );
      if ( !v18 )
      {
        v45 = (float *)&v53 + 3;
        v46 = 3LL;
        v22 = *((float *)&v53 + 1);
        LODWORD(v21) = v53;
        v49 = v53;
        v20 = *((float *)&v53 + 1);
        LODWORD(v19) = v53;
        do
        {
          v47 = *(v45 - 1);
          if ( v19 > v47 )
            v19 = *(v45 - 1);
          if ( v20 > *v45 )
            v20 = *v45;
          if ( v47 > v21 )
            v21 = *(v45 - 1);
          if ( *v45 > v22 )
            v22 = *v45;
          v45 = (float *)((char *)v45 + v11);
          --v46;
        }
        while ( v46 );
      }
      v54 = 0LL;
      *(_QWORD *)&v53 = __PAIR64__(LODWORD(v20), LODWORD(v19));
      *((_QWORD *)&v53 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v7 >= 0.00012207031
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v56 + 2)) & _xmm) >= 0.00012207031
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v57) & _xmm) >= 0.00012207031
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v57 + 1)) & _xmm) >= 0.00012207031
    || (v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v57 + 2) - 1.0)) & _xmm), v48 >= 0.00012207031)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v57 + 2)) & _xmm) >= 0.00012207031 )
  {
LABEL_25:
    v25 = *((float *)&v57 + 3);
    goto LABEL_26;
  }
  v25 = *((float *)&v57 + 3);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v57 + 3)) & _xmm) < 0.00012207031
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v58[2]) & _xmm) < 0.00012207031 )
  {
    goto LABEL_4;
  }
LABEL_26:
  if ( *(float *)&v55 == 1.0
    && *((float *)&v55 + 1) == 0.0
    && *((float *)&v55 + 2) == 0.0
    && *((float *)&v55 + 3) == 0.0
    && *(float *)&v56 == 0.0
    && *((float *)&v56 + 1) == 1.0
    && *((float *)&v56 + 2) == 0.0
    && *((float *)&v56 + 3) == 0.0
    && *(float *)&v57 == 0.0
    && *((float *)&v57 + 1) == 0.0
    && *((float *)&v57 + 2) == 1.0
    && v25 == 0.0 )
  {
    v26 = &v53;
    *(float *)&v27 = v58[0] + v4[37];
    v28 = 6;
    *(float *)&v29 = v58[1] + v4[36];
    v30 = v58[1] + v4[38];
    *(float *)&v53 = v58[0] + *v6;
    *(float *)&v31 = v58[2] + v4[39];
    *(float *)&v32 = v58[2] + v4[40];
    *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v27, v29);
    v33 = 1;
    *((float *)&v53 + 3) = v30;
    v54 = __PAIR64__(v32, v31);
  }
  else
  {
    CBaseMatrix::Transform3DRectToPerspective((float *)v52, v6, (float *)&v55);
    v26 = &v55;
    v33 = 0;
    v28 = 24;
  }
  for ( i = 0; i < v28; ++i )
    v26 = (__int128 *)((char *)v26 + 4);
  if ( !v33 )
  {
    v35 = (float *)&v55 + 1;
    v36 = FLOAT_3_4028235e38;
    v37 = 8LL;
    v38 = FLOAT_N3_4028235e38;
    v53 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v39 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
    v40 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
    v41 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
    LODWORD(v42) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v54 = __PAIR64__(LODWORD(FLOAT_N3_4028235e38), LODWORD(FLOAT_3_4028235e38));
    do
    {
      v43 = *(v35 - 1);
      if ( v42 > v43 )
        v42 = *(v35 - 1);
      if ( v43 > v40 )
        v40 = *(v35 - 1);
      if ( v41 > *v35 )
        v41 = *v35;
      if ( *v35 > v39 )
        v39 = *v35;
      v44 = v35[1];
      if ( v36 > v44 )
        v36 = v35[1];
      if ( v44 > v38 )
        v38 = v35[1];
      v35 += 3;
      --v37;
    }
    while ( v37 );
    v54 = __PAIR64__(LODWORD(v38), LODWORD(v36));
    *((_QWORD *)&v53 + 1) = __PAIR64__(LODWORD(v39), LODWORD(v40));
    *(_QWORD *)&v53 = __PAIR64__(LODWORD(v41), LODWORD(v42));
  }
LABEL_24:
  CScopedClipStack::GetTopClipBoundsInScope(v5 + 680, &v49);
  result = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
             &v53,
             &v49);
  *a3 = v53;
  return result;
}
