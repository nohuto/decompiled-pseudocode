/*
 * XREFs of PsGetThreadId @ 0x1400E3450
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1403AA9DC (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return Thread[1].KernelStack;
}
