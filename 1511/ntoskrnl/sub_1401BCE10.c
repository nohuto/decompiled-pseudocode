/*
 * XREFs of sub_1401BCE10 @ 0x1401BCE10
 * Callers:
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall sub_1401BCE10(struct _MDL *a1, KPROCESSOR_MODE a2, LOCK_OPERATION a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
