/*
 * XREFs of ExDestroyHandleTable @ 0x140508CB0
 * Callers:
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     ObKillProcess @ 0x14050BA98 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x14052836C (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExpRemoveHandleTable @ 0x140508E0C (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
