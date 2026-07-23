/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x1800FD150
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F0120 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  return 0;
}
