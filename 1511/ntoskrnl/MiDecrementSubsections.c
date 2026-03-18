/*
 * XREFs of MiDecrementSubsections @ 0x1400A8B80
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiFlushRelease @ 0x140098554 (MiFlushRelease.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MmTrimSection @ 0x1400E8FF0 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401DA230 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiDecrementSubsections(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi

  v6 = 0LL;
  do
  {
    v6 += MiDecrementSubsectionViewCount(a1, a3);
    if ( !*(_QWORD *)(a1 + 96) && (*(_BYTE *)(a1 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection(a1, 1);
    if ( a1 == a2 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  while ( a1 );
  return v6;
}
