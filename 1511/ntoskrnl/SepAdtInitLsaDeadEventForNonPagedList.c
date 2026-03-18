/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x140200060
 * Callers:
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140306918, &LockHandle);
  qword_140306958 = a1;
  LOBYTE(a1) = qword_1403068A0 != (_QWORD)&qword_1403068A0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
