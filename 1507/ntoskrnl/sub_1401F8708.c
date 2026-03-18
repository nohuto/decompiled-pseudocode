/*
 * XREFs of sub_1401F8708 @ 0x1401F8708
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall sub_1401F8708(struct _MDL *a1, KPROCESSOR_MODE a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoWriteAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
