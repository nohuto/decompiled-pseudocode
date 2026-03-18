/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x1405F45A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
