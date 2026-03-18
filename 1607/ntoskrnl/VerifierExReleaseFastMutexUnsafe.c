/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x14071A298
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(const void *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  return pXdvExReleaseFastMutexUnsafe(a1);
}
