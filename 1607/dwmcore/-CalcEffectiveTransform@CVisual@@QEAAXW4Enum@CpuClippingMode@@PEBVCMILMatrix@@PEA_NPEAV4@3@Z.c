/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D5A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D790 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800146C0 (-IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B410 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A9C0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005AD00 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x18005BA30 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::CalcEffectiveTransform(__int64 a1, int a2, __int64 a3, _BYTE *a4, CMILMatrix *a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // r13
  CTransform3D *v8; // r12
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // r8
  _BYTE *v13; // r9
  float v14; // xmm7_4
  _DWORD *v15; // rsi
  __int64 v16; // rax
  bool v17; // r14
  bool v18; // si
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  bool v22; // r15
  char v23; // cl
  const struct D2D_SIZE_F *v24; // rdx
  char v25; // al
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  char v30; // cl
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  __m128 v38; // xmm1
  int v39; // eax
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  bool v42; // al
  unsigned int v43; // xmm1_4
  char v44; // al
  __m128 v45; // xmm1
  int v46; // edx
  int *v47; // rcx
  bool (__fastcall *v48)(__int64, int); // rax
  char v49; // al
  bool (__fastcall *v50)(__int64, int); // rax
  char v51; // al
  int v52; // edx
  int *v53; // rcx
  __int64 (__fastcall *v54)(_QWORD, _QWORD); // rax
  __m128 v56; // xmm11
  __m128 v57; // xmm7
  __m128 v58; // xmm9
  __m128 v59; // xmm6
  __m128 v60; // xmm5
  __m128 v61; // xmm4
  __m128 v62; // xmm0
  __m128 v63; // xmm1
  __m128 v64; // xmm0
  __m128 v65; // xmm1
  struct CMILMatrix *v66; // r8
  void (__fastcall *v67)(CTransformGroup *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm0_4
  char v71; // al
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm0_4
  float v77; // xmm4_4
  float v78; // xmm3_4
  float v79; // xmm1_4
  float v80; // xmm5_4
  float v81; // xmm2_4
  float v82; // xmm7_4
  float v83; // xmm7_4
  CMILMatrix *v84; // rcx
  _BYTE *v85; // r9
  float v86; // xmm2_4
  float v87; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __m128 v90; // [rsp+30h] [rbp-A9h] BYREF
  __m128 v91; // [rsp+40h] [rbp-99h]
  __m128 v92; // [rsp+50h] [rbp-89h]
  __m128 v93; // [rsp+60h] [rbp-79h]
  int v94; // [rsp+70h] [rbp-69h]
  CTransform3D *v95; // [rsp+80h] [rbp-59h]

  v6 = *(_QWORD *)(a1 + 272);
  v7 = 0;
  v8 = 0LL;
  v10 = CEffectGroup::IsOfType;
  if ( (*(_DWORD *)(v6 + 4) & 0x8000000) != 0 )
  {
    v46 = *(_DWORD *)(v6 + 12);
    v47 = (int *)(v6 + 12);
    if ( (v46 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v47 = (int *)((char *)v47 + (v46 & 0xFFFFFF) + 4);
        v46 = *v47;
      }
      while ( (*v47 & 0x7F000000) != 0x5000000 );
    }
    v95 = *(CTransform3D **)(v47 + 1);
    v48 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v95 + 48LL);
    if ( (char *)v48 == (char *)CEffectGroup::IsOfType )
    {
      v49 = CEffectGroup::IsOfType(v95, 24LL);
    }
    else if ( v48 == CGaussianBlurEffect::IsOfType )
    {
      v49 = CGaussianBlurEffect::IsOfType((__int64)v95, 24);
    }
    else
    {
      v49 = ((__int64 (__fastcall *)(CTransform3D *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v48)(
              v95,
              24LL,
              CEffectGroup::IsOfType);
    }
    if ( v49 )
    {
      v8 = v95;
    }
    else
    {
      v50 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v95 + 48LL);
      if ( (char *)v50 == (char *)CEffectGroup::IsOfType )
      {
        v51 = CEffectGroup::IsOfType(v95, 8LL);
      }
      else if ( v50 == CGaussianBlurEffect::IsOfType )
      {
        v51 = CGaussianBlurEffect::IsOfType((__int64)v95, 8);
      }
      else
      {
        v51 = v50((__int64)v95, 8);
      }
      if ( v51 )
        v8 = (CTransform3D *)*((_QWORD *)v95 + 19);
    }
  }
  v13 = a4;
  *a4 = 0;
  if ( a2 == 3 )
  {
    *a4 = 1;
    goto LABEL_10;
  }
  if ( a2 == 4 && !a6 )
  {
LABEL_48:
    *v13 = 1;
LABEL_49:
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
    return;
  }
  if ( a3 )
  {
    v7 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a5 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a5 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a5 + 16) = *(_DWORD *)(a3 + 64);
  }
  v14 = *(float *)(a1 + 176);
  if ( v14 != 0.0 || *(float *)(a1 + 180) != 0.0 || *(float *)(a1 + 172) != 0.0 )
  {
    if ( v7 )
    {
      v68 = *(float *)(a1 + 180);
      v69 = *(float *)(a1 + 172);
      v70 = v14 * *(float *)a5;
      v71 = *((_BYTE *)a5 + 65);
      v72 = v68 * *((float *)a5 + 4);
      *((_BYTE *)a5 + 64) &= 0xCCu;
      v73 = v69 * *((float *)a5 + 8);
      *((_BYTE *)a5 + 65) = v71 & 0xC;
      v74 = (float)(v72 + v70) + v73;
      v75 = (float)(v14 * *((float *)a5 + 1)) + (float)(v68 * *((float *)a5 + 5));
      v76 = v68 * *((float *)a5 + 6);
      v77 = v68 * *((float *)a5 + 7);
      v78 = v75 + (float)(v69 * *((float *)a5 + 9));
      v79 = v69 * *((float *)a5 + 10);
      v80 = v69 * *((float *)a5 + 11);
      *((float *)a5 + 12) = v74 + *((float *)a5 + 12);
      v81 = v14 * *((float *)a5 + 2);
      v82 = (float)(v14 * *((float *)a5 + 3)) + v77;
      *((float *)a5 + 13) = v78 + *((float *)a5 + 13);
      v83 = (float)(v82 + v80) + *((float *)a5 + 15);
      *((float *)a5 + 14) = (float)((float)(v81 + v76) + v79) + *((float *)a5 + 14);
      *((float *)a5 + 15) = v83;
    }
    else
    {
      v7 = 1;
      v43 = *(_DWORD *)(a1 + 172);
      v44 = *((_BYTE *)a5 + 64) & 0xF4;
      v93.m128_i32[1] = *(_DWORD *)(a1 + 180);
      v93.m128_u64[1] = v43 | 0x3F80000000000000LL;
      v93.m128_f32[0] = v14;
      *((_BYTE *)a5 + 64) = v44 & 0xB | 0x54;
      *(_OWORD *)a5 = _xmm;
      *((_OWORD *)a5 + 1) = _xmm;
      v45 = v93;
      *((_BYTE *)a5 + 65) = 61;
      *((_OWORD *)a5 + 2) = _xmm;
      *((__m128 *)a5 + 3) = v45;
    }
    *a4 = 1;
  }
  v15 = *(_DWORD **)(a1 + 288);
  if ( v15 )
  {
    v24 = (const struct D2D_SIZE_F *)(a1 + 192);
    if ( !v7 )
    {
      v42 = (v15[8] & 1) != 0;
      if ( a1 != -192 )
      {
        if ( (v15[8] & 1) == 0
          && *((_BYTE *)v15 + 212)
          && (*((float *)v15 + 51) != v24->width || *((float *)v15 + 52) != *(float *)(a1 + 196)) )
        {
          v42 = 1;
        }
        *(struct D2D_SIZE_F *)(v15 + 51) = *v24;
      }
      if ( v42 )
      {
        (*(void (__fastcall **)(_DWORD *, const struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)v15 + 112LL))(
          v15,
          v24,
          v15 + 34);
        v15[8] &= ~1u;
        v13 = a4;
      }
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v15 + 34);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v15 + 38);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v15 + 42);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v15 + 46);
      v39 = v15[50];
      goto LABEL_46;
    }
    v25 = v15[8] & 1;
    if ( a1 != -192 )
    {
      if ( !v25
        && *((_BYTE *)v15 + 212)
        && (*((float *)v15 + 51) != v24->width || *((float *)v15 + 52) != *(float *)(a1 + 196)) )
      {
        v25 = 1;
      }
      *(struct D2D_SIZE_F *)(v15 + 51) = *v24;
    }
    if ( !v25 )
    {
LABEL_36:
      v26 = *(__m128 *)(v15 + 34);
      v27 = *(__m128 *)(v15 + 38);
      v94 = v15[50];
      v90 = v26;
      v28 = *(__m128 *)(v15 + 42);
      v91 = v27;
      v29 = *(__m128 *)(v15 + 46);
      v92 = v28;
      v93 = v29;
      if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v90, v24, v10) )
      {
        v62 = *(__m128 *)a5;
        v63 = *((__m128 *)a5 + 1);
        v94 = *((_DWORD *)a5 + 16);
        v90 = v62;
        v64 = *((__m128 *)a5 + 2);
        v91 = v63;
        v65 = *((__m128 *)a5 + 3);
        v92 = v64;
        v93 = v65;
        goto LABEL_45;
      }
      CMILMatrix::Ensure3DFlags(a5);
      v30 = *((_BYTE *)a5 + 64);
      if ( (v30 & 3) != 1 )
      {
        if ( (v30 & 0xC) == 4 )
        {
          v31 = *((float *)a5 + 14);
          v32 = *((float *)a5 + 13);
          v33 = *((float *)a5 + 12);
          v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v90.m128_f32[3] - 0.0)) & _xmm);
          if ( v34 >= 0.00012207031
            || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v91.m128_f32[3] - 0.0)) & _xmm), v35 >= 0.00012207031)
            || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v92.m128_f32[3] - 0.0)) & _xmm), v36 >= 0.00012207031)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v93.m128_f32[3] - 1.0)) & _xmm) >= 0.00012207031 )
          {
            v90.m128_f32[0] = v90.m128_f32[0] + (float)(v90.m128_f32[3] * v33);
            v90.m128_f32[1] = v90.m128_f32[1] + (float)(v90.m128_f32[3] * v32);
            v90.m128_f32[2] = v90.m128_f32[2] + (float)(v90.m128_f32[3] * v31);
            v91.m128_f32[0] = v91.m128_f32[0] + (float)(v91.m128_f32[3] * v33);
            v91.m128_f32[1] = v91.m128_f32[1] + (float)(v91.m128_f32[3] * v32);
            v91.m128_f32[2] = v91.m128_f32[2] + (float)(v91.m128_f32[3] * v31);
            v92.m128_f32[0] = v92.m128_f32[0] + (float)(v92.m128_f32[3] * v33);
            v92.m128_f32[1] = v92.m128_f32[1] + (float)(v92.m128_f32[3] * v32);
            v92.m128_f32[2] = v92.m128_f32[2] + (float)(v92.m128_f32[3] * v31);
            v93.m128_f32[0] = v93.m128_f32[0] + (float)(v93.m128_f32[3] * v33);
            v93.m128_f32[1] = v93.m128_f32[1] + (float)(v93.m128_f32[3] * v32);
            v37 = v93.m128_f32[2] + (float)(v93.m128_f32[3] * v31);
          }
          else
          {
            v93.m128_f32[0] = v93.m128_f32[0] + v33;
            v37 = v93.m128_f32[2] + v31;
            v93.m128_f32[1] = v93.m128_f32[1] + v32;
          }
          LOBYTE(v94) = v94 & 0xFC;
          v93.m128_f32[2] = v37;
          goto LABEL_45;
        }
        if ( (v30 & 0xC0) == 0x40 )
        {
          v86 = *((float *)a5 + 5);
          v87 = *(float *)a5;
        }
        else
        {
          if ( (*((_BYTE *)a5 + 65) & 0xC) != 4 )
          {
            v94 = 0;
            v56 = *(__m128 *)a5;
            v57 = *((__m128 *)a5 + 1);
            v58 = *((__m128 *)a5 + 2);
            v59 = *((__m128 *)a5 + 3);
            v60 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v91, v91, 255), v59),
                      _mm_mul_ps(_mm_shuffle_ps(v91, v91, 85), v57)),
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v91, v91, 170), v58),
                      _mm_mul_ps(_mm_shuffle_ps(v91, v91, 0), *(__m128 *)a5)));
            v61 = _mm_mul_ps(_mm_shuffle_ps(v92, v92, 0), *(__m128 *)a5);
            v90 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v90, v90, 255), v59),
                      _mm_mul_ps(_mm_shuffle_ps(v90, v90, 85), v57)),
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v90, v90, 170), v58),
                      _mm_mul_ps(_mm_shuffle_ps(v90, v90, 0), *(__m128 *)a5)));
            v91 = v60;
            v92 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v92, v92, 255), v59),
                      _mm_mul_ps(_mm_shuffle_ps(v92, v92, 85), v57)),
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v92, v92, 170), v58), v61));
            v93 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v93, v93, 255), v59),
                      _mm_mul_ps(_mm_shuffle_ps(v93, v93, 85), v57)),
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v93, v93, 170), v58),
                      _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0), v56)));
            goto LABEL_45;
          }
          CMILMatrix::Rotate90((CMILMatrix *)&v90);
          LODWORD(v87) = *((_DWORD *)a5 + 4) ^ _xmm;
          v86 = *((float *)a5 + 1);
        }
        CMILMatrix::Scale((CMILMatrix *)&v90, v87, v86, *((float *)a5 + 10));
        CMILMatrix::Translate((CMILMatrix *)&v90, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
      }
LABEL_45:
      v38 = v91;
      v39 = v94;
      *(__m128 *)a5 = v90;
      v40 = v92;
      *((__m128 *)a5 + 1) = v38;
      v41 = v93;
      *((__m128 *)a5 + 2) = v40;
      *((__m128 *)a5 + 3) = v41;
LABEL_46:
      *((_DWORD *)a5 + 16) = v39;
      *v13 = 1;
      goto LABEL_10;
    }
    v66 = (struct CMILMatrix *)(v15 + 34);
    v67 = *(void (__fastcall **)(CTransformGroup *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 112LL);
    if ( v67 == CComponentTransform3D::GetRealization )
    {
      CComponentTransform3D::GetRealization((CComponentTransform3D *)v15, v24, v66);
    }
    else
    {
      if ( v67 == CTransformGroup::GetRealization )
      {
        CTransformGroup::GetRealization((CTransformGroup *)v15, v24, v66);
        v15[8] &= ~1u;
        goto LABEL_36;
      }
      v67((CTransformGroup *)v15, v24, v66);
    }
    v15[8] &= ~1u;
    goto LABEL_36;
  }
LABEL_10:
  if ( a6 )
  {
    if ( v7 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *(_OWORD *)(a6 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a6 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a6 + 48) = *((_OWORD *)a5 + 3);
      *(_DWORD *)(a6 + 64) = *((_DWORD *)a5 + 16);
    }
    else
    {
      *(_WORD *)(a6 + 64) = 32085;
      *(_OWORD *)a6 = _xmm;
      *(_OWORD *)(a6 + 16) = _xmm;
      *(_OWORD *)(a6 + 32) = _xmm;
      *(_OWORD *)(a6 + 48) = _xmm;
    }
  }
  if ( a2 == 4 )
    goto LABEL_48;
  if ( !v8 || *(_DWORD *)(a1 + 160) == 2 )
  {
    v16 = *(_QWORD *)(a1 + 144);
    v17 = *(_DWORD *)(a1 + 160) != 1;
    v18 = v16 && *(_DWORD *)(v16 + 160) == 1;
    v19 = *(_QWORD *)(a1 + 136);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    v20 = (_DWORD)v19 == 0;
    v21 = *(_QWORD *)(a1 + 272);
    v22 = !v20;
    if ( (*(_DWORD *)(v21 + 4) & 0x8000000) == 0 )
      goto LABEL_19;
    v52 = *(_DWORD *)(v21 + 12);
    v53 = (int *)(v21 + 12);
    if ( (v52 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v53 = (int *)((char *)v53 + (v52 & 0xFFFFFF) + 4);
        v52 = *v53;
      }
      while ( (*v53 & 0x7F000000) != 0x5000000 );
    }
    v95 = *(CTransform3D **)(v53 + 1);
    v54 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v95 + 48LL);
    if ( v54 == CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType(v95, 9LL)
       : ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v54)(
           v95,
           9LL,
           v10) )
    {
      v23 = 1;
    }
    else
    {
LABEL_19:
      v23 = 0;
    }
    if ( !v17 )
      goto LABEL_117;
    if ( !v18 )
      goto LABEL_22;
    if ( v22 )
    {
      v13 = a4;
    }
    else
    {
LABEL_117:
      v13 = a4;
      if ( !v18 || !v23 && (*(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL) & 0x10000) == 0 )
        goto LABEL_22;
    }
  }
  if ( !v7 )
  {
    v7 = 1;
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
  }
  *((_BYTE *)a5 + 64) |= 0xFu;
  *((_QWORD *)a5 + 4) = 0LL;
  *((_QWORD *)a5 + 5) = 0LL;
  *v13 = 1;
LABEL_22:
  if ( v8 )
  {
    Matrix = CTransform3D::GetMatrix(v8, (const struct D2D_SIZE_F *)(a1 + 192));
    if ( v7 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *a4 = 1;
  }
  if ( !v7 )
    goto LABEL_49;
  if ( (*(_BYTE *)(a1 + 154) & 4) != 0 )
  {
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a5) )
    {
      CMILMatrix::RoundOffsets(v84);
      *v85 = 1;
    }
  }
}
