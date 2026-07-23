/*
 * XREFs of KeRemoveQueue @ 0x1400A6C30
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14013DCFC (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x14014BF30 (FsRtlWorkerThread.c)
 *     PopFxEmergencyWorker @ 0x14014C3C8 (PopFxEmergencyWorker.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14014C824 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1401DBF54 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404B7390 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
