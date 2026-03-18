/*
 * XREFs of GetW32kEtwEnabledKeyword @ 0x1C00B64B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID GetW32kEtwEnabledKeyword()
{
  return WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
}
