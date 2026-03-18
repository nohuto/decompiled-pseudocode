/*
 * XREFs of PsCaptureExceptionPort @ 0x1403F1E5C
 * Callers:
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspFreezeProcessWorker @ 0x1406418B0 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
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
