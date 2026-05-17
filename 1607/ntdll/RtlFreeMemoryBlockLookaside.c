/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x1801070F0
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F9B54 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlFreeMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  RtlpInterlockedPushEntrySList(*(__int128 **)(a2 - 48 + 32), (_QWORD *)(a2 - 48));
  return 0LL;
}
