/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x14054EE14
 * Callers:
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MiFreeDriverInitialization @ 0x14047C25C (MiFreeDriverInitialization.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 */

__int64 MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx

  Lock = MmAcquireLoadLock();
  MiAcquireResourceExclusiveLite((__int64)Lock);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  MiReleaseResourceLite((__int64)Lock);
  return MmReleaseLoadLock((__int64)Lock);
}
