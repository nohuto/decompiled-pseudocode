/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14021941C
 * Callers:
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403298A8, &LockHandle);
  qword_1403298E8 = a1;
  LOBYTE(a1) = qword_140329830 != (_QWORD)&qword_140329830;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
