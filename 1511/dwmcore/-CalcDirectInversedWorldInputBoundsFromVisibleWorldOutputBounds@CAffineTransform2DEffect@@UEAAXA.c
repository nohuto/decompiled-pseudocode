/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x180134850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x180135044 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

int __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        float *a2,
        float *a3,
        float *a4,
        int a5,
        float *a6,
        __int64 a7)
{
  unsigned int v8; // xmm4_4
  unsigned int v10; // xmm3_4
  unsigned int v12; // xmm2_4
  unsigned int v14; // xmm1_4
  unsigned int v15; // xmm0_4
  int result; // eax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // r10
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  _DWORD v39[6]; // [rsp+20h] [rbp-60h] BYREF
  float v40; // [rsp+38h] [rbp-48h] BYREF
  float v41; // [rsp+3Ch] [rbp-44h]
  float v42; // [rsp+40h] [rbp-40h]
  float v43; // [rsp+44h] [rbp-3Ch]
  float v44; // [rsp+48h] [rbp-38h] BYREF
  float v45; // [rsp+4Ch] [rbp-34h]
  float v46; // [rsp+50h] [rbp-30h]
  float v47; // [rsp+54h] [rbp-2Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+58h] [rbp-28h] BYREF

  v8 = *(_DWORD *)(a1 + 204);
  v10 = *(_DWORD *)(a1 + 208);
  v12 = *(_DWORD *)(a1 + 212);
  v14 = *(_DWORD *)(a1 + 216);
  v15 = *(_DWORD *)(a1 + 220);
  v39[0] = *(_DWORD *)(a1 + 200);
  v39[1] = v8;
  v39[2] = v10;
  v39[3] = v12;
  v39[4] = v14;
  v39[5] = v15;
  *(_QWORD *)&matrix.m11 = __PAIR64__(v8, v39[0]);
  *(_QWORD *)&matrix.m[1][0] = __PAIR64__(v12, v10);
  *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v15, v14);
  result = D2D1InvertMatrix(&matrix);
  v18 = *(_OWORD *)a3;
  if ( result )
  {
    *(_OWORD *)a7 = v18;
    if ( *a3 > *(float *)a7 )
      *(float *)a7 = *a3;
    v19 = a3[1];
    if ( v19 > *(float *)(a7 + 4) )
      *(float *)(a7 + 4) = v19;
    v20 = a3[2];
    if ( *(float *)(a7 + 8) > v20 )
      *(float *)(a7 + 8) = v20;
    v21 = a3[3];
    if ( *(float *)(a7 + 12) > v21 )
      *(float *)(a7 + 12) = v21;
    if ( *(float *)(a7 + 8) <= *(float *)a7 || *(float *)(a7 + 12) <= *(float *)(a7 + 4) )
    {
      *(_QWORD *)(a7 + 8) = 0LL;
      *(_QWORD *)a7 = 0LL;
    }
    v22 = *(float *)(a7 + 8) - *a2;
    v40 = *(float *)a7 - *a2;
    v23 = *(float *)(a7 + 4) - a2[1];
    v42 = v22;
    v41 = v23;
    v43 = *(float *)(a7 + 12) - a2[1];
    CAffineTransform2DEffect::TransformBounds(v17, &matrix, &v40, &v44);
    v26 = v45;
    v27 = v46;
    v28 = v44 + *a2;
    *a6 = v28;
    a6[1] = v26 + a2[1];
    v29 = v47;
    a6[2] = v27 + *a2;
    a6[3] = v29 + a2[1];
    if ( *a4 > v28 )
      *a6 = *a4;
    v30 = a4[1];
    if ( v30 > a6[1] )
      a6[1] = v30;
    v31 = a4[2];
    if ( a6[2] > v31 )
      a6[2] = v31;
    v32 = a4[3];
    if ( a6[3] > v32 )
      a6[3] = v32;
    if ( a6[2] <= *a6 || a6[3] <= a6[1] )
    {
      *((_QWORD *)a6 + 1) = v25;
      *(_QWORD *)a6 = v25;
    }
    v33 = a6[1] - a2[1];
    v40 = *a6 - *a2;
    v34 = a6[2] - *a2;
    v41 = v33;
    v35 = a6[3] - a2[1];
    v42 = v34;
    v43 = v35;
    result = CAffineTransform2DEffect::TransformBounds(v24, v39, &v40, &v44);
    v36 = v45;
    *(float *)a7 = v44 + *a2;
    v37 = v46;
    *(float *)(a7 + 4) = v36 + a2[1];
    v38 = v47;
    *(float *)(a7 + 8) = v37 + *a2;
    *(float *)(a7 + 12) = v38 + a2[1];
  }
  else
  {
    *(_OWORD *)a6 = v18;
    *(_OWORD *)a7 = *(_OWORD *)a3;
  }
  *(float *)(a1 + 228) = *a6 - *a2;
  *(float *)(a1 + 232) = a6[1] - a2[1];
  return result;
}
