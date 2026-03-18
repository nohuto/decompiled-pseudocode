/*
 * XREFs of CmpMarkKcbDeletedAndCache @ 0x1404470AC
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 * Callees:
 *     CmpInsertKeyHashToDeletedKcbTable @ 0x14001B0F4 (CmpInsertKeyHashToDeletedKcbTable.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpMarkKcbDeletedAndCache(ULONG_PTR BugCheckParameter4)
{
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  CmpInsertKeyHashToDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
