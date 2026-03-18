/*
 * XREFs of CmpLockHiveFlusherShared @ 0x1403FD564
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1400B1FBC (CmpUpdateHiveRootCellFlags.c)
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CmpLockHiveFlusherShared(__int64 a1)
{
  return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
}
