/*
 * XREFs of MiWriteProtectSystemImages @ 0x140520C1C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiProtectSystemImage @ 0x140520C80 (MiProtectSystemImage.c)
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
    if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 136) || ((_DWORD)i[13] & 0x8000000) == 0 )
      MiProtectSystemImage(i);
  }
  return MiReleaseResourceLite((__int64)CurrentThread);
}
