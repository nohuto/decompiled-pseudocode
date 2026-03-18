/*
 * XREFs of PopFxAddRefDevice @ 0x1400DAFA4
 * Callers:
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     PopFxActivateComponentWorker @ 0x1400DAF10 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400DB11C (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1400DC96C (PopFxQueueWorkOrder.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 208), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
