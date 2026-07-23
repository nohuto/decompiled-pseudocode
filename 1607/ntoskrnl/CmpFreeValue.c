/*
 * XREFs of CmpFreeValue @ 0x140400540
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x1404009D0 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053B470 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF3F4 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValues @ 0x140608CBC (CmpFreeKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E6E4 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404008CC (CmpFreeValueData.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v6 = -1;
  v2 = BugCheckParameter3;
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v6);
  if ( v4 )
  {
    if ( (unsigned __int8)CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8)) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
      HvFreeCell(BugCheckParameter2, v2);
      return 1;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
  }
  return 0;
}
