/*
 * XREFs of MiLockSectionControlArea @ 0x1400218CC
 * Callers:
 *     MmEnoughMemoryForWrite @ 0x140020C10 (MmEnoughMemoryForWrite.c)
 *     MiReferenceControlAreaForCacheManager @ 0x140021518 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeFlushRange @ 0x140021854 (MiComputeFlushRange.c)
 *     MmUpdateSectionIoAttribution @ 0x1400A7A10 (MmUpdateSectionIoAttribution.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400AA6AC (MmDisableModifiedWriteOfSection.c)
 *     MiFlushDataSection @ 0x1400FD7B0 (MiFlushDataSection.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5C5C (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C2F60 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  __int64 v7; // rbx

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140326540);
    *a3 = v6;
    v7 = a2 == 1 ? *a1 : a1[2];
    if ( !v7 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
      return v7;
    }
    ExReleaseSpinLockExclusive(&dword_140326540, *a3);
  }
  ExReleaseSpinLockExclusive(&dword_140326540, v6);
  return 0LL;
}
