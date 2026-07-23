/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x1801070F0
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F9B54 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  return 0;
}
