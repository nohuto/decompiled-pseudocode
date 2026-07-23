/*
 * XREFs of MiLockSectionControlArea @ 0x14002144C
 * Callers:
 *     MmEnoughMemoryForWrite @ 0x140020790 (MmEnoughMemoryForWrite.c)
 *     MiReferenceControlAreaForCacheManager @ 0x140021098 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeFlushRange @ 0x1400213D4 (MiComputeFlushRange.c)
 *     MmUpdateSectionIoAttribution @ 0x1400A5F88 (MmUpdateSectionIoAttribution.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400A8C2C (MmDisableModifiedWriteOfSection.c)
 *     MiFlushDataSection @ 0x1400FB530 (MiFlushDataSection.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5A88 (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  __int64 v7; // rbx

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140326580);
    *a3 = v6;
    v7 = a2 == 1 ? *a1 : a1[2];
    if ( !v7 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
      return v7;
    }
    ExReleaseSpinLockExclusive(&dword_140326580, *a3);
  }
  ExReleaseSpinLockExclusive(&dword_140326580, v6);
  return 0LL;
}
