/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x14063EC60
 * Callers:
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (unsigned __int64 *)(a1 + 1704);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
