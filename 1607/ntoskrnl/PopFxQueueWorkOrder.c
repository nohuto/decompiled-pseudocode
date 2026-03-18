/*
 * XREFs of PopFxQueueWorkOrder @ 0x1400C3074
 * Callers:
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x1400C3020 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140131EB4 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202DBC (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     KeInsertQueue @ 0x140085F70 (KeInsertQueue.c)
 *     PopFxAddRefDevice @ 0x1400C16F4 (PopFxAddRefDevice.c)
 *     ExTryQueueWorkItem @ 0x1400C30E0 (ExTryQueueWorkItem.c)
 */

signed __int32 __fastcall PopFxQueueWorkOrder(PRKQUEUE Queue, PLIST_ENTRY Entry, ULONG_PTR BugCheckParameter2, char a4)
{
  signed __int32 result; // eax

  result = _InterlockedIncrement((volatile signed __int32 *)&Entry[2]);
  if ( result == 1 )
  {
    if ( BugCheckParameter2 )
      PopFxAddRefDevice(BugCheckParameter2);
    if ( a4 )
      return KeInsertQueue(Queue, Entry);
    result = ExTryQueueWorkItem(Entry, 48LL);
    if ( !(_BYTE)result )
      return KeInsertQueue(Queue, Entry);
  }
  return result;
}
