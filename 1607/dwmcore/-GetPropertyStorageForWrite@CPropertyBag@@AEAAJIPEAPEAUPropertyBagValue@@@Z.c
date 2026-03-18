/*
 * XREFs of ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x18010E5B4
 * Callers:
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180158750 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWindowRecord@CLegacySurfaceManager@@K@Z @ 0x1800B0CAC (-FindElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWi.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyStorageForWrite(CPropertyBag *this, int a2, struct PropertyBagValue **a3)
{
  unsigned int v4; // ebx
  _QWORD *Element; // rax

  v4 = 0;
  Element = CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 120),
              a2);
  if ( Element )
  {
    *a3 = (struct PropertyBagValue *)Element[1];
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x258u);
  }
  return v4;
}
