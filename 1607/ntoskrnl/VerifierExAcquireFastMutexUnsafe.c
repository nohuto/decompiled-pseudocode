/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x14071A18C
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14071A1C4 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  VfDeadlockAcquireResource(a1, 4u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
