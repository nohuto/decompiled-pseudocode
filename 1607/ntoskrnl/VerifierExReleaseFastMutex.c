/*
 * XREFs of VerifierExReleaseFastMutex @ 0x14071A228
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x14071A6B0 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(const void *a1)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 3u, (__int64)KeGetCurrentThread(), retaddr);
  pXdvExReleaseFastMutex(a1);
  ViKeIrqlLogCommon(v2, 1u);
}
