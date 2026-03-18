/*
 * XREFs of MiUnlockBootPageSections @ 0x14074CD1C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 */

__int64 MiUnlockBootPageSections()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  int v2; // eax

  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceExclusiveLite((__int64)CurrentThread);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = *((_DWORD *)i + 26);
    if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)i + 26) = v2 & 0xFFBFFFFF;
      MiLockPagableSections(i, 0LL);
    }
  }
  return MiReleaseResourceLite((__int64)CurrentThread);
}
