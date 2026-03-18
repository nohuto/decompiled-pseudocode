/*
 * XREFs of DbgPrompt @ 0x1401F77D0
 * Callers:
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1406417F4 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x14015B910 (DebugPrompt.c)
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
