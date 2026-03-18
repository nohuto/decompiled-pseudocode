/*
 * XREFs of KeInitializeSemaphore @ 0x14002D400
 * Callers:
 *     PopWakeDeviceList @ 0x1403A4EC8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403A503C (PopSleepDeviceList.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1403F1A14 (NtCreateSemaphore.c)
 *     AlpcpInitializePort @ 0x14046C500 (AlpcpInitializePort.c)
 *     MiInitializeSections @ 0x140520684 (MiInitializeSections.c)
 *     VerifierKeInitializeSemaphore @ 0x1406C6004 (VerifierKeInitializeSemaphore.c)
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
