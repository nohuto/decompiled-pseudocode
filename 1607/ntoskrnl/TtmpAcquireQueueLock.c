/*
 * XREFs of TtmpAcquireQueueLock @ 0x14067A364
 * Callers:
 *     TtmiCloseEventQueue @ 0x140679EFC (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14067A0C0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
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
