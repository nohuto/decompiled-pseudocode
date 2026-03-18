/*
 * XREFs of MiLockSectionControlArea @ 0x14000C6E4
 * Callers:
 *     MmDisableModifiedWriteOfSection @ 0x14000A624 (MmDisableModifiedWriteOfSection.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14000C5B0 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeFlushRange @ 0x14000C66C (MiComputeFlushRange.c)
 *     MiFlushDataSection @ 0x14000E728 (MiFlushDataSection.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  __int64 v7; // rbx

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_1402FE280);
    *a3 = v6;
    v7 = a2 == 1 ? *a1 : a1[2];
    if ( !v7 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
      return v7;
    }
    ExReleaseSpinLockExclusive(&dword_1402FE280, *a3);
  }
  ExReleaseSpinLockExclusive(&dword_1402FE280, v6);
  return 0LL;
}
