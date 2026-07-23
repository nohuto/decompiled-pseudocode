/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14008E7E4
 * Callers:
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008E75C (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x14011609C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 * Callees:
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 *__fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  KIRQL v3; // di
  __int64 *v4; // rsi

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v4 = MiBuildWakeList(a1, 8);
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v3);
  }
  return v4;
}
