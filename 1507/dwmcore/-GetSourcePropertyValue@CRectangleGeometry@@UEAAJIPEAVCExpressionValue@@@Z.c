/*
 * XREFs of ?GetSourcePropertyValue@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180107770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x1801076B0 (-GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetSourcePropertyValue(
        CRectangleGeometry *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  int Property; // eax
  unsigned int v5; // edi
  float v7; // [rsp+58h] [rbp+20h] BYREF

  Property = CRectangleGeometry::GetProperty(this, a2, &v7);
  v5 = Property;
  if ( Property >= 0 )
  {
    CExpressionValue::SetDataType(a3);
    *((float *)a3 + 2) = v7;
    *((_BYTE *)a3 + 4) = 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Property, 0x175u);
  }
  return v5;
}
