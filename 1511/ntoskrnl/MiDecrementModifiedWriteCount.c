/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140038E48
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x1400E3A38 (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x1401088B0 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  KIRQL v3; // di
  __int64 v4; // rsi

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v4 = MiBuildWakeList(a1, 8LL);
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v3);
  }
  return v4;
}
