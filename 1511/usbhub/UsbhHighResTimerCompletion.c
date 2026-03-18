/*
 * XREFs of UsbhHighResTimerCompletion @ 0x1C0026160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall UsbhHighResTimerCompletion(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
