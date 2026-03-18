/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x14007E4F4
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140472210 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  *(_BYTE *)(a1 + 1466) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
