/*
 * XREFs of VfUtilDbgPrint @ 0x14020AB90
 * Callers:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14020BC20 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14020BCAC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14020BD48 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 *     VfUtilClearOneBootSettings @ 0x1406B7488 (VfUtilClearOneBootSettings.c)
 *     VfUtilPrintCheckinString @ 0x1406B76C8 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1406B7A94 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1406B7AFC (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1406B7DB8 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1406B8314 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1406B8EA0 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1406B8F84 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1406B90A0 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1406BC414 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1406BD234 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1406BE384 (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1406C1914 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1406C298C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1406C2A1C (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1406C59AC (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x1406C86B8 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1406C9A30 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1406CA508 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1406CA7A4 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1406CB3B8 (ViCtxCheckAndReleaseIsrState.c)
 *     ViDeadlockPreprocessOptions @ 0x1406CD8E8 (ViDeadlockPreprocessOptions.c)
 *     VerifierNtCreateFile @ 0x1406D07C0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1406D08DC (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1406D09F4 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintEx @ 0x1400E69B0 (vDbgPrintEx.c)
 */

ULONG VfUtilDbgPrint(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x65u, 0, Format, va);
}
