/*
 * XREFs of sub_1401F8750 @ 0x1401F8750
 * Callers:
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall sub_1401F8750(struct _MDL *a1, KPROCESSOR_MODE a2, LOCK_OPERATION a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
