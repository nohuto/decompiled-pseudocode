/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x14067D3B4
 * Callers:
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (_QWORD *)(a1 + 1712);
  _InterlockedOr(v7, 0);
  if ( (*v5 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v5);
  return KiLeaveCriticalRegionUnsafe(a2, a2, a3, a4);
}
