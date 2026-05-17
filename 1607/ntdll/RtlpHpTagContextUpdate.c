/*
 * XREFs of RtlpHpTagContextUpdate @ 0x1800736C8
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180073660 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpTagContextUpdate(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180150938 + 8LL * ((unsigned __int16)a2 - 1));
  RtlAcquireSRWLockShared(&RtlpHpTagContext, a2, a3, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  return RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
