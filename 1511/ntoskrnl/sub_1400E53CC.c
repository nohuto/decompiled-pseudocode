/*
 * XREFs of sub_1400E53CC @ 0x1400E53CC
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall sub_1400E53CC(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, 0, a3);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
