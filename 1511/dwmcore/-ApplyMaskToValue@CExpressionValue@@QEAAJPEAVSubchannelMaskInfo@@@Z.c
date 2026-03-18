/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18013665C
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011B7B8 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180136A40 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // edx
  int AsFloatArray; // eax
  __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  __m128 v17; // xmm6
  FLOAT m21; // eax
  __m128 v19; // xmm6
  unsigned int v21; // [rsp+28h] [rbp-89h]
  struct D2D_MATRIX_3X2_F v22; // [rsp+38h] [rbp-79h] BYREF
  __int128 v23; // [rsp+58h] [rbp-59h] BYREF
  __int128 v24; // [rsp+68h] [rbp-49h]
  __int128 v25; // [rsp+78h] [rbp-39h]
  __int128 v26; // [rsp+88h] [rbp-29h]
  _OWORD v27[4]; // [rsp+98h] [rbp-19h] BYREF

  LODWORD(v27[0]) = 0;
  memset_0((char *)v27 + 4, 0, 0x3CuLL);
  LODWORD(v23) = 0;
  memset_0((char *)&v23 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(_DWORD *)this);
  v5 = *(unsigned __int8 *)a2;
  v6 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, v7, (float *)v27);
  v9 = 0LL;
  v10 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AsFloatArray, 0x34Fu);
    return v10;
  }
  if ( v5 )
  {
    do
    {
      if ( *((_DWORD *)a2 + 1) == 1 )
      {
        v11 = (*((unsigned __int8 *)a2 + 8) >> (2 * (*(_BYTE *)a2 - v9 - 1))) & 3;
      }
      else
      {
        if ( *((_DWORD *)a2 + 1) != 2 )
        {
          v21 = 874;
LABEL_18:
          v10 = -2147467259;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v21);
          return v10;
        }
        v11 = (*((_QWORD *)a2 + 1) >> (4 * (*(_BYTE *)a2 - (unsigned __int8)v9) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v11 >= v6 )
      {
        v21 = 885;
        goto LABEL_18;
      }
      if ( (unsigned int)v9 >= 0x10 )
      {
        v21 = 896;
        goto LABEL_18;
      }
      *((_DWORD *)&v23 + v9) = *((_DWORD *)v27 + v11);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v5 );
  }
  v12 = v5 - 1;
  if ( !v12 )
  {
    CExpressionValue::SetDataType(this);
    *((_DWORD *)this + 2) = v23;
    goto LABEL_29;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v19 = (__m128)DWORD1(v23);
    CExpressionValue::SetDataType(this);
    *((_QWORD *)this + 1) = _mm_unpacklo_ps((__m128)(unsigned int)v23, v19).m128_u64[0];
    goto LABEL_29;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v17 = (__m128)DWORD1(v23);
    v22.m21 = *((FLOAT *)&v23 + 2);
    CExpressionValue::SetDataType(this);
    m21 = v22.m21;
    *((_QWORD *)this + 1) = _mm_unpacklo_ps((__m128)(unsigned int)v23, v17).m128_u64[0];
    *((FLOAT *)this + 4) = m21;
    goto LABEL_29;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *(_OWORD *)&v22.m11 = v23;
    CExpressionValue::SetDataType(this);
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)&v22.m11;
LABEL_29:
    *((_BYTE *)this + 4) = 1;
    return v10;
  }
  v16 = v15 - 2;
  if ( v16 )
  {
    if ( v16 != 10 )
    {
      v21 = 950;
      goto LABEL_18;
    }
    v27[0] = v23;
    v27[1] = v24;
    v27[2] = v25;
    v27[3] = v26;
    CExpressionValue::SetMatrix4x4Value(this, (const struct D2DMatrix *)v27);
  }
  else
  {
    *(_OWORD *)&v22.m11 = v23;
    *(_QWORD *)&v22.m[2][0] = v24;
    CExpressionValue::SetMatrix3x2Value(this, &v22);
  }
  return v10;
}
