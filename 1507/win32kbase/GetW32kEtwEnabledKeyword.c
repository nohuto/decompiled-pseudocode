/*
 * XREFs of GetW32kEtwEnabledKeyword @ 0x1C00A87F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_CONTROL GetW32kEtwEnabledKeyword()
{
  return WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
}
