/*
 * XREFs of KeInitializeSemaphore @ 0x1400F2030
 * Callers:
 *     PopWakeDeviceList @ 0x1403CF194 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403CF2F0 (PopSleepDeviceList.c)
 *     AlpcpInitializePort @ 0x1404B58C0 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140515FA0 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x14054F190 (MiInitializeSections.c)
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
