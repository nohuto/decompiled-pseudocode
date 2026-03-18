/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEAVCVisual@@PEBV1@@Z @ 0x1800599D8 (-UpdateScopeTransforms@CCpuClippingData@@AEAAJPEAVCVisual@@PEBV1@@Z.c)
 *     ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8 (-PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?GetRealization@CMatrixTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017E40 (-GetRealization@CMatrixTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTranslateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017FB0 (-GetRealization@CTranslateTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct D2DMatrix *__fastcall CVisual::CalcEffectiveTransform(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _BYTE *a4,
        struct D2DMatrix *a5,
        __int64 a6)
{
  __int64 v6; // rsi
  char v7; // di
  _BYTE *v8; // r13
  __m128 v12; // xmm2
  float v13; // xmm1_4
  _DWORD *v14; // r13
  struct D2DMatrix *result; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // r14
  char v17; // al
  __int64 (__fastcall *v18)(_QWORD, __int64); // r14
  char v19; // al
  CTransform3D *v20; // rax
  void (__fastcall *v21)(CTranslateTransform *, struct CMILMatrix *); // rax
  float v22; // xmm0_4
  int v23; // eax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  const struct D2DMatrix *Matrix; // rax
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __m128 v46; // rt1
  __m128 v47; // rt1
  _BYTE v48[64]; // [rsp+20h] [rbp-40h] BYREF
  CTransform3D *v49; // [rsp+A0h] [rbp+40h]
  float v50; // [rsp+A8h] [rbp+48h]
  float v51; // [rsp+A8h] [rbp+48h]

  v6 = *(_QWORD *)(a1 + 408);
  v7 = 0;
  v49 = 0LL;
  v8 = a4;
  if ( !v6 )
    goto LABEL_2;
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL);
  if ( v16 == CEffectGroup::IsOfType )
    v17 = CEffectGroup::IsOfType(v6, 24LL);
  else
    v17 = v16(v6, 24LL);
  if ( v17 )
  {
    v20 = *(CTransform3D **)(a1 + 408);
    goto LABEL_33;
  }
  v18 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 48LL);
  if ( v18 == CEffectGroup::IsOfType )
    v19 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 408), 8LL);
  else
    v19 = v18(*(_QWORD *)(a1 + 408), 8LL);
  if ( v19 )
  {
    v20 = *(CTransform3D **)(*(_QWORD *)(a1 + 408) + 56LL);
LABEL_33:
    v49 = v20;
  }
LABEL_2:
  v12 = 0LL;
  *v8 = 0;
  if ( a2 != 2 )
  {
    if ( a2 == 3 && !a6 )
    {
LABEL_19:
      *v8 = 1;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v7 = 1;
      *(_OWORD *)a5 = *a3;
      *((_OWORD *)a5 + 1) = a3[1];
      *((_OWORD *)a5 + 2) = a3[2];
      *((_OWORD *)a5 + 3) = a3[3];
    }
    v13 = *(float *)(a1 + 124);
    if ( v13 != 0.0 || *(float *)(a1 + 128) != 0.0 || *(float *)(a1 + 112) != 0.0 )
    {
      if ( v7 )
      {
        v25 = *((float *)a5 + 1);
        v26 = *((float *)a5 + 6);
        v27 = *((float *)a5 + 7);
        v28 = (float)(*((float *)a5 + 4) * *(float *)(a1 + 128)) + (float)(v13 * *(float *)a5);
        v29 = *((float *)a5 + 5);
        v30 = v28 + *((float *)a5 + 12);
        *((float *)a5 + 12) = v30;
        v31 = (float)(v29 * *(float *)(a1 + 128)) + (float)(v25 * *(float *)(a1 + 124));
        v32 = *((float *)a5 + 2);
        v33 = v31 + *((float *)a5 + 13);
        *((float *)a5 + 13) = v33;
        v34 = (float)(v26 * *(float *)(a1 + 128)) + (float)(v32 * *(float *)(a1 + 124));
        v35 = *((float *)a5 + 3);
        v36 = v34 + *((float *)a5 + 14);
        *((float *)a5 + 14) = v36;
        v37 = (float)((float)(v27 * *(float *)(a1 + 128)) + (float)(v35 * *(float *)(a1 + 124))) + *((float *)a5 + 15);
        *((float *)a5 + 15) = v37;
        v38 = *(float *)(a1 + 112);
        if ( v38 != 0.0 )
        {
          *((float *)a5 + 12) = (float)(v38 * *((float *)a5 + 8)) + v30;
          v40 = (float)(*((float *)a5 + 9) * *(float *)(a1 + 112)) + v33;
          v41 = *((float *)a5 + 10);
          *((float *)a5 + 13) = v40;
          v42 = *((float *)a5 + 11);
          *((float *)a5 + 14) = (float)(v41 * *(float *)(a1 + 112)) + v36;
          *((float *)a5 + 15) = (float)(v42 * *(float *)(a1 + 112)) + v37;
        }
      }
      else
      {
        *(_QWORD *)((char *)a5 + 52) = 0LL;
        v7 = 1;
        *(_QWORD *)((char *)a5 + 44) = 0LL;
        *((_QWORD *)a5 + 4) = 0LL;
        *((_QWORD *)a5 + 3) = 0LL;
        *(_QWORD *)((char *)a5 + 12) = 0LL;
        *(_QWORD *)((char *)a5 + 4) = 0LL;
        *((_DWORD *)a5 + 15) = 1065353216;
        *((_DWORD *)a5 + 10) = 1065353216;
        *((_DWORD *)a5 + 5) = 1065353216;
        *(_DWORD *)a5 = 1065353216;
        *((_DWORD *)a5 + 12) = *(_DWORD *)(a1 + 124);
        *((_DWORD *)a5 + 13) = *(_DWORD *)(a1 + 128);
        *((_DWORD *)a5 + 14) = *(_DWORD *)(a1 + 112);
      }
      *v8 = 1;
    }
    v14 = *(_DWORD **)(a1 + 352);
    if ( !v14 )
    {
      v8 = a4;
      goto LABEL_11;
    }
    if ( !v7 )
    {
      if ( (v14[8] & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)v14 + 96LL))(*(_QWORD *)(a1 + 352), v14 + 10);
        v14[8] &= ~1u;
      }
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v14 + 10);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v14 + 14);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v14 + 18);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v14 + 22);
      goto LABEL_24;
    }
    if ( (v14[8] & 1) != 0 )
    {
      v21 = *(void (__fastcall **)(CTranslateTransform *, struct CMILMatrix *))(*(_QWORD *)v14 + 96LL);
      if ( v21 == CTransformGroup::GetRealization )
      {
        CTransformGroup::GetRealization((CTransformGroup *)v14, (struct CMILMatrix *)(v14 + 10));
      }
      else
      {
        if ( v21 == CTranslateTransform::GetRealization )
        {
          CTranslateTransform::GetRealization((CTranslateTransform *)v14, (struct CMILMatrix *)(v14 + 10));
          v14[8] &= ~1u;
          goto LABEL_23;
        }
        if ( v21 == CMatrixTransform::GetRealization )
        {
          CMatrixTransform::GetRealization((CMatrixTransform *)v14, (struct CMILMatrix *)(v14 + 10));
          v14[8] &= ~1u;
          goto LABEL_23;
        }
        v21((CTranslateTransform *)v14, (struct CMILMatrix *)(v14 + 10));
      }
      v14[8] &= ~1u;
    }
LABEL_23:
    D2DMatrixMultiply(a5, (const struct D2DMatrix *)(v14 + 10), a5);
LABEL_24:
    v8 = a4;
    *a4 = 1;
    goto LABEL_11;
  }
  *v8 = 1;
LABEL_11:
  if ( a6 )
  {
    if ( v7 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *(_OWORD *)(a6 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a6 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a6 + 48) = *((_OWORD *)a5 + 3);
    }
    else
    {
      *(_DWORD *)(a6 + 60) = 1065353216;
      *(_QWORD *)(a6 + 52) = 0LL;
      *(_QWORD *)(a6 + 44) = 0LL;
      *(_QWORD *)(a6 + 32) = 0LL;
      *(_QWORD *)(a6 + 24) = 0LL;
      *(_QWORD *)(a6 + 12) = 0LL;
      *(_QWORD *)(a6 + 4) = 0LL;
      *(_DWORD *)(a6 + 40) = 1065353216;
      *(_DWORD *)(a6 + 20) = 1065353216;
      *(_DWORD *)a6 = 1065353216;
    }
  }
  if ( a2 == 3 )
    goto LABEL_19;
  result = v49;
  if ( v49 )
  {
    if ( !*(_DWORD *)(a1 + 100) )
    {
      memset(&v48[24], 0, 36);
      *(_OWORD *)&v48[4] = 0uLL;
      *(_DWORD *)&v48[60] = 1065353216;
      *(_DWORD *)&v48[20] = 1065353216;
      *(_DWORD *)v48 = 1065353216;
      if ( !v7 )
      {
        v7 = 1;
        v43 = *(_OWORD *)&v48[16];
        *(_OWORD *)a5 = *(_OWORD *)v48;
        v44 = *(_OWORD *)&v48[32];
        *((_OWORD *)a5 + 1) = v43;
        v45 = *(_OWORD *)&v48[48];
        *((_OWORD *)a5 + 2) = v44;
        *((_OWORD *)a5 + 3) = v45;
        goto LABEL_54;
      }
      D2DMatrixMultiply(a5, (const struct D2DMatrix *)v48, a5);
      result = v49;
    }
    if ( !v7 )
    {
      result = CTransform3D::GetMatrix(result);
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)result;
      *((_OWORD *)a5 + 1) = *((_OWORD *)result + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)result + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)result + 3);
      goto LABEL_55;
    }
LABEL_54:
    Matrix = CTransform3D::GetMatrix(result);
    result = D2DMatrixMultiply(a5, Matrix, a5);
LABEL_55:
    *v8 = 1;
  }
  if ( !v7 )
  {
LABEL_20:
    result = 0LL;
    *((_DWORD *)a5 + 15) = 1065353216;
    *(_QWORD *)((char *)a5 + 52) = 0LL;
    *(_QWORD *)((char *)a5 + 44) = 0LL;
    *((_QWORD *)a5 + 4) = 0LL;
    *((_QWORD *)a5 + 3) = 0LL;
    *(_QWORD *)((char *)a5 + 12) = 0LL;
    *(_QWORD *)((char *)a5 + 4) = 0LL;
    *((_DWORD *)a5 + 10) = 1065353216;
    *((_DWORD *)a5 + 5) = 1065353216;
    *(_DWORD *)a5 = 1065353216;
    return result;
  }
  if ( (*(_BYTE *)(a1 + 90) & 0x10) != 0 )
  {
    v22 = *((float *)a5 + 12);
    if ( (LODWORD(v22) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v12.m128_f32[0] = (float)(int)v22 - v22;
      v46.m128_f32[0] = FLOAT_N0_5;
      v12 = _mm_cmple_ss(v12, v46);
      v23 = (int)v22 - v12.m128_i32[0];
    }
    else
    {
      v50 = v22 + 6291456.25;
      v23 = (int)(LODWORD(v50) << 10) >> 11;
    }
    v24 = *((float *)a5 + 13);
    *((float *)a5 + 12) = (float)v23;
    if ( (LODWORD(v24) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v12.m128_f32[0] = (float)(int)v24 - v24;
      v47.m128_f32[0] = FLOAT_N0_5;
      result = (struct D2DMatrix *)((int)v24 - _mm_cmple_ss(v12, v47).m128_u32[0]);
    }
    else
    {
      v51 = v24 + 6291456.25;
      result = (struct D2DMatrix *)(unsigned int)((int)(LODWORD(v51) << 10) >> 11);
    }
    *v8 = 1;
    *((float *)a5 + 13) = (float)(int)result;
  }
  return result;
}
