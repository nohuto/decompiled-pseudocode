/*
 * XREFs of ExDestroyHandleTable @ 0x14045F0FC
 * Callers:
 *     ObKillProcess @ 0x14045D694 (ObKillProcess.c)
 *     ObInitProcess @ 0x14045F504 (ObInitProcess.c)
 *     RtlDestroyAtomTable @ 0x1404A2E30 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406550F4 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExpRemoveHandleTable @ 0x14045F258 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
