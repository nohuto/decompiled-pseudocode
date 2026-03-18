/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x14002B708
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x14046A228 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_BYTE *)(a1 + 1490) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
