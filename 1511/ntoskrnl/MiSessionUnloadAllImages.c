/*
 * XREFs of MiSessionUnloadAllImages @ 0x1404F3B90
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 */

__int64 MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  struct _KTHREAD *v4; // rax

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v3 = (unsigned __int64)v1[6];
    if ( v3 + 0x70000000000LL <= 0x7FFFFFFFFFLL && MiSessionLookupImage(v3) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v4 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v4;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
