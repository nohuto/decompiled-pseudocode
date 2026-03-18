/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801414F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x180141410 (-GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(
        CRectangleGeometry *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  int Property; // eax
  unsigned int v5; // edi
  float v7; // [rsp+58h] [rbp+20h] BYREF

  Property = CRectangleGeometry::GetProperty(this, a2, &v7);
  v5 = Property;
  if ( Property < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Property, 0x178u);
  }
  else
  {
    *(float *)a3 = v7;
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
  }
  return v5;
}
