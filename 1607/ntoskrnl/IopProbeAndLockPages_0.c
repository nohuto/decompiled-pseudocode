/*
 * XREFs of IopProbeAndLockPages_0 @ 0x1401C5358
 * Callers:
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401E3260 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(
        struct _MDL *a1,
        KPROCESSOR_MODE a2,
        LOCK_OPERATION a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
