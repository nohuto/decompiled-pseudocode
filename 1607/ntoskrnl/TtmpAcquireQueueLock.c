/*
 * XREFs of TtmpAcquireQueueLock @ 0x14067A280
 * Callers:
 *     TtmiCloseEventQueue @ 0x140679E18 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140679FDC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A12C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall TtmpAcquireQueueLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
}
