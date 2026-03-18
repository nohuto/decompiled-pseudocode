/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x140751A64
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140751A9C (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  VfDeadlockAcquireResource(a1, 4u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
