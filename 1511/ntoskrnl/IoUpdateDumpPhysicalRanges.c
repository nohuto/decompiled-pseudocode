/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1401B875C
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x140140DD4 (IopGetPhysicalMemoryBlock.c)
 *     IopConstructInMemoryDumpHeader @ 0x1401B9280 (IopConstructInMemoryDumpHeader.c)
 */

__int64 IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *PhysicalMemoryBlock; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      qword_140305E70(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
