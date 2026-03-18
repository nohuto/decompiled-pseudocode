/*
 * XREFs of GreGetHandleCount @ 0x1C00C0850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return *((unsigned int *)WPP_MAIN_CB.Dpc.DeferredContext + 1);
}
