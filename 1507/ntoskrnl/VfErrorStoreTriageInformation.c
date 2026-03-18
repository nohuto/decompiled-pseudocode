/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140744340
 * Callers:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140747628 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14074B1FC (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14074EA4C (ViCtxCheckAndReleaseIsrState.c)
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
    qword_1407633F0 = a2;
    qword_1407633F8 = a3;
    qword_140763400 = a4;
    qword_140763408 = a5;
  }
  return v5;
}
