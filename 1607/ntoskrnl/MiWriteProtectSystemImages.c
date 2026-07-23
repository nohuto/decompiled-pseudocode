/*
 * XREFs of MiWriteProtectSystemImages @ 0x1405541A0
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MiProtectSystemImage @ 0x140554204 (MiProtectSystemImage.c)
 */

__int64 MiWriteProtectSystemImages()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceExclusiveLite((__int64)CurrentThread);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = (__int64)i[14];
    if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 144) || ((_DWORD)i[13] & 0x8000000) == 0 )
      MiProtectSystemImage(i);
  }
  return MiReleaseResourceLite((__int64)CurrentThread);
}
