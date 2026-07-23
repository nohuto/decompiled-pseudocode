/*
 * XREFs of MiDecrementSubsections @ 0x1400222F4
 * Callers:
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008EBB0 (MmTrimSection.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiFlushRelease @ 0x1400A43EC (MiFlushRelease.c)
 *     MiUpdateActiveSubsection @ 0x1401EAAB4 (MiUpdateActiveSubsection.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
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
