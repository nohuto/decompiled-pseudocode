/*
 * XREFs of DbgPrompt @ 0x1402111A0
 * Callers:
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14067FCDC (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140167320 (DebugPrompt.c)
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
