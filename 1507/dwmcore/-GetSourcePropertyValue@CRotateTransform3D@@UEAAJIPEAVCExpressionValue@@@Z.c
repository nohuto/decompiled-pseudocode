/*
 * XREFs of ?GetSourcePropertyValue@CRotateTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18011EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CRotateTransform3D::GetSourcePropertyValue(
        CRotateTransform3D *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  double v10; // xmm6_8
  float v11; // xmm6_4

  v3 = 0;
  if ( !a2 )
  {
    v10 = *((double *)this + 1);
    goto LABEL_16;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v10 = *((double *)this + 5);
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = *((double *)this + 6);
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *((double *)this + 7);
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *((double *)this + 2);
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = *((double *)this + 3);
    goto LABEL_16;
  }
  if ( v9 == 1 )
  {
    v10 = *((double *)this + 4);
LABEL_16:
    v11 = v10;
    CExpressionValue::SetDataType(a3);
    *((_BYTE *)a3 + 4) = 1;
    *((float *)a3 + 2) = v11;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x69u);
  return v3;
}
