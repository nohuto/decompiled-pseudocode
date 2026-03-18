/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140751A18
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x140751EEC (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(struct _FAST_MUTEX *a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1);
  VfDeadlockAcquireResource((__int64)a1, 3u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
