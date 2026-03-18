/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1406C2AA0
 * Callers:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1406C59AC (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x1406C86B8 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1406CB3B8 (ViCtxCheckAndReleaseIsrState.c)
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
    qword_1406E03F0 = a2;
    qword_1406E03F8 = a3;
    qword_1406E0400 = a4;
    qword_1406E0408 = a5;
  }
  return v5;
}
