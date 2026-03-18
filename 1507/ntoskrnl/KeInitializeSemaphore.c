/*
 * XREFs of KeInitializeSemaphore @ 0x14002123C
 * Callers:
 *     PopWakeDeviceList @ 0x1403EE7E8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403EE95C (PopSleepDeviceList.c)
 *     NtCreateSemaphore @ 0x140451360 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x140472328 (AlpcpInitializePort.c)
 *     MiInitializeSections @ 0x140597028 (MiInitializeSections.c)
 *     VerifierKeInitializeSemaphore @ 0x140748310 (VerifierKeInitializeSemaphore.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Limit = Limit;
}
