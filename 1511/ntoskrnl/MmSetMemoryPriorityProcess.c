/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x1400936F0
 * Callers:
 *     PspComputeQuantumAndPriority @ 0x14044F79C (PspComputeQuantumAndPriority.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_BYTE *)(a1 + 1498) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
