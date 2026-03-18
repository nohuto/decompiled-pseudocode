/*
 * XREFs of ?FindElement@?$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z @ 0x180120B28
 * Callers:
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180120500 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180120B4C (-GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z.c)
 *     ?GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z @ 0x180120BB0 (-GetPropertyValue@CPropertyBag@@MEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<unsigned int,PropertyMapEntry>::FindElement(struct _RTL_GENERIC_TABLE *a1, int a2)
{
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  Buffer = a2;
  return RtlLookupElementGenericTable(a1, &Buffer);
}
