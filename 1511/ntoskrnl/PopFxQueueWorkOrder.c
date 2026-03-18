/*
 * XREFs of PopFxQueueWorkOrder @ 0x1400DC96C
 * Callers:
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x1400DC918 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14012FB48 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1401EA3E4 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x1400DAFA4 (PopFxAddRefDevice.c)
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
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
