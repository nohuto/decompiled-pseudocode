/*
 * XREFs of ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180120B4C
 * Callers:
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801207CC (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z @ 0x180120B28 (-FindElement@-$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyStorageForWrite(CPropertyBag *this, int a2, struct PropertyBagValue **a3)
{
  unsigned int v4; // ebx
  _QWORD *Element; // rax

  v4 = 0;
  Element = CGenericTableMap<unsigned int,PropertyMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 56),
              a2);
  if ( Element )
  {
    *a3 = (struct PropertyBagValue *)Element[1];
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1F6u);
  }
  return v4;
}
