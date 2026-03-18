/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x14061E904
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
