/*
 * XREFs of ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008D2E0
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$AddPropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008CCD4 (--$AddPropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatr.c)
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008CE70 (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue<D2DMatrix>(
        CResource *a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v5 = CPropertyBag::AddPropertyValue<D2DMatrix>(a1, a3, a4, a5);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v8 = 278;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v8);
    return v6;
  }
  if ( a2 != 1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Eu);
    return v6;
  }
  v5 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>((__int64)a1, a3, a4, a5);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 282;
    goto LABEL_9;
  }
  return v6;
}
