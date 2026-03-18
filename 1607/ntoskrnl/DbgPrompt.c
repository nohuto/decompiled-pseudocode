/*
 * XREFs of DbgPrompt @ 0x140211374
 * Callers:
 *     RtlAssert @ 0x140213458 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14067FBF8 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140166DB0 (DebugPrompt.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
