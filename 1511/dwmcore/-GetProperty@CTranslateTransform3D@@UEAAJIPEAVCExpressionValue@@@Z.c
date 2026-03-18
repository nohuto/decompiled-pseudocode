/*
 * XREFs of ?GetProperty@CTranslateTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180135250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::GetProperty(CTranslateTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  double v6; // xmm6_8
  float v7; // xmm6_4

  v3 = 0;
  if ( !a2 )
  {
    v6 = *((double *)this + 15);
    goto LABEL_8;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v6 = *((double *)this + 16);
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    v6 = *((double *)this + 17);
LABEL_8:
    v7 = v6;
    CExpressionValue::SetDataType(a3);
    *((_BYTE *)a3 + 4) = 1;
    *((float *)a3 + 2) = v7;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x44u);
  return v3;
}
