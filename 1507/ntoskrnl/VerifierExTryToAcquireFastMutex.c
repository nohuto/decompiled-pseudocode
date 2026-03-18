/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x140751C38
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x140752060 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(struct _FAST_MUTEX *a1)
{
  char v2; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1);
  if ( v2 )
    VfDeadlockAcquireResource((__int64)a1, 3u, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}
