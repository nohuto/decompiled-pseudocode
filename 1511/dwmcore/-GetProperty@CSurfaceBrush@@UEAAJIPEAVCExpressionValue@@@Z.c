/*
 * XREFs of ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180121F90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::GetProperty(CSurfaceBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // xmm6_4

  v3 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 22);
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v6 = *((_DWORD *)this + 23);
LABEL_6:
    CExpressionValue::SetDataType(a3);
    *((_DWORD *)a3 + 2) = v6;
    *((_BYTE *)a3 + 4) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x64u);
  return v3;
}
