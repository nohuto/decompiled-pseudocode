/*
 * XREFs of MiSessionUnloadAllImages @ 0x140567E70
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 */

void MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
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
  MmReleaseLoadLock(v2);
}
