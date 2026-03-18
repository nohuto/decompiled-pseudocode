/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1401CADE0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1401E3260 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(struct _MDL *a1, KPROCESSOR_MODE a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoWriteAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
