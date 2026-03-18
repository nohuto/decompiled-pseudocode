/*
 * XREFs of ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180100F74
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@@Z @ 0x180101D7C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180101FA8 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180102CB8 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        int *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-38h]
  __int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v8 = 0LL;
  LODWORD(v5) = v2;
  HIDWORD(v5) = a2[1];
  v3 = a2[2];
  Buffer = v5;
  v7 = v3;
  return RtlLookupElementGenericTable(a1, &Buffer);
}
