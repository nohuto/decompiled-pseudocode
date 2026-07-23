/*
 * XREFs of PsGetThreadId @ 0x14009D964
 * Callers:
 *     PfpScenCtxServiceThreadSet @ 0x1403D6A10 (PfpScenCtxServiceThreadSet.c)
 *     PfSnBeginTrace @ 0x1403EACC8 (PfSnBeginTrace.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return Thread[1].KernelStack;
}
