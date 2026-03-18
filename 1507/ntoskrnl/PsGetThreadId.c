/*
 * XREFs of PsGetThreadId @ 0x1401191F0
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1403FB0BC (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return Thread[1].KernelStack;
}
