/*
 * XREFs of KeInitializeSemaphore @ 0x1400EFE80
 * Callers:
 *     PopWakeDeviceList @ 0x1403CF194 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403CF2F0 (PopSleepDeviceList.c)
 *     AlpcpInitializePort @ 0x14049FCA0 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1404F9390 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x14054F6D0 (MiInitializeSections.c)
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
