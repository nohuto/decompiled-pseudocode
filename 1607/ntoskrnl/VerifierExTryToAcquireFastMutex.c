/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x14071A318
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x14071A6E8 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(__int64 a1)
{
  char v2; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 3u, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}
