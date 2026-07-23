/*
 * XREFs of ExDestroyHandleTable @ 0x14045DFCC
 * Callers:
 *     ObKillProcess @ 0x14045C564 (ObKillProcess.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 *     RtlDestroyAtomTable @ 0x14051B230 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406551D8 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExpRemoveHandleTable @ 0x14045E128 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
