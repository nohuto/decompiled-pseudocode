/*
 * XREFs of ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C0226410
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1C024D088 (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall WerSubmitReportWorker(unsigned int *StartContext)
{
  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext);
}
