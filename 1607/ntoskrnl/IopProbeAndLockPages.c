/*
 * XREFs of IopProbeAndLockPages @ 0x14010AC3C
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401E308C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, 0, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
