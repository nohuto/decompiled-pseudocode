/*
 * XREFs of MiUnlockBootPageSections @ 0x1407A412C
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
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
