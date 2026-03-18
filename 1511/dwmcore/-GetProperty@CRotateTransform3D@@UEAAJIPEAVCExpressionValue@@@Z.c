/*
 * XREFs of ?GetProperty@CRotateTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801352E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CRotateTransform3D::GetProperty(CRotateTransform3D *this, int a2, struct CExpressionValue *a3)
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
    v10 = *((double *)this + 15);
    goto LABEL_16;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v10 = *((double *)this + 19);
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = *((double *)this + 20);
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *((double *)this + 21);
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *((double *)this + 16);
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = *((double *)this + 17);
    goto LABEL_16;
  }
  if ( v9 == 1 )
  {
    v10 = *((double *)this + 18);
LABEL_16:
    v11 = v10;
    CExpressionValue::SetDataType(a3);
    *((_BYTE *)a3 + 4) = 1;
    *((float *)a3 + 2) = v11;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Au);
  return v3;
}
