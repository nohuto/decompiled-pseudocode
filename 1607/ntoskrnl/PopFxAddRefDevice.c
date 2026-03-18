/*
 * XREFs of PopFxAddRefDevice @ 0x1400C16F4
 * Callers:
 *     PopFxActivateDevice @ 0x140008088 (PopFxActivateDevice.c)
 *     PopFxActivateComponentWorker @ 0x1400C1660 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400C1860 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1400C3074 (PopFxQueueWorkOrder.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400C1730 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 208), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
