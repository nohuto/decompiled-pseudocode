/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x1406CE1E0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExReleaseFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  pXdvExReleaseFastMutexUnsafe(a1);
}
