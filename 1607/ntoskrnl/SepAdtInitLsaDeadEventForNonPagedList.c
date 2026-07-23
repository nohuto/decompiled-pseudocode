/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x140219248
 * Callers:
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403298D8, &LockHandle);
  qword_140329918 = a1;
  LOBYTE(a1) = qword_140329860 != (_QWORD)&qword_140329860;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
