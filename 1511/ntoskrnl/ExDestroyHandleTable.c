/*
 * XREFs of ExDestroyHandleTable @ 0x1404AE2B0
 * Callers:
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     ObKillProcess @ 0x14044A8F4 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x14045F99C (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14061FE50 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExpRemoveHandleTable @ 0x1404AE40C (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
