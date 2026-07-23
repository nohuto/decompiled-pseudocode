/*
 * XREFs of PsCaptureExceptionPort @ 0x1404EC620
 * Callers:
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspFreezeProcessWorker @ 0x14067FDE0 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  void *v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 848) )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a1, (__int64)CurrentThread);
    v1 = (void *)(*(_QWORD *)(a1 + 848) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v1);
    PspUnlockProcessShared(a1, (__int64)CurrentThread);
  }
  return v1;
}
