/*
 * XREFs of ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801646A8
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRectConservative(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm1_4
  __int64 *v5; // rax
  float v6; // xmm2_4
  float top; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  __int128 v16; // [rsp+0h] [rbp-40h]
  _DWORD v17[3]; // [rsp+10h] [rbp-30h] BYREF
  int v18; // [rsp+1Ch] [rbp-24h]
  float v19; // [rsp+20h] [rbp-20h]
  int v20; // [rsp+24h] [rbp-1Ch]
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF

  v4 = *((float *)this + 1);
  v5 = (__int64 *)v17;
  v6 = *(float *)this;
  top = a2->top;
  v8 = (float)(a2->left * *(float *)this) + (float)(a2->right * v4);
  *(float *)&v17[1] = v4;
  v9 = a2->bottom * v4;
  v10 = v8 + a2[1].left;
  v18 = *((_DWORD *)this + 3);
  v17[0] = *((_DWORD *)this + 2);
  v17[2] = v17[0];
  v19 = v6;
  v11 = v10;
  v12 = (float)((float)(top * v6) + v9) + a2[1].top;
  v20 = v18;
  v13 = v12;
  do
  {
    v14 = (float)((float)(a2->left * COERCE_FLOAT(*v5)) + (float)(a2->right * COERCE_FLOAT(HIDWORD(*v5)))) + a2[1].left;
    v15 = (float)((float)(a2->top * COERCE_FLOAT(*v5)) + (float)(a2->bottom * COERCE_FLOAT(HIDWORD(*v5)))) + a2[1].top;
    if ( v14 <= v10 )
      v10 = (float)((float)(a2->left * COERCE_FLOAT(*v5)) + (float)(a2->right * COERCE_FLOAT(HIDWORD(*v5))))
          + a2[1].left;
    if ( v15 <= v12 )
      v12 = (float)((float)(a2->top * COERCE_FLOAT(*v5)) + (float)(a2->bottom * COERCE_FLOAT(HIDWORD(*v5)))) + a2[1].top;
    if ( v11 <= v14 )
      v11 = (float)((float)(a2->left * COERCE_FLOAT(*v5)) + (float)(a2->right * COERCE_FLOAT(HIDWORD(*v5))))
          + a2[1].left;
    if ( v13 <= v15 )
      v13 = (float)((float)(a2->top * COERCE_FLOAT(*v5)) + (float)(a2->bottom * COERCE_FLOAT(HIDWORD(*v5)))) + a2[1].top;
    ++v5;
  }
  while ( v5 != &v21 );
  *(_QWORD *)&v16 = __PAIR64__(LODWORD(v12), LODWORD(v10));
  *((_QWORD *)&v16 + 1) = __PAIR64__(LODWORD(v13), LODWORD(v11));
  *(_OWORD *)&a3->m11 = v16;
}
