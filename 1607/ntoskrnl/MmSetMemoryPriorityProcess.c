/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x14007E574
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x1404710E0 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  *(_BYTE *)(a1 + 1466) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
