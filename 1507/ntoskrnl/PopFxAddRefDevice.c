/*
 * XREFs of PopFxAddRefDevice @ 0x1400277F0
 * Callers:
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 208), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
