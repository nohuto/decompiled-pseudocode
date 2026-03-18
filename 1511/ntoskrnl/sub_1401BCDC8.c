/*
 * XREFs of sub_1401BCDC8 @ 0x1401BCDC8
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall sub_1401BCDC8(struct _MDL *a1, KPROCESSOR_MODE a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoWriteAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
