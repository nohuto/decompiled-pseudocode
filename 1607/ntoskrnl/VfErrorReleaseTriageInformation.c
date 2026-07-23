/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1406FE488
 * Callers:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
