/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14024EF1C
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140356C38, &LockHandle);
  qword_140356C78 = a1;
  LOBYTE(a1) = qword_140356BC0 != (_QWORD)&qword_140356BC0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
