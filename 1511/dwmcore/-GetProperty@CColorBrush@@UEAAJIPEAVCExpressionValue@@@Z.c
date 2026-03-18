/*
 * XREFs of ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801210C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int128 v6; // xmm0

  v3 = 0;
  if ( a2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Du);
  }
  else
  {
    CExpressionValue::SetDataType(a3);
    v6 = *((_OWORD *)this + 3);
    *((_BYTE *)a3 + 4) = 1;
    *(_OWORD *)((char *)a3 + 8) = v6;
  }
  return v3;
}
