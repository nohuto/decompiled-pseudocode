/*
 * XREFs of RtlpHpTagContextUpdate @ 0x180071254
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x1800711EC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpTagContextUpdate(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbx

  v4 = a4;
  v6 = *(_QWORD *)(qword_180143898 + 8LL * a2 - 8);
  if ( !a4 )
    v4 = 16LL;
  RtlAcquireSRWLockShared(&RtlpHpTagContext);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), v4 - a3);
  RtlReleaseSRWLockShared(&RtlpHpTagContext);
}
