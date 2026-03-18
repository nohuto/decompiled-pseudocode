/*
 * XREFs of PsCaptureExceptionPort @ 0x140509690
 * Callers:
 *     DbgkForwardException @ 0x1404DBC50 (DbgkForwardException.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PspFreezeProcessWorker @ 0x14067FCFC (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x1406B634C (ExpRaiseHardError.c)
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
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
