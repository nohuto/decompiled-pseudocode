/*
 * XREFs of VfUtilDbgPrint @ 0x14022264C
 * Callers:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x140223660 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402236DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223768 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223804 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028B0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilClearOneBootSettings @ 0x140702C80 (VfUtilClearOneBootSettings.c)
 *     VfUtilPrintCheckinString @ 0x140702EC0 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1407038E8 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140703950 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140703C0C (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1407043A0 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140704F2C (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140705010 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x14070512C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x140708488 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1407092A8 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A3DC (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x14070D810 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14070D97C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14070EA1C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14070EAAC (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x14070EB74 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
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
 *     vDbgPrintEx @ 0x140081B88 (vDbgPrintEx.c)
 */

ULONG VfUtilDbgPrint(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x65u, 0, Format, va);
}
