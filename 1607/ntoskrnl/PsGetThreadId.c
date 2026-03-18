/*
 * XREFs of PsGetThreadId @ 0x14009E164
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1403D6A10 (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return Thread[1].KernelStack;
}
