/*
 * XREFs of CmpFreeValue @ 0x1403D8900
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1403F43A0 (CmpSetValueKeyNew.c)
 *     CmpFreeKeyValues @ 0x14050F9C8 (CmpFreeKeyValues.c)
 * Callees:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1403D96C0 (CmpFreeValueData.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = -1;
  v2 = BugCheckParameter3;
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
