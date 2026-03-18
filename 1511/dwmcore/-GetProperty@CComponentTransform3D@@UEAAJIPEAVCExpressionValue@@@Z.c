/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __m128d v12; // xmm6
  __m128d v13; // xmm7
  double v14; // xmm0_8
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  __m128 v17; // xmm6
  __m128 v18; // xmm7
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  float v22; // xmm6_4
  __int128 v24; // [rsp+38h] [rbp-19h]
  float v25; // [rsp+40h] [rbp-11h]
  _OWORD v26[6]; // [rsp+48h] [rbp-9h] BYREF

  v3 = 0;
  v5 = a2 - 12;
  if ( !v5 )
  {
    v22 = *((double *)this + 27);
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v22 = *((double *)this + 27) * 57.2957763671875;
LABEL_19:
    CExpressionValue::SetDataType(a3);
    *((float *)a3 + 2) = v22;
    goto LABEL_20;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    v19 = *(_OWORD *)((char *)this + 264);
    v26[0] = *(_OWORD *)((char *)this + 248);
    v20 = *(_OWORD *)((char *)this + 280);
    v26[1] = v19;
    v21 = *(_OWORD *)((char *)this + 296);
    v26[2] = v20;
    v26[3] = v21;
    CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)v26);
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v12 = (__m128d)*((unsigned __int64 *)this + 15);
    v13 = (__m128d)*((unsigned __int64 *)this + 16);
    v14 = *((double *)this + 17);
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v17 = _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)this + 18));
    v18 = _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)this + 19));
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    goto LABEL_20;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(float *)&v15 = *((double *)this + 20);
    *(float *)&v16 = *((double *)this + 21);
    *(_QWORD *)&v24 = __PAIR64__(v16, v15);
    *((float *)&v24 + 2) = *((double *)this + 22);
    *((float *)&v24 + 3) = *((double *)this + 23);
    CExpressionValue::SetDataType(a3);
    *(_OWORD *)((char *)a3 + 8) = v24;
    goto LABEL_20;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = (__m128d)*((unsigned __int64 *)this + 24);
    v13 = (__m128d)*((unsigned __int64 *)this + 25);
    v14 = *((double *)this + 26);
    goto LABEL_11;
  }
  if ( v11 == 1 )
  {
    v12 = (__m128d)*((unsigned __int64 *)this + 28);
    v13 = (__m128d)*((unsigned __int64 *)this + 29);
    v14 = *((double *)this + 30);
LABEL_11:
    v25 = v14;
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(_mm_cvtpd_ps(v12), _mm_cvtpd_ps(v13)).m128_u64[0];
    *((float *)a3 + 4) = v25;
LABEL_20:
    *((_BYTE *)a3 + 4) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x191u);
  return v3;
}
