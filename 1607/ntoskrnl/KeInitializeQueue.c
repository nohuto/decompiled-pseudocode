/*
 * XREFs of KeInitializeQueue @ 0x14007DEC4
 * Callers:
 *     PopFxRegisterPluginEx @ 0x140203328 (PopFxRegisterPluginEx.c)
 *     NtCreateIoCompletion @ 0x1404700B0 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     KeInitializeUmsThread @ 0x1406505D4 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1407B6AE0 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x1407B80E0 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x1407B8408 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
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
    Queue->MaximumCount = KeQueryActiveProcessorCountEx(0xFFFFu);
}
