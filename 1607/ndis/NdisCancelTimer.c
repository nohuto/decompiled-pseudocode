/*
 * XREFs of NdisCancelTimer @ 0x1C001BF60
 * Callers:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00AD438 (ndisCancelInitModeTimeoutTimer.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
