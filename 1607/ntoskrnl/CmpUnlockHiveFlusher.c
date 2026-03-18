/*
 * XREFs of CmpUnlockHiveFlusher @ 0x1403FD608
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

void __fastcall CmpUnlockHiveFlusher(__int64 a1)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
}
