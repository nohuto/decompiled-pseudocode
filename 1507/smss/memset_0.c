/*
 * XREFs of memset_0 @ 0x14000C6C8
 * Callers:
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 *     SmscpExecuteInitialCommand @ 0x140003280 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x140003328 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x1400033EC (SmscpLoadSubSystem.c)
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140006090 (SmpApiCallback.c)
 *     SmpOpenKnownDllsHandles @ 0x140006BC0 (SmpOpenKnownDllsHandles.c)
 *     SmpInitializeControlBlock @ 0x1400079B8 (SmpInitializeControlBlock.c)
 *     SmpPagefileInitialize @ 0x140008580 (SmpPagefileInitialize.c)
 *     SmpSaveOldPageFiles @ 0x14000B21C (SmpSaveOldPageFiles.c)
 *     RtlStringCbPrintfExW @ 0x1400115D8 (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1400117A8 (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x140012100 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x1400123A4 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140012994 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140012C88 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x1400136AC (SmscpNotifySmOfFailure.c)
 *     BaseFindFirstDevice @ 0x1400150DC (BaseFindFirstDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
