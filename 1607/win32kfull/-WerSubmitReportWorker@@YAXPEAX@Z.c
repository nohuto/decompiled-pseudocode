/*
 * XREFs of ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C0226600
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1C0249348 (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall WerSubmitReportWorker(unsigned int *StartContext)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext, v2, v3);
}
