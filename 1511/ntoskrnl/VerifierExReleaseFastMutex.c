/*
 * XREFs of VerifierExReleaseFastMutex @ 0x1406CE170
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x1406CE5F8 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)Mutex);
  VfDeadlockReleaseResource(Mutex, 3u, (__int64)KeGetCurrentThread(), retaddr);
  pXdvExReleaseFastMutex(Mutex);
  ViKeIrqlLogCommon(v2, 1u);
}
