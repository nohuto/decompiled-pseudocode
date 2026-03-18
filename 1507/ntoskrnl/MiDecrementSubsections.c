/*
 * XREFs of MiDecrementSubsections @ 0x140054288
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiFlushRelease @ 0x1401198B8 (MiFlushRelease.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiDecrementSubsections(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx

  v6 = 0LL;
  do
  {
    v6 += MiDecrementSubsectionViewCount(a1, a3);
    if ( !*(_QWORD *)(a1 + 96) && (*(_BYTE *)(a1 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection(v7, 1LL);
    if ( a1 == a2 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  while ( a1 );
  return v6;
}
