/*
 * XREFs of VfUtilDbgPrint @ 0x140222478
 * Callers:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223594 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223630 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilClearOneBootSettings @ 0x140702CB0 (VfUtilClearOneBootSettings.c)
 *     VfUtilPrintCheckinString @ 0x140702EF0 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140703918 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140703980 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140703C3C (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1407043D0 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140704F5C (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140705040 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x14070515C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1407092D8 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14070D9AC (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14070EA4C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14070EADC (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407119FC (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140717060 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x140718440 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140718F18 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1407191B4 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140719DC8 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x14071C968 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x14071CA84 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x14071CB9C (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintEx @ 0x140084D0C (vDbgPrintEx.c)
 */

ULONG VfUtilDbgPrint(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x65u, 0, Format, va);
}
