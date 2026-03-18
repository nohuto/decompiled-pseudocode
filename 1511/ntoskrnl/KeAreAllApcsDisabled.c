/*
 * XREFs of KeAreAllApcsDisabled @ 0x140098520
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FF608 (PnpIsSafeToExamineUserModeTeb.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     VerifierKeAreAllApcsDisabled @ 0x1406C095C (VerifierKeAreAllApcsDisabled.c)
 *     ViZwCheckApcRequirement @ 0x1406D4AF0 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
