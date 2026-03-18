/*
 * XREFs of KeInitializeQueue @ 0x14002E384
 * Callers:
 *     PopFxRegisterPluginEx @ 0x14023891C (PopFxRegisterPluginEx.c)
 *     NtCreateIoCompletion @ 0x1404701AC (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     KeInitializeUmsThread @ 0x140699CF0 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1407E14A8 (FsRtlInitializeWorkerThread.c)
 *     PoFxInitPowerManagement @ 0x1407E2C8C (PoFxInitPowerManagement.c)
 *     IopInitializePassiveInterruptServices @ 0x1407E3660 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  LOWORD(Queue->Header.Lock) = 4;
  Queue->Header.Size = 16;
  Queue->Header.SignalState = 0;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->CurrentCount = 0;
  if ( Count )
    Queue->MaximumCount = Count;
  else
    Queue->MaximumCount = KeNumberProcessors_0;
}
