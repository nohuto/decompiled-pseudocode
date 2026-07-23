/*
 * XREFs of CmpLockHiveFlusherShared @ 0x1403FC424
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1400AFEFC (CmpUpdateHiveRootCellFlags.c)
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CmpLockHiveFlusherShared(__int64 a1)
{
  return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
}
