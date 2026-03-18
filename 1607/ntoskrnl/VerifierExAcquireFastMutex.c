/*
 * XREFs of VerifierExAcquireFastMutex @ 0x14071A140
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x14071A5CC (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(__int64 a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  VfDeadlockAcquireResource(a1, 3u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
