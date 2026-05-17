/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x1800FD150
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F0120 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlFreeMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  RtlpInterlockedPushEntrySList(*(__int128 **)(a2 - 48 + 32), (_QWORD *)(a2 - 48));
  return 0LL;
}
