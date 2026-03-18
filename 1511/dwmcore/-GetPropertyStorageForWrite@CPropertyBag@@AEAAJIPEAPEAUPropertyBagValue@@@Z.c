/*
 * XREFs of ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180135DAC
 * Callers:
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180135AD8 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z @ 0x180135D88 (-FindElement@-$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyStorageForWrite(CPropertyBag *this, int a2, struct PropertyBagValue **a3)
{
  unsigned int v4; // ebx
  _QWORD *Element; // rax

  v4 = 0;
  Element = CGenericTableMap<unsigned int,PropertyMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 48),
              a2);
  if ( Element )
  {
    *a3 = (struct PropertyBagValue *)Element[1];
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x228u);
  }
  return v4;
}
