/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x140751BB8
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExReleaseFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  pXdvExReleaseFastMutexUnsafe(a1);
}
