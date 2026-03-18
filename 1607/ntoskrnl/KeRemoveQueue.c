/*
 * XREFs of KeRemoveQueue @ 0x1400A86B8
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14013D78C (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x14014B9C0 (FsRtlWorkerThread.c)
 *     PopFxEmergencyWorker @ 0x14014BE58 (PopFxEmergencyWorker.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14014C2B4 (IopPassiveInterruptRealtimeWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1401DC128 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404D38F0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
