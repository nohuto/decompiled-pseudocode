/*
 * XREFs of MiDecrementSubsections @ 0x140022774
 * Callers:
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008F450 (MmTrimSection.c)
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiFlushRelease @ 0x1400A5E74 (MiFlushRelease.c)
 *     MiUpdateActiveSubsection @ 0x1401EAC88 (MiUpdateActiveSubsection.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAE48 (MiFreeOverlappedFlushEntry.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140022860 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x140026DCC (MiInsertUnusedSubsection.c)
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
