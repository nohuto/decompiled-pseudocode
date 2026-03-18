/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z @ 0x18000937C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180035E70 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B6A4 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B850 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066290 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800665C0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180068FD0 (-GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180086050 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

char __fastcall CVisual::CalcEffectiveTransform(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _BYTE *a4,
        struct D2DMatrix *a5,
        __int64 a6)
{
  __m128 v6; // xmm2
  __int64 v7; // rsi
  char v8; // r13
  _DWORD *v9; // rdi
  char v14; // al
  _BYTE *v15; // rbx
  _DWORD *v16; // r13
  unsigned __int64 Matrix; // rax
  __int64 v18; // rax
  bool v19; // cl
  __int128 v20; // xmm1
  const struct D2D_SIZE_F *v21; // rdx
  void (__fastcall *v22)(CTranslateTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rsi
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  void (*v34)(CRotateTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rsi
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm1_4
  __int64 (__fastcall *v38)(__int64, __int64); // r15
  __int64 (__fastcall *v39)(_QWORD, __int64); // rsi
  float v40; // xmm1_4
  float v41; // xmm0_4
  __m128 v42; // rt1
  __m128 v43; // rt1
  _DWORD *v45; // [rsp+60h] [rbp+8h]
  char v46; // [rsp+68h] [rbp+10h]
  float v47; // [rsp+68h] [rbp+10h]
  float v48; // [rsp+68h] [rbp+10h]

  v7 = *(_QWORD *)(a1 + 392);
  v8 = 0;
  v9 = 0LL;
  v46 = 0;
  v45 = 0LL;
  if ( v7 )
  {
    v38 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL);
    if ( v38 == CEffectGroup::IsOfType || !(unsigned __int8)v38(v7, 24LL) )
    {
      v39 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 392) + 48LL);
      if ( v39 == CEffectGroup::IsOfType || (unsigned __int8)v39(*(_QWORD *)(a1 + 392), 8LL) )
        v9 = *(_DWORD **)(*(_QWORD *)(a1 + 392) + 72LL);
    }
    else
    {
      v9 = *(_DWORD **)(a1 + 392);
    }
    v45 = v9;
  }
  *a4 = 0;
  if ( a2 != 3 )
  {
    if ( a2 == 4 && !a6 )
    {
LABEL_29:
      *a4 = 1;
      goto LABEL_30;
    }
    if ( a3 )
    {
      v8 = 1;
      v46 = 1;
      *(_OWORD *)a5 = *a3;
      *((_OWORD *)a5 + 1) = a3[1];
      *((_OWORD *)a5 + 2) = a3[2];
      *((_OWORD *)a5 + 3) = a3[3];
    }
    v6 = (__m128)*(unsigned int *)(a1 + 108);
    if ( v6.m128_f32[0] == 0.0 && *(float *)(a1 + 112) == 0.0 && *(float *)(a1 + 96) == 0.0 )
    {
      v14 = v46;
      v15 = a4;
    }
    else
    {
      if ( v8 )
      {
        v23 = *((float *)a5 + 1);
        v24 = *((float *)a5 + 6);
        v25 = *((float *)a5 + 7);
        v26 = (float)(*((float *)a5 + 4) * *(float *)(a1 + 112)) + (float)(v6.m128_f32[0] * *(float *)a5);
        v6 = (__m128)*((unsigned int *)a5 + 5);
        v27 = v26 + *((float *)a5 + 12);
        *((float *)a5 + 12) = v27;
        v6.m128_f32[0] = (float)(v6.m128_f32[0] * *(float *)(a1 + 112)) + (float)(v23 * *(float *)(a1 + 108));
        v28 = *((float *)a5 + 2);
        v6.m128_f32[0] = v6.m128_f32[0] + *((float *)a5 + 13);
        *((_DWORD *)a5 + 13) = v6.m128_i32[0];
        v29 = (float)(v24 * *(float *)(a1 + 112)) + (float)(v28 * *(float *)(a1 + 108));
        v30 = *((float *)a5 + 3);
        v31 = v29 + *((float *)a5 + 14);
        *((float *)a5 + 14) = v31;
        v32 = (float)((float)(v25 * *(float *)(a1 + 112)) + (float)(v30 * *(float *)(a1 + 108))) + *((float *)a5 + 15);
        *((float *)a5 + 15) = v32;
        v33 = *(float *)(a1 + 96);
        if ( v33 != 0.0 )
        {
          v40 = *((float *)a5 + 10);
          *((float *)a5 + 12) = (float)(v33 * *((float *)a5 + 8)) + v27;
          *((float *)a5 + 13) = (float)(*((float *)a5 + 9) * *(float *)(a1 + 96)) + v6.m128_f32[0];
          v41 = *((float *)a5 + 11);
          *((float *)a5 + 14) = (float)(v40 * *(float *)(a1 + 96)) + v31;
          *((float *)a5 + 15) = (float)(v41 * *(float *)(a1 + 96)) + v32;
        }
        v14 = v46;
      }
      else
      {
        *(_QWORD *)((char *)a5 + 52) = 0LL;
        *(_QWORD *)((char *)a5 + 44) = 0LL;
        *((_QWORD *)a5 + 4) = 0LL;
        *((_QWORD *)a5 + 3) = 0LL;
        *(_QWORD *)((char *)a5 + 12) = 0LL;
        *(_QWORD *)((char *)a5 + 4) = 0LL;
        *((_DWORD *)a5 + 15) = 1065353216;
        *((_DWORD *)a5 + 10) = 1065353216;
        *((_DWORD *)a5 + 5) = 1065353216;
        *(_DWORD *)a5 = 1065353216;
        *((_DWORD *)a5 + 12) = *(_DWORD *)(a1 + 108);
        *((_DWORD *)a5 + 13) = *(_DWORD *)(a1 + 112);
        *((_DWORD *)a5 + 14) = *(_DWORD *)(a1 + 96);
        v14 = 1;
        v46 = 1;
      }
      v15 = a4;
      *a4 = 1;
    }
    v16 = *(_DWORD **)(a1 + 336);
    if ( !v16 )
    {
      v8 = v46;
      goto LABEL_12;
    }
    if ( !v14 )
    {
      if ( (v16[8] & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _DWORD *))(*(_QWORD *)v16 + 104LL))(
          *(_QWORD *)(a1 + 336),
          a1 + 132,
          v16 + 14);
        v16[8] &= ~1u;
        v9 = v45;
        v15 = a4;
      }
      *(_OWORD *)a5 = *(_OWORD *)(v16 + 14);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v16 + 18);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v16 + 22);
      v20 = *(_OWORD *)(v16 + 26);
      v8 = 1;
      *((_OWORD *)a5 + 3) = v20;
      goto LABEL_35;
    }
    if ( (v16[8] & 1) != 0 )
    {
      v21 = (const struct D2D_SIZE_F *)(a1 + 132);
      v22 = *(void (__fastcall **)(CTranslateTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v16 + 104LL);
      if ( v22 == CTransformGroup::GetRealization )
      {
        CTransformGroup::GetRealization(*(CTransformGroup **)(a1 + 336), v21, (struct CMILMatrix *)(v16 + 14));
      }
      else
      {
        if ( v22 == CTranslateTransform::GetRealization )
        {
          CTranslateTransform::GetRealization(*(CTranslateTransform **)(a1 + 336), v21, (struct CMILMatrix *)(v16 + 14));
          v16[8] &= ~1u;
          goto LABEL_34;
        }
        if ( v22 == CMatrixTransform::GetRealization )
        {
          CMatrixTransform::GetRealization(*(CMatrixTransform **)(a1 + 336), v21, (struct CMILMatrix *)(v16 + 14));
          v16[8] &= ~1u;
          goto LABEL_34;
        }
        v22(*(CTranslateTransform **)(a1 + 336), (const struct D2D_SIZE_F *)(a1 + 132), (struct CMILMatrix *)(v16 + 14));
      }
      v16[8] &= ~1u;
    }
LABEL_34:
    D2DMatrixMultiply(a5, (const struct D2DMatrix *)(v16 + 14), a5);
    v8 = v46;
LABEL_35:
    *v15 = 1;
    goto LABEL_12;
  }
  v15 = a4;
  *a4 = 1;
LABEL_12:
  LOBYTE(Matrix) = 0;
  if ( a6 )
  {
    if ( v8 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *(_OWORD *)(a6 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a6 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a6 + 48) = *((_OWORD *)a5 + 3);
    }
    else
    {
      *(_QWORD *)(a6 + 52) = 0LL;
      *(_QWORD *)(a6 + 44) = 0LL;
      *(_QWORD *)(a6 + 32) = 0LL;
      *(_QWORD *)(a6 + 24) = 0LL;
      *(_QWORD *)(a6 + 12) = 0LL;
      *(_QWORD *)(a6 + 4) = 0LL;
      *(_DWORD *)(a6 + 60) = 1065353216;
      *(_DWORD *)(a6 + 40) = 1065353216;
      *(_DWORD *)(a6 + 20) = 1065353216;
      *(_DWORD *)a6 = 1065353216;
    }
  }
  if ( a2 == 4 )
    goto LABEL_29;
  if ( v9 && *(_DWORD *)(a1 + 84) != 2 )
    goto LABEL_85;
  v18 = *(_QWORD *)(a1 + 64);
  v19 = v18 && *(_DWORD *)(v18 + 84) == 1;
  Matrix = *(_QWORD *)(a1 + 56);
  if ( (Matrix & 2) != 0 )
    Matrix = *(_QWORD *)(Matrix & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(Matrix) = Matrix & 1;
  LOBYTE(Matrix) = (_DWORD)Matrix != 0;
  if ( *(_DWORD *)(a1 + 84) != 1 && v19 && (_BYTE)Matrix )
  {
    LOBYTE(Matrix) = 0;
LABEL_85:
    *((_QWORD *)a5 + 4) = 0LL;
    if ( v8 )
    {
      *((_QWORD *)a5 + 5) = 0LL;
    }
    else
    {
      *(_QWORD *)((char *)a5 + 52) = 0LL;
      v8 = 1;
      *(_QWORD *)((char *)a5 + 44) = 0LL;
      *((_QWORD *)a5 + 3) = 0LL;
      *(_QWORD *)((char *)a5 + 12) = 0LL;
      *(_QWORD *)((char *)a5 + 4) = 0LL;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_DWORD *)a5 + 5) = 1065353216;
      *(_DWORD *)a5 = 1065353216;
      *((_DWORD *)a5 + 10) = 0;
    }
    *v15 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  if ( !v8 )
  {
    Matrix = (unsigned __int64)CTransform3D::GetMatrix((CTransform3D *)v9, (const struct D2D_SIZE_F *)(a1 + 132));
    v8 = 1;
    *(_OWORD *)a5 = *(_OWORD *)Matrix;
    *((_OWORD *)a5 + 1) = *(_OWORD *)(Matrix + 16);
    *((_OWORD *)a5 + 2) = *(_OWORD *)(Matrix + 32);
    *((_OWORD *)a5 + 3) = *(_OWORD *)(Matrix + 48);
    goto LABEL_51;
  }
  if ( (v9[8] & 1) != 0 )
  {
    v34 = *(void (**)(CRotateTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v9 + 104LL);
    if ( (char *)v34 == (char *)CTranslateTransform3D::GetRealization )
    {
      CTranslateTransform3D::GetRealization(
        (CTranslateTransform3D *)v9,
        (const struct D2D_SIZE_F *)(a1 + 132),
        (struct CMILMatrix *)(v9 + 14));
    }
    else
    {
      if ( v34 == CRotateTransform3D::GetRealization )
      {
        CRotateTransform3D::GetRealization(
          (CRotateTransform3D *)v9,
          (const struct D2D_SIZE_F *)(a1 + 132),
          (struct CMILMatrix *)(v9 + 14));
        v9[8] &= ~1u;
        goto LABEL_50;
      }
      if ( (char *)v34 == (char *)CTransform3DGroup::GetRealization )
      {
        CTransform3DGroup::GetRealization(
          (CTransform3DGroup *)v9,
          (const struct D2D_SIZE_F *)(a1 + 132),
          (struct CMILMatrix *)(v9 + 14));
        v9[8] &= ~1u;
        goto LABEL_50;
      }
      ((void (__fastcall *)(_DWORD *, __int64, _DWORD *))v34)(v9, a1 + 132, v9 + 14);
    }
    v9[8] &= ~1u;
  }
LABEL_50:
  LOBYTE(Matrix) = (unsigned __int8)D2DMatrixMultiply(a5, (const struct D2DMatrix *)(v9 + 14), a5);
LABEL_51:
  *v15 = 1;
LABEL_25:
  if ( !v8 )
  {
LABEL_30:
    LOBYTE(Matrix) = 0;
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
    return Matrix;
  }
  if ( (*(_BYTE *)(a1 + 74) & 4) != 0 )
  {
    v35 = *((float *)a5 + 12);
    if ( (LODWORD(v35) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v6.m128_f32[0] = (float)(int)v35 - v35;
      v42.m128_f32[0] = FLOAT_N0_5;
      v6 = _mm_cmple_ss(v6, v42);
      v36 = (int)v35 - v6.m128_i32[0];
    }
    else
    {
      v47 = v35 + 6291456.25;
      v36 = (int)(LODWORD(v47) << 10) >> 11;
    }
    v37 = *((float *)a5 + 13);
    *((float *)a5 + 12) = (float)v36;
    if ( (LODWORD(v37) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v6.m128_f32[0] = (float)(int)v37 - v37;
      v43.m128_f32[0] = FLOAT_N0_5;
      LODWORD(Matrix) = (int)v37 - _mm_cmple_ss(v6, v43).m128_u32[0];
    }
    else
    {
      v48 = v37 + 6291456.25;
      LODWORD(Matrix) = (int)(LODWORD(v48) << 10) >> 11;
    }
    *v15 = 1;
    *((float *)a5 + 13) = (float)(int)Matrix;
  }
  return Matrix;
}
