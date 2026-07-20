/*
 * XREFs of memset_0 @ 0x14000CC60
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140001D10 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x140001DB8 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x140001E6C (SmscpLoadSubSystem.c)
 *     SmpStartCsr @ 0x140003620 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x1400039F0 (SmpApiCallback.c)
 *     SmpInitializeControlBlock @ 0x14000465C (SmpInitializeControlBlock.c)
 *     SmpOpenKnownDllsHandles @ 0x140005740 (SmpOpenKnownDllsHandles.c)
 *     SmpPagefileInitialize @ 0x1400067B0 (SmpPagefileInitialize.c)
 *     SmpSaveOldPageFiles @ 0x14000A108 (SmpSaveOldPageFiles.c)
 *     SmpInit @ 0x14000A460 (SmpInit.c)
 *     RtlStringCbPrintfExW @ 0x1400119E8 (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140011BB8 (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x140012510 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x1400127B4 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140012DA4 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140013190 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x140013C9C (SmscpNotifySmOfFailure.c)
 *     BaseFindFirstDevice @ 0x14001599C (BaseFindFirstDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
