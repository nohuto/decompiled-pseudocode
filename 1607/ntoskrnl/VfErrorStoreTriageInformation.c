/*
 * XREFs of VfErrorStoreTriageInformation @ 0x14070EB60
 * Callers:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407119FC (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x140717060 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140719DC8 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_14072C428 = a2;
    qword_14072C430 = a3;
    qword_14072C438 = a4;
    qword_14072C440 = a5;
  }
  return v5;
}
