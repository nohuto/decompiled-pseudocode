/*
 * XREFs of FlushLookUpTableBucket @ 0x1400AD648
 * Callers:
 *     LookUpTableFlushPartial @ 0x1400AD5D4 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1401496CC (LookUpTableFlushComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FlushEventEntryList @ 0x1400AD6F0 (FlushEventEntryList.c)
 *     FlattenEventEntryTree @ 0x1400AD79C (FlattenEventEntryTree.c)
 *     AcquireAggregateSessionLockForFlush @ 0x1400AD7E4 (AcquireAggregateSessionLockForFlush.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  const EVENT_DESCRIPTOR *v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  KIRQL v7; // r10

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  AcquireAggregateSessionLockForFlush();
  v4 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v5 = FlattenEventEntryTree(v4);
  *(_DWORD *)(a1 + 256) -= v5;
  v6 = v5;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 336), v7);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 328), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 328);
  KeAbPostRelease(a1 + 328);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL), v4);
  return v6;
}
