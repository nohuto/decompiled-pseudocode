/*
 * XREFs of ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801588C4
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801582B4 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180158750 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue<D2DVector4>(CResource *a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v6 = CPropertyBag::AddPropertyValue<D2DVector4>(a1, a3, a4, a5);
    v5 = v6;
    if ( v6 >= 0 )
      return v5;
    v8 = 278;
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
    v6 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, a4, a5);
    v5 = v6;
    if ( v6 >= 0 )
      return v5;
    v8 = 282;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v8);
    return v5;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Eu);
  return v5;
}
