/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1406B2718
 * Callers:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
