/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18000C394 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014F2C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CC68 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800594B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AC1E0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this)
{
  __int64 v1; // r9
  unsigned int v3; // r14d
  char *v4; // rbx
  __int64 v5; // xmm1_8
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm7_4
  float v9; // xmm1_4
  __int64 v10; // r11
  int v11; // r10d
  float v12; // xmm0_4
  unsigned int v13; // eax
  CTransform3D *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  int BoundsSafe; // eax
  int v19; // xmm0_4
  int v20; // ecx
  int *v21; // r9
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(_QWORD, __int64); // rax
  char v24; // al
  int v25; // edx
  int *v26; // rcx
  CTransform3D *v27; // r15
  __int64 (__fastcall *v28)(_QWORD, __int64); // rax
  char v29; // al
  __int64 (__fastcall *v30)(CTransform3D *, __int64); // rax
  char v31; // al
  int v32; // edx
  int *v33; // rcx
  __int64 v34; // r15
  __int64 (__fastcall *v35)(_QWORD, __int64); // rax
  char v36; // al
  int Bounds; // eax
  int v38; // edx
  int *v39; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // xmm0_4
  _BYTE v45[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v46; // [rsp+3Ch] [rbp-CCh] BYREF
  _OWORD v47[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v48; // [rsp+88h] [rbp-80h]
  _OWORD v49[4]; // [rsp+98h] [rbp-70h] BYREF
  int v50; // [rsp+D8h] [rbp-30h]
  __int128 v51; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F8h] [rbp-10h] BYREF
  int v53; // [rsp+108h] [rbp+0h]
  int v54; // [rsp+10Ch] [rbp+4h]

  v1 = *((_QWORD *)this + 34);
  v3 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0x10000) != 0 )
  {
    CVisual::GetEffectiveSize(this, &v46, (float *)&v51);
    v44 = v51;
    *((float *)this + 58) = v46;
    *((_DWORD *)this + 59) = v44;
    *((_QWORD *)this + 28) = 0LL;
  }
  v4 = (char *)this + 200;
  v5 = *((_QWORD *)this + 30);
  v6 = FLOAT_1_0;
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)this + 14);
  *((_QWORD *)this + 27) = v5;
  v7 = FLOAT_1_0;
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    goto LABEL_4;
  v20 = *(_DWORD *)(v1 + 12);
  v21 = (int *)(v1 + 12);
  if ( (v20 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v21 = (int *)((char *)v21 + (v20 & 0xFFFFFF) + 4);
      v20 = *v21;
    }
    while ( (*v21 & 0x7F000000) != 0x5000000 );
  }
  *(_QWORD *)&v51 = *(_QWORD *)(v21 + 1);
  v22 = v51;
  v23 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v51 + 48LL);
  v24 = v23 == CEffectGroup::IsOfType ? CEffectGroup::IsOfType(v51, 8LL) : v23(v51, 8LL);
  if ( v24 && (v7 = *(double *)(v22 + 136), v7 > 1.0) )
    v8 = FLOAT_1_0;
  else
LABEL_4:
    v8 = fmaxf(v7, 0.0);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 < 0.0000011920929 )
    goto LABEL_55;
  v10 = *((_QWORD *)this + 34);
  v11 = *(_DWORD *)(v10 + 4);
  if ( (v11 & 0x100000) == 0 )
  {
    v12 = FLOAT_1_0;
LABEL_8:
    v6 = fmaxf(v12, 0.0);
    goto LABEL_9;
  }
  v38 = *(_DWORD *)(v10 + 12);
  v39 = (int *)(v10 + 12);
  if ( (v38 & 0x7F000000) != 0xC000000 )
  {
    do
    {
      v39 = (int *)((char *)v39 + (v38 & 0xFFFFFF) + 4);
      v38 = *v39;
    }
    while ( (*v39 & 0x7F000000) != 0xC000000 );
  }
  LODWORD(v51) = v39[1];
  v12 = *(float *)&v51;
  if ( *(float *)&v51 <= 1.0 )
    goto LABEL_8;
LABEL_9:
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm) < 0.0000011920929 )
  {
LABEL_55:
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
    *(_QWORD *)v4 = 0LL;
    return v3;
  }
  if ( (*((_BYTE *)this + 154) & 4) != 0
    || (v11 & 0x10000000) != 0 && **(_QWORD **)CVisual::GetTransformParentDataInternal(this) )
  {
    goto LABEL_51;
  }
  v13 = *((float *)v4 + 5) <= *((float *)v4 + 4);
  if ( *((float *)v4 + 2) <= *(float *)v4 )
    ++v13;
  if ( *((float *)v4 + 3) <= *((float *)v4 + 1) )
    ++v13;
  if ( v13 <= 1 )
  {
    v14 = 0LL;
    if ( (v11 & 0x8000000) != 0 )
    {
      v25 = *(_DWORD *)(v10 + 12);
      v26 = (int *)(v10 + 12);
      if ( (v25 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v26 = (int *)((char *)v26 + (v25 & 0xFFFFFF) + 4);
          v25 = *v26;
        }
        while ( (*v26 & 0x7F000000) != 0x5000000 );
      }
      *(_QWORD *)&v51 = *(_QWORD *)(v26 + 1);
      v27 = (CTransform3D *)v51;
      v28 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v51 + 48LL);
      if ( v28 == CEffectGroup::IsOfType )
        v29 = CEffectGroup::IsOfType(v51, 24LL);
      else
        v29 = v28(v51, 24LL);
      if ( v29 )
      {
        v14 = v27;
      }
      else
      {
        v30 = *(__int64 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v27 + 48LL);
        if ( (char *)v30 == (char *)CEffectGroup::IsOfType )
          v31 = CEffectGroup::IsOfType(v27, 8LL);
        else
          v31 = v30(v27, 8LL);
        if ( v31 )
          v14 = (CTransform3D *)*((_QWORD *)v27 + 19);
      }
    }
    v15 = *((_QWORD *)this + 34);
    if ( (*(_DWORD *)(v15 + 4) & 0x8000000) != 0 )
    {
      v32 = *(_DWORD *)(v15 + 12);
      v33 = (int *)(v15 + 12);
      if ( (v32 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v33 = (int *)((char *)v33 + (v32 & 0xFFFFFF) + 4);
          v32 = *v33;
        }
        while ( (*v33 & 0x7F000000) != 0x5000000 );
      }
      *(_QWORD *)&v51 = *(_QWORD *)(v33 + 1);
      v34 = v51;
      v35 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v51 + 48LL);
      if ( v35 == CEffectGroup::IsOfType )
        v36 = CEffectGroup::IsOfType(v51, 9LL);
      else
        v36 = v35(v51, 9LL);
      if ( v36 )
      {
        Bounds = CFilterEffect::GetBounds(v34, (__int128 *)this + 14, (__int64)v4);
        if ( Bounds < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x13C6u);
      }
    }
    if ( v14 )
    {
      Matrix = CTransform3D::GetMatrix(v14, (const struct D2D_SIZE_F *)this + 24);
      v41 = *((_OWORD *)Matrix + 1);
      v49[0] = *(_OWORD *)Matrix;
      v42 = *((_OWORD *)Matrix + 2);
      v49[1] = v41;
      v43 = *((_OWORD *)Matrix + 3);
      LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
      v49[2] = v42;
      v49[3] = v43;
      v50 = (int)Matrix;
      if ( !*((_DWORD *)this + 40) )
      {
        v47[0] = CMILMatrix::Identity;
        v47[1] = xmmword_1801EAD20;
        v48 = dword_1801EAD50;
        LOBYTE(v48) = dword_1801EAD50 | 0xF;
        v47[3] = xmmword_1801EAD40;
        v47[2] = 0LL;
        CMILMatrix::Multiply((CMILMatrix *)v49, (const struct CMILMatrix *)v47);
      }
      CMILMatrix::Transform3DBoundsHelper<0>(v49, v4, v4);
    }
    v16 = *((_QWORD *)this + 37);
    if ( v16 && !*((_DWORD *)this + 40) )
    {
      BoundsSafe = CGeometry::GetBoundsSafe(v16, (const struct D2D_SIZE_F *)this + 24, &v51);
      v3 = BoundsSafe;
      if ( BoundsSafe < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0x48Bu);
        return v3;
      }
      v19 = *((_DWORD *)v4 + 4);
      v52 = v51;
      v54 = *((_DWORD *)v4 + 5);
      v53 = v19;
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        v4,
        &v52);
    }
    v48 = 0;
    v50 = 0;
    v45[0] = 0;
    ((void (__fastcall *)(CVisual *, __int64, _QWORD, _BYTE *, _OWORD *, _OWORD *))CVisual::CalcEffectiveTransform)(
      this,
      5LL,
      0LL,
      v45,
      v47,
      v49);
    if ( v45[0] )
      CMILMatrix::Transform3DBoundsHelper<0>(v49, v4, v4);
    if ( *((float *)v4 + 2) < *(float *)v4
      || *((float *)v4 + 3) < *((float *)v4 + 1)
      || *((float *)v4 + 5) < *((float *)v4 + 4) )
    {
LABEL_51:
      *(_OWORD *)v4 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *((_QWORD *)v4 + 2) = qword_1801EC8C0;
    }
  }
  return v3;
}
