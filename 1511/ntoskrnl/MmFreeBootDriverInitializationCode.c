/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x14052FD8C
 * Callers:
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
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
