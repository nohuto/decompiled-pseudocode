/*
 * XREFs of CmpFreeValue @ 0x140401680
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x1404005C8 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x140401B10 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053A9D4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053AF30 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B080 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF340 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValues @ 0x140608C08 (CmpFreeKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E630 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x140401A0C (CmpFreeValueData.c)
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
