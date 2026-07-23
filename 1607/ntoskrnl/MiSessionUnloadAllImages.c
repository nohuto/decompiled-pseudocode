/*
 * XREFs of MiSessionUnloadAllImages @ 0x1405324A8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x1405462A8 (MmUnloadSystemImage.c)
 */

__int64 MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  struct _KTHREAD *v6; // rax

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  if ( PsLoadedModuleList != &PsLoadedModuleList )
  {
    v3 = qword_140326950;
    do
    {
      v4 = (unsigned __int64)v1[6];
      if ( v4 >= v3 && v4 < v3 + 0x8000000000LL && MiSessionLookupImage(v4) )
      {
        MmReleaseLoadLock(v2);
        MmUnloadSystemImage((ULONG_PTR)v1);
        v6 = MmAcquireLoadLock();
        v3 = qword_140326950;
        v2 = (__int64)v6;
        v1 = (PVOID *)PsLoadedModuleList;
      }
      else
      {
        v1 = (PVOID *)*v1;
      }
    }
    while ( v1 != &PsLoadedModuleList );
  }
  return MmReleaseLoadLock(v2);
}
