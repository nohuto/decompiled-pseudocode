/*
 * XREFs of NdisCancelTimer @ 0x1C0020000
 * Callers:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00A97A4 (ndisCancelInitModeTimeoutTimer.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
