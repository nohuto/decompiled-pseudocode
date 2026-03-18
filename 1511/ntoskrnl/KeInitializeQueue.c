/*
 * XREFs of KeInitializeQueue @ 0x1400931DC
 * Callers:
 *     PopFxRegisterPluginEx @ 0x1401EAB24 (PopFxRegisterPluginEx.c)
 *     NtCreateIoCompletion @ 0x14044E840 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     KeInitializeUmsThread @ 0x14061B1E0 (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x14076C294 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x14076E2E0 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x14076E46C (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
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
