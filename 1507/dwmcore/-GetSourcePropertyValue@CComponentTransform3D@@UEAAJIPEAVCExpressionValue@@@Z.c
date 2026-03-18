/*
 * XREFs of ?GetSourcePropertyValue@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18011F170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetSourcePropertyValue(
        CComponentTransform3D *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __m128d v10; // xmm6
  __m128d v11; // xmm7
  double v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rax
  double *v15; // rcx
  double v16; // xmm0_8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  float v20; // xmm6_4
  __int128 v22; // [rsp+38h] [rbp-19h]
  _OWORD v23[6]; // [rsp+48h] [rbp-9h] BYREF

  v3 = 0;
  v5 = a2 - 10;
  if ( !v5 )
  {
    v20 = *((double *)this + 24);
    CExpressionValue::SetDataType(a3);
    *((float *)a3 + 2) = v20;
    goto LABEL_17;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    v17 = *((_OWORD *)this + 15);
    v23[0] = *((_OWORD *)this + 14);
    v18 = *((_OWORD *)this + 16);
    v23[1] = v17;
    v19 = *((_OWORD *)this + 17);
    v23[2] = v18;
    v23[3] = v19;
    CExpressionValue::SetMatrix4x4Value(a3, (const struct D2DMatrix *)v23);
    return v3;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = (__m128d)*((unsigned __int64 *)this + 14);
    v11 = (__m128d)*((unsigned __int64 *)this + 15);
    v12 = *((double *)this + 16);
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = 0LL;
    v15 = (double *)((char *)this + 136);
    do
    {
      v16 = *v15++;
      *((float *)&v23[-1] + v14++) = v16;
    }
    while ( v14 < 4 );
    CExpressionValue::SetDataType(a3);
    *(_OWORD *)((char *)a3 + 8) = v22;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (__m128d)*((unsigned __int64 *)this + 21);
    v11 = (__m128d)*((unsigned __int64 *)this + 22);
    v12 = *((double *)this + 23);
    goto LABEL_9;
  }
  if ( v9 == 1 )
  {
    v10 = (__m128d)*((unsigned __int64 *)this + 25);
    v11 = (__m128d)*((unsigned __int64 *)this + 26);
    v12 = *((double *)this + 27);
LABEL_9:
    *((float *)&v22 + 2) = v12;
    CExpressionValue::SetDataType(a3);
    v13 = DWORD2(v22);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(_mm_cvtpd_ps(v10), _mm_cvtpd_ps(v11)).m128_u64[0];
    *((_DWORD *)a3 + 4) = v13;
LABEL_17:
    *((_BYTE *)a3 + 4) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x116u);
  return v3;
}
