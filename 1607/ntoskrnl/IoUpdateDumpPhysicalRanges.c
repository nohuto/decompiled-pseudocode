/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1401C6548
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x140149BA4 (IopGetPhysicalMemoryBlock.c)
 *     IopConstructInMemoryDumpHeader @ 0x1401C7070 (IopConstructInMemoryDumpHeader.c)
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
      qword_140328A00(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
