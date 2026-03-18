/*
 * XREFs of DbgPrompt @ 0x140246600
 * Callers:
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1406C3D14 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x14018B3F0 (DebugPrompt.c)
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
