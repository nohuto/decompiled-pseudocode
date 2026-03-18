/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14008F084
 * Callers:
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008EFFC (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x140115B2C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x1401EAD40 (MiFlushComplete.c)
 * Callees:
 *     MiBuildWakeList @ 0x140026D70 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
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
