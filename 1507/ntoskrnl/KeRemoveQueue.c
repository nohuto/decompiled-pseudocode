/*
 * XREFs of KeRemoveQueue @ 0x140125DFC
 * Callers:
 *     VerifierKeRemoveQueue @ 0x1407422C8 (VerifierKeRemoveQueue.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
