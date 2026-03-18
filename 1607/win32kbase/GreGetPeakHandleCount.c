/*
 * XREFs of GreGetPeakHandleCount @ 0x1C00C0860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)WPP_MAIN_CB.Dpc.DeferredContext;
}
