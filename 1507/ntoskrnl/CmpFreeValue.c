/*
 * XREFs of CmpFreeValue @ 0x1404A08F4
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpFreeKeyValues @ 0x140585C38 (CmpFreeKeyValues.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404A0954 (CmpFreeValueData.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = -1;
  v2 = BugCheckParameter3;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  if ( v4 )
  {
    if ( (unsigned __int8)CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8)) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, v2, v5, v6);
      return 1;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
  }
  return 0;
}
