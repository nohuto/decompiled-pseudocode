/*
 * XREFs of ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800B8798
 * Callers:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z @ 0x180110740 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KIII@Z.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1801377A0 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        int *a2)
{
  int v2; // eax
  int v3; // eax
  PVOID v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v9 = 0LL;
  LODWORD(v6) = v2;
  HIDWORD(v6) = a2[1];
  v3 = a2[2];
  Buffer = v6;
  v8 = v3;
  v4 = RtlLookupElementGenericTable(a1, &Buffer);
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&Buffer);
  return v4;
}
