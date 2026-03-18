/*
 * XREFs of KeRemoveQueue @ 0x1400F4D38
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x1401420E8 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14014255C (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x140142838 (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1401CC49C (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404CFFE4 (EtwpReceiveReplyDataBlock.c)
 *     VerifierKeRemoveQueue @ 0x1406C0A88 (VerifierKeRemoveQueue.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
