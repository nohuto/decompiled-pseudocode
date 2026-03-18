/*
 * XREFs of CmpMarkKcbDeletedAndCache @ 0x1403DB284
 * Callers:
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 * Callees:
 *     CmpInsertKeyHashToDeletedKcbTable @ 0x14001B394 (CmpInsertKeyHashToDeletedKcbTable.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpMarkKcbDeletedAndCache(ULONG_PTR BugCheckParameter4)
{
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  CmpInsertKeyHashToDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
